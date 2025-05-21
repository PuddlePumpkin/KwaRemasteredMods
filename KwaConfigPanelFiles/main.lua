require("KwaHelpers.ConfigPanelHelpers")

-- Try to register and set up the panel
local ModPanel = nil
LoopAsync(3000, function()
    -- Registering the mod, and getting our reference to its associated panel
    -- If we dont want it to save parameters, we can set the second parameter to false
    -- If we only want to save parameters (no visual config panel), we can set the third parameter to true
    if ModPanel then return true end
    ModPanel = RegisterMod("LuaTestMod", true, false)
    if not ModPanel then
        -- Loop till panel is ready
        return false
    end
    
    -- ---------------------------------------------
    -- Example: Adding rows
    -- ---------------------------------------------

    -- Section Header | labelText, style, font, fontsize
    AddRowSectionHeader(ModPanel, "TEST LABEL")

    -- Separator | height, showLine
    AddRowSeparator(ModPanel)

    -- Slider | label, uniqueIdentifier, minValue, maxValue, defaultValue, numberSuffix, decimalCount, snapSlider, snapSize
    AddRowSlider(ModPanel, "Slider", "SliderExampleID", 0, 100, 1)

    -- Bool switch | label, uniqueIdentifier, defaultValue
    AddRowBoolSwitch(ModPanel, "ExampleBoolSwitch", "BoolSwitchExampleID", true)

    -- Switch box row | label, uniqueIdentifier, defaultValue, options
    local SwitchBoxOptions = {"Option A", "Option B", "Option C"}
    AddRowSwitchBox(ModPanel, "Choose Option", "OptionChoiceID", 0, SwitchBoxOptions)

    -- String list row | label, uniqueIdentifier
    AddRowStringList(ModPanel, "My String List", "MyStringListID")

    -- Button row | buttonOneLabel, buttonTwoLabel, uniqueIdentifier, showSecondButton
    AddRowButtons(ModPanel, "Button 1", "Button 2", "ActionButtonsID", true)

    -- ---------------------------------------------
    -- Example: Registering callbacks
    -- These are called on change, as well as after loading parameters if the value isnt default
    -- --------------------------------------------- 

    RegisterCallback(ModPanel, "SliderExampleID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(ModPanel, "BoolSwitchExampleID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(ModPanel, "OptionChoiceID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(ModPanel, "MyStringListID", function(value)
        print("Successfully heard callback: " .. table.concat(value, ", "))
    end)
    RegisterCallback(ModPanel, "ActionButtonsID", function(value)
        print("Successfully heard callback, Button pressed: " .. tostring(value))
    end)


    -- Load parameters after setup is done
    LoadParameters(ModPanel)
    print("Panel setup complete")
    

    -- ---------------------------------------------
    -- Example: Using the panel to set and get parameters, and save them
    -- ---------------------------------------------
    -- Bool Parameter Example
    SetBoolParameter(ModPanel, "ExampleBoolParam", true)
    local value, found = GetBoolParameter(ModPanel, "ExampleBoolParam")
    print("ExampleBoolParam: " .. tostring(value) .. " Found:" .. tostring(found))

    -- Float Parameter Example
    SetFloatParameter(ModPanel, "ExampleFloatParam", 1.23)
    local value, found = GetFloatParameter(ModPanel, "ExampleFloatParam")
    print("ExampleFloatParam: " .. tostring(value) .. " Found:" .. tostring(found))

    -- Int Parameter Example
    SetIntParameter(ModPanel, "ExampleIntParam", 123)
    local value, found = GetIntParameter(ModPanel, "ExampleIntParam")
    print("ExampleIntParam: " .. tostring(value) .. " Found:" .. tostring(found))  

    -- String Parameter Example
    SetStringParameter(ModPanel,"ExampleStringParam", "Example string here")

    local value, found = GetStringParameter(ModPanel, "ExampleStringParam")
    print("ExampleStringParam: " .. tostring(value) .. " Found:" .. tostring(found))
    
    -- String Array Parameter Example
    local ExampleArray = {"Alpha", "Beta", "Gamma"}
    SetStringArrayParameter(ModPanel, "ExampleStringArrayParam", ExampleArray)
    print("Set to: " .. table.concat(ExampleArray, ", "))

    local value, found = GetStringArrayParameter(ModPanel, "ExampleStringArrayParam")
    print("Output array: " .. table.concat(value, ", ") .. " Found:" .. tostring(found))


    return true
end)