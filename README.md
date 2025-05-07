## Kwa Notifications System


### Notification Component and WBP\_KwaNotifs

The core of the system is comprised of the `NotificationComponent` and the `WBP_ModEntryPoint` widget blueprint. These classes provide the following functions for managing notifications:

* **PrintNotification**: Prints a standard notification message to the notification list.
* **PrintNotificationWithIcon**: Prints a notification message that can optionally include an icon. This function is safe to use even without providing an icon.
* **PrintNotificiationDebug**: Prints a notification message only when debug messages are explicitly enabled.
* **SetDebugMessagesEnabled**: Configures whether debug messages are enabled. This function should ideally be used in conjunction with the `OnReady` event to ensure the component is properly initialized.

### Events

Both `NotificationComponent` and `WBP_ModEntryPoint` expose several bindable delegates to react to notification events:

* **OnKwaNotification**: Called specifically when a custom notification originating from this system is posted.
* **OnAnyNotification**: Called whenever any notification is posted, including both vanilla game notifications and custom notifications from this system.
* **OnVanillaNotification**: Called specifically when a notification originating from the base game is posted.

#### Component Only Event:

* **OnReady**: This event is unique to the `NotificationComponent` and is called when a valid reference to the `WBP_KwaNotifs` widget is successfully located.

### BPFL\_KwaNotifications

The `BPFL_KwaNotifications` Global blueprint function for triggering notifications:

* **PrintNotificationSlow**: This function finds all available references to the `WBP_KwaNotifs` widget and invokes its print message function on each, broadcasting the notification, should be used sparingly due to global widget search.