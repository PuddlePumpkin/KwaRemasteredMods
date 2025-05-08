print("[KwaNotificationsLua] Initializing script...")

-- Console command handler
RegisterConsoleCommandHandler("PrintExampleNotification", function()
    print("Executing command...")
    
    -- Find all KwaNotifs widgets
    local KwaNotifsRefs = FindObjects(0, "WBP_KwaNotifs_C", nil, 0, 0, true)
    if not KwaNotifsRefs or #KwaNotifsRefs == 0 then
        print("ERROR: Widget not found")
        return true
    end

    -- Select the instance with the transient path
    local KwaNotifRef = nil
    for _, h in ipairs(KwaNotifsRefs) do
        if h:GetFullName():find("/Engine/Transient") then
            KwaNotifRef = h
            break
        end
    end

    if not KwaNotifRef or not KwaNotifRef:IsValid() then
        print("ERROR: No valid transient widget found")
        return true
    end

    local success, err = pcall(function()
        KwaNotifRef:PrintNotification("Example Notification", 1)
    end)
    
    print(success and "Success" or "ERROR: " .. tostring(err))

    local success, err = pcall(function()
        KwaNotifRef:PrintNotification("Example Notification Long", 10)
    end)
    
    print(success and "Success" or "ERROR: " .. tostring(err))

    return true
end)