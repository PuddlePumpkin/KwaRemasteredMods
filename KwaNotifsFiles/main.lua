print("[KwaNotifs] Initializing logging...")
local HookCreated
LoopAsync(3000, function()
    if HookCreated then return end
    local ok, err = pcall(function()
        RegisterHook("/Game/Mods/KwaNotificationsBP_P/WBP_KwaNotifs.WBP_KwaNotifs_C:Log", function(context, strParam)
            print("[KwaNotifs] Log: " .. strParam:get():ToString())
        end)
    end)
    if ok then
        print("[KwaNotifs] Hook registered successfully")
        HookCreated = true
    end
end)