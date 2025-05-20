require("KwaHelpers.ConfigPanelHelpers")

-- Try to register and set up the panel
local ModPanel = nil
LoopAsync(3000, function()
    if ModPanel then return true end
    ModPanel = RegisterMod("LuaTestMod", true, false)
    if not ModPanel then
        print("Panel not ready yet, retrying...")
        return false
    end
    
    print("Panel ready, adding rows")

    -- Add rows to the mod panel
    AddRowSectionHeader(ModPanel, "TEST LABEL")
    AddRowSeparator(ModPanel)
    AddRowSlider(ModPanel, "Slider", "SliderSave1", 0, 100, 1)
    AddRowSeparator(ModPanel, 40, true)
    -- Register slider callback
    RegisterCallback(ModPanel, "SliderSave1", function(value)
        print("Successfully heard callback:", value)
    end)
    -- Load parameters after setup is done
    LoadParameters(ModPanel)
    print("Panel setup complete")
    
    -- String Parameter Example
    SetStringParameter(ModPanel,"ExampleStringParam", "Example string here")

    local value, found = GetStringParameter(ModPanel, "ExampleStringParam")
    print("ExampleStringParam: ", value, "Found:", found)

    -- String Array Parameter Example
    local ExampleArray = {"Alpha", "Beta", "Gamma"}
    SetStringArrayParameter(ModPanel, "ExampleStringArrayParam", ExampleArray)
    print("Set to: ", table.concat(ExampleArray, ", "))

    local retrievedArray, found = GetStringArrayParameter(ModPanel, "ExampleStringArrayParam")
    print("Output array: ", table.concat(retrievedArray, ", ") , "Found:", found)

    return true
end)