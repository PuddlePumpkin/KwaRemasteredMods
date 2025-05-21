require("KwaHelpers.ConfigPanelHelpers")


RegisterMod("LuaExampleMod", true, false, function(modPanel)
    -- ---------------------------------------------
    -- Example: Adding rows, these are all the rows with lua helper functions
    -- ---------------------------------------------

    -- Section Header | labelText, style, font, fontsize
    AddRowSectionHeader(modPanel, "Lua Example")

    -- Separator | height, showLine
    AddRowSeparator(modPanel)

    -- Slider | label, uniqueIdentifier, minValue, maxValue, defaultValue, numberSuffix, decimalCount, bDoSnapSlider, snapSize
    -- Float parameter, callback returns the float value
    AddRowSlider(modPanel, "Slider", "SliderExampleID", 0, 100, 1)

    -- Bool switch | label, uniqueIdentifier, defaultValue
    -- Bool parameter, callback returns the bool value
    AddRowBoolSwitch(modPanel, "ExampleBoolSwitch", "BoolSwitchExampleID", true)

    -- Switch box row | label, uniqueIdentifier, defaultValue, options
    -- Int parameter, callback returns the index of the option selected
    local SwitchBoxOptions = {"Option A", "Option B", "Option C"}
    AddRowSwitchBox(modPanel, "Choose Option", "OptionChoiceID", 0, SwitchBoxOptions)

    -- String list row | label, uniqueIdentifier
    -- StringArray parameter, callback returns the table of strings that are entered
    AddRowStringList(modPanel, "My String List", "MyStringListID")

    -- Button row | buttonOneLabel, buttonTwoLabel, uniqueIdentifier, showSecondButton
    -- Int parameter, callback returns the index of the button pressed
    AddRowButtons(modPanel, "Button 1", "Button 2", "ActionButtonsID", true)

    -- ---------------------------------------------
    -- Example: Registering callbacks
    -- These are called on change, as well as after loading parameters if the value isnt default
    -- ---------------------------------------------

    RegisterCallback(modPanel, "SliderExampleID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(modPanel, "BoolSwitchExampleID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(modPanel, "OptionChoiceID", function(value)
        print("Successfully heard callback: " .. tostring(value))
    end)
    RegisterCallback(modPanel, "MyStringListID", function(value)
        print("Successfully heard callback: " .. table.concat(value, ", "))
    end)
    RegisterCallback(modPanel, "ActionButtonsID", function(value)
        print("Successfully heard callback, Button pressed: " .. tostring(value))
    end)

    -- Load parameters after setup is done
    -- Optionally with callback code
    LoadParameters(modPanel, function()
        print("Panel setup complete and parameters loaded.")

        -- ---------------------------------------------
        -- Example: Using the panel to set and get parameters,
        -- If these are UI parameters, setting them will update their elements to reflect new values
        -- They also save parameters without UI elements
        -- ---------------------------------------------

        -- Bool Parameter Example
        SetBoolParameter(modPanel, "ExampleBoolParam", true)
        local value, found = GetBoolParameter(modPanel, "ExampleBoolParam")
        print("ExampleBoolParam: " .. tostring(value) .. " Found:" .. tostring(found))

        -- Float Parameter Example
        SetFloatParameter(modPanel, "ExampleFloatParam", 1.23)
        local value, found = GetFloatParameter(modPanel, "ExampleFloatParam")
        print("ExampleFloatParam: " .. tostring(value) .. " Found:" .. tostring(found))

        -- Int Parameter Example
        SetIntParameter(modPanel, "ExampleIntParam", 123)
        local value, found = GetIntParameter(modPanel, "ExampleIntParam")
        print("ExampleIntParam: " .. tostring(value) .. " Found:" .. tostring(found))

        -- String Parameter Example
        SetStringParameter(modPanel,"ExampleStringParam", "Example string here")
        local value, found = GetStringParameter(modPanel, "ExampleStringParam")
        print("ExampleStringParam: " .. tostring(value) .. " Found:" .. tostring(found))

        -- String Array Parameter Example
        local ExampleStrings = {"Alpha", "Beta", "Gamma"}
        SetStringArrayParameter(modPanel, "ExampleStringArrayParam", ExampleStrings)
        local value, found = GetStringArrayParameter(modPanel, "ExampleStringArrayParam")
        print("Output array: " .. table.concat(value, ", ") .. " Found:" .. tostring(found))

    end) -- End LoadParameters callback
end)