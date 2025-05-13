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
    AddRowSectionLabel(ModPanel, "TEST LABEL")
    AddRowLabel(ModPanel, "TEST LABEL 2")
    AddRowSlider(ModPanel, "Slider", "SliderSaveLabel1", 0, 100, 1)
    -- Register callback
    RegisterCallback("SliderSaveLabel1", function(value)
        print("Successfully heard callback:", value)
    end)
    -- Load parameters after setup is done
    LoadParameters(ModPanel)
    
    print("Panel setup complete")
    return true
end)