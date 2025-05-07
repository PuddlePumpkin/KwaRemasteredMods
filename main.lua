print("[KwaNotificationsLua] Initializing script...")

local ViewModelInstance = nil
local SaveViewModelInstance = nil

-- Console command handler
RegisterConsoleCommandHandler("GetVHUDViewModel", function()
    print("Executing command...")
    -- Find all widgets
    local holders = FindObjects(0, "WBP_KwaNotifs_C", nil, 0, 0, true)
    if not holders or #holders == 0 then
        print("ERROR: Widget not found")
        return true
    end

    -- Get Main Notification View Model
    local ViewModelInstances = FindObjects(0, "VHUDSubtitleViewModel", nil, 0, 0, true)
    if not ViewModelInstances or #ViewModelInstances == 0 then
        print("ERROR: Main View models not found")
        return true
    end

    -- Select the instance with the transient path
    local ViewModelInstance = nil
    for _, h in ipairs(ViewModelInstances) do
        if h:GetFullName():find("/Engine/Transient") then
            ViewModelInstance = h
            break
        end
    end

    -- Get Save Notification View Model
    local SaveViewModelInstances = FindObjects(0, "VHUDSaveNotificationViewModel", nil, 0, 0, true)
    if not SaveViewModelInstances or #SaveViewModelInstances == 0 then
        print("ERROR: Save View models not found")
        return true
    end

    -- Select the instance with the transient path
    local SaveViewModelInstance = nil
    for _, h in ipairs(SaveViewModelInstances) do
        if h:GetFullName():find("/Engine/Transient") then
            SaveViewModelInstance = h
            break
        end
    end

    -- Log all instances for debugging
    print(string.format("[KwaNotificationsLua] Found %d instances of WBP_KwaNotifs_C", #holders))
    for i, holder in ipairs(holders) do
        print(string.format("[KwaNotificationsLua] Instance %d: Address=0x%X, Path=%s", i, holder:GetAddress(), holder:GetFullName()))
    end

    -- Select the instance with the transient path
    local holder = nil
    for _, h in ipairs(holders) do
        if h:GetFullName():find("/Engine/Transient") then
            holder = h
            break
        end
    end

    if not holder or not holder:IsValid() then
        print("ERROR: No valid transient widget found")
        return true
    end

    if not (ViewModelInstance and ViewModelInstance:IsValid()) then
        print("ERROR: No valid ViewModel")
        return true
    end

    if not (SaveViewModelInstance and SaveViewModelInstance:IsValid()) then
        print("ERROR: No valid SaveViewModel")
        return true
    end

    -- Attempt to set view model
    local success, err = pcall(function()
        holder:SetMainViewModel(ViewModelInstance)
    end)
    
    print(success and "Success" or "ERROR: " .. tostring(err))

    -- Attempt to set save view model
    local success, err = pcall(function()
        holder:SetSaveViewModel(SaveViewModelInstance)
    end)
    
    print(success and "Success" or "ERROR: " .. tostring(err))
    return true
end)