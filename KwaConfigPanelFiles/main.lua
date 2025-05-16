require("ConfigPanelHelpers")



-- Try to register and set up the panel
LoopAsync(3000, function()
    -- Register the mod
    local ModPanel = RegisterMod("LuaTestMod", true, false)
    if not ModPanel then
        print("Panel not ready yet, retrying...")
        return false
    end

    print("Panel ready, adding rows")
    
    -- Add rows to the mod panel
    AddRowSectionHeader(ModPanel, "TEST LABEL")
    AddRowSeparator(ModPanel)
    AddRowSlider(ModPanel, "Slider", "SliderSave1", 0, 100, 1)
    AddRowSeparator(ModPanel,40,"True")
    -- Register slider callback
    RegisterCallback(ModPanel, "SliderSave1", function(value)
        print("Successfully heard callback:", value)
    end)
    -- Load parameters after setup is done
    LoadParameters(ModPanel)
    ExecuteWithDelay(3000, function()
        SetStringParameter(ModPanel,"testid", "testid")
        print("String Set")
    end)

    ExecuteWithDelay(5000, function()
        local value, found = GetStringParameter(ModPanel, "testid")
        print("After delay: Value:", value, "Found:", found)
    end)

    
    print("Panel setup complete")
    return true
end)