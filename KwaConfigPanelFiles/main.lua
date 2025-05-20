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
    ExecuteWithDelay(3000, function()
        SetStringParameter(ModPanel,"testid", "testid")
        print("String Set")
    end)

    ExecuteWithDelay(5000, function()
        local value, found = GetStringParameter(ModPanel, "testid")
        print("After delay: Value:", value, "Found:", found)
    end)

    -- Add test calls for string array parameter
    ExecuteWithDelay(7000, function()
        local testArray = {"alpha", "beta", "delta"}
        SetStringArrayParameter(ModPanel, "TestStringArrayParam", testArray)
        --print("Set string array parameter 'TestStringArrayParam' to", table.concat(testArray, ", "))
    end)

    ExecuteWithDelay(9000, function()
        local retrievedArray, found = GetStringArrayParameter(ModPanel, "TestStringArrayParam")
        if found then
            print("Retrieved string array 'TestStringArrayParam':", table.concat(retrievedArray, ", "))
        else
            print("Failed to retrieve string array 'TestStringArrayParam'.")
        end
    end)

    print("Panel setup complete")
    return true
end)