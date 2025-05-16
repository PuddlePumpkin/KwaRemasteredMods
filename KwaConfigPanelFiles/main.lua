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
    RegisterCallback("SliderSave1", function(value)
        print("Successfully heard callback:", value)
    end)
    -- Load parameters after setup is done
    LoadParameters(ModPanel)
    SetStringParameter("TestParameter", "Test")
    GetStringParameter(ModPanel"Test")

    
    print("Panel setup complete")
    return true
end)