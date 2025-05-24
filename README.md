# Kwa Remastered Mods ✨
Repository for my UE4SS Oblivion Remastered Mods

⚠️ **Note:** *No original game assets (textures, meshes, or code) are included in this repository.*

This project is **NOT** associated with Bethesda, Zenimax, Virtuos or any of their subsidiaries!

### Mods: 

*   **[Kwa Configs](Docs/ConfigReadme.md)**: A framework mod that allows other mods to register and add simple UI elements for configuration. Parameters are automatically saved when set.
![Preview Gif](Docs/Configs.gif)

*   **[Kwa Notifications](Docs/NotifsReadme.md)**: A replacement for the base notification system. Featuring stacking notifications, debug printing, and integrated with Kwa Configs to add options for appearance. [On Nexus 🗺️](https://www.nexusmods.com/oblivionremastered/mods/2697)
![Preview Gif](Docs/KwaNotifs.gif)

### Unreal Project Structure

Blueprint mods are primarily located within the `Content/Mods/` directory:

*   `Content/Mods/ExampleMod_P`
*   `Content/Mods/KwaConfigPanelBP_P`
*   `Content/Mods/KwaNotificationsBP_P`

Other content directories contain dummy assets that are not included in the final packaged mods.

### Credits  
* **Kein UHT SDK Dump**  
↳ [github.com/Kein/Altar](https://github.com/Kein/Altar)  
* **UE4SS**  
↳ [github.com/UE4SS-RE/RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)

