print("[KwaNotificationsLua] Initializing script...")

-- Console command handler
RegisterConsoleCommandHandler("PrintExampleNotification", function()
    -- Find reference
    local notif = FindFirstOf("WBP_KwaNotifs_C")
    if not notif or not notif:IsValid() then
        print("ERROR: KwaNotifs not found")
        ar:Log("ERROR: KwaNotifs not found")
        return true
    end

    -- Print Notifications
    notif:Print("Example Notification")
    notif:PrintDebug("This Won't show up without debug messages being enabled")
    notif:SetDebugMessagesEnabled(true) -- This enables debug messages, or you can also press ctrl-shift-D
    notif:PrintDebug("This debug message shows up!")


    -- If you want to print notifications with a set length:
    notif:PrintNotification("Long Notification", 10)
    notif:PrintNotificationDebug("Long Debug Notification", 10)
    --you can also print notifications with icons with an Texture2d object reference: 
    --notif:PrintNotificationWithIcon(String, Duration, TextureObject)


    print("Sent notifications...")
    ar:Log("Sent notifications...")
    return true
end)