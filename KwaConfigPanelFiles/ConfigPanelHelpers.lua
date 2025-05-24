-- -------------------------------------------------------
-- State Declarations
-- -------------------------------------------------------
local HookCreated = {
    float = false,
    int = false,
    string = false,
    stringArray = false,
    bool = false
}

local RequestedHooks = {}

-- -------------------------------------------------------
-- HeaderTypes
-- -------------------------------------------------------
---@param styleType number|string Number (0-5) or string ("SectionHeader", "FlairTop", "FlairBottom", "FlairTopAndBottom", "LineBottom", "Label")
---@return string
local function GetHeaderType(styleType)
    if type(styleType) == "number" then
        local styleTypes = {
            [0] = "SectionHeader",
            [1] = "FlairTop",
            [2] = "FlairBottom",
            [3] = "FlairTopAndBottom",
            [4] = "LineBottom",
            [5] = "Label"
        }
        return styleTypes[styleType] or "Label"
    end
    return styleType or "Label"
end

-- -------------------------------------------------------
-- FontTypes
-- -------------------------------------------------------
---@param fontType number|string Number (0-5) or string ("Kingthings", "Robinson", "Scrivano")
---@return string
local function GetFontType(fontType)
    if type(fontType) == "number" then
        local fontTypes = {
            [0] = "Kingthings",
            [1] = "Robinson",
            [2] = "Scrivano",
        }
        return fontTypes[fontType] or "Label"
    end
    return fontType or "Label"
end

-- -------------------------------------------------------
-- Rows
-- -------------------------------------------------------
-- -------------------------------------------------------
-- Section Header
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param labelText string Text to display in the section header
---@param style? number|string The style type (number 0-5 or string name)
---@param font? number|string The font to use (number 0-2 or string name)
---@param fontsize? number the size of the font to use (default 25)
function AddRowSectionHeader(modPanel, labelText, style, font, fontsize)
    if not modPanel or not modPanel:IsValid() then
        return
    end
    
    local resolvedStyle = GetHeaderType(style or 5)  -- Default to "Label"
    local resolvedFont = GetFontType(font or 0)  -- Default to "Kingthings"
    
    local ReturnValue = {}
    modPanel:AddRowSectionHeader(FText(labelText), resolvedStyle, resolvedFont, fontsize or 25, ReturnValue)
end

-- -------------------------------------------------------
-- Separator
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param height? number height of the separator (default: 16)
---@param showLine? boolean enable to show the line (default: true)
function AddRowSeparator(modPanel, height, showLine)
    if not modPanel or not modPanel:IsValid() then
        return
    end
    
    local ReturnValue = {}
    modPanel:AddRowSeparator(height or 16, showLine or true, ReturnValue)
end

-- -------------------------------------------------------
-- Slider
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the slider
---@param uniqueIdentifier string Unique identifier for saving the value
---@param minValue? number Minimum value (default: 0)
---@param maxValue? number Maximum value (default: 1)
---@param defaultValue? number Default value (default: minValue)
---@param numberSuffix? string Suffix to display after the number (default: "")
---@param decimalCount? number Number of decimal places (default: 0)
---@param bDoSnapSlider? boolean Whether to snap to increments (default: false)
---@param snapSize? number Size of snap increments (default: 1)
function AddRowSlider(modPanel, label, uniqueIdentifier, defaultValue, minValue, maxValue, numberSuffix, decimalCount, bDoSnapSlider, snapSize)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowSlider: modPanel is nil or invalid")
        return
    end
    local ReturnValue = {}
    modPanel:AddRowSlider(
        FText(label),
        FName(uniqueIdentifier),
        defaultValue or (minValue or 0),
        minValue or 0,
        maxValue or 1,
        FText(numberSuffix or ""),
        decimalCount or 0,
        bDoSnapSlider or false,
        snapSize or 1,
        ReturnValue
    )
    SetupFloatCallbackHook()
end

-- -------------------------------------------------------
-- Bool Switch
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the bool switch
---@param uniqueIdentifier string Unique identifier for saving the value
---@param defaultValue? boolean Default value (default: false)
function AddRowBoolSwitch(modPanel, label, uniqueIdentifier, defaultValue)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowBoolSwitch: modPanel is nil or invalid")
        return
    end
    local ReturnValue = {}
    modPanel:AddRowBoolSwitch(
        FText(label),
        FName(uniqueIdentifier),
        defaultValue or false,
        ReturnValue
    )
    SetupBoolCallbackHook()
end

-- -------------------------------------------------------
-- Switch Box
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the switch box
---@param uniqueIdentifier string Unique identifier for saving the value
---@param defaultValue? integer Default selected index (default: 0)
---@param options string[] A list of strings for the options
function AddRowSwitchBox(modPanel, label, uniqueIdentifier, defaultValue, options)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowSwitchBox: modPanel is nil or invalid")
        return
    end
    
    -- Convert Lua table of strings to table of FText objects for options
    local optionsFText = {}
    if options then
        for i, str in ipairs(options) do
            optionsFText[i] = FText(str)
        end
    end

    local ReturnValue = {}
    modPanel:AddRowSwitchBox(
        FText(label),
        FName(uniqueIdentifier),
        defaultValue or 0,
        optionsFText,
        ReturnValue
    )
    SetupIntCallbackHook() -- It's an integer type parameter
end

-- -------------------------------------------------------
-- String List
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the string list
---@param uniqueIdentifier string Unique identifier for saving the value
---@param height? number The height of the panel (default: 250)
function AddRowStringList(modPanel, label, uniqueIdentifier, height)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowStringList: modPanel is nil or invalid")
        return
    end
    
    local ReturnValue = {}
    modPanel:AddRowStringList(
        FText(label),
        FName(uniqueIdentifier),
        height or 250,
        ReturnValue
    )
    SetupStringArrayCallbackHook() -- It's a string array type parameter
end

-- -------------------------------------------------------
-- Number Input
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the number input
---@param uniqueIdentifier string Unique identifier for saving the value
---@param defaultValue? number Default value (default: 0)
---@param minValue? number Minimum value (default: 0)
---@param maxValue? number Maximum value (default: 0)
---@param minSlider? number Minimum value for the slider (default: 0)
---@param maxSlider? number Maximum value for the slider (default: 0)
---@param fractionalDigits? integer Number of fractional digits (default: 2)
function AddRowNumber(modPanel, label, uniqueIdentifier, defaultValue, minValue, maxValue, minSlider, maxSlider, fractionalDigits)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowNumber: modPanel is nil or invalid")
        return
    end
    local ReturnValue = {}
    modPanel:AddRowNumber(
        FText(label),
        FName(uniqueIdentifier),
        defaultValue or 0,
        minValue or 0,
        maxValue or 0,
        minSlider or 0,
        maxSlider or 0,
        fractionalDigits or 2,
        ReturnValue
    )
    SetupFloatCallbackHook() -- It's a number (float) type parameter
end

-- -------------------------------------------------------
-- String Input
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the string input
---@param uniqueIdentifier string Unique identifier for saving the value
---@param hintText? string Hint text for the input field (default: "Enter Text")
---@param defaultString? string Default string value (default: "")
function AddRowString(modPanel, label, uniqueIdentifier, hintText, defaultString)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowString: modPanel is nil or invalid")
        return
    end
    local ReturnValue = {}
    modPanel:AddRowString(
        FText(label),
        FName(uniqueIdentifier),
        FText(hintText or "Enter Text"),
        FString(defaultString or ""),
        ReturnValue
    )
    SetupStringCallbackHook() -- It's a string type parameter
end

-- -------------------------------------------------------
-- Buttons Row
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param buttonOneLabel string Text for the first button
---@param buttonTwoLabel string Text for the second button
---@param uniqueIdentifier string Unique identifier for the row
---@param showSecondButton? boolean Whether to show the second button (default: true)
function AddRowButtons(modPanel, buttonOneLabel, buttonTwoLabel, uniqueIdentifier, showSecondButton)
    if not modPanel or not modPanel:IsValid() then
        error("[KCnfg] AddRowButtons: modPanel is nil or invalid")
        return
    end
    
    local ReturnValue = {}
    modPanel:AddRowButtons(
        FText(buttonOneLabel),
        FText(buttonTwoLabel),
        FName(uniqueIdentifier),
        showSecondButton or true,
        ReturnValue
    )
    SetupIntCallbackHook()
end

-- -------------------------------------------------------
-- Load Params
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param onParametersLoaded? fun() Optional callback to execute after parameters are loaded
function LoadParameters(modPanel, onParametersLoaded)
    if not modPanel then return end

    -- Use LoopAsync to wait for all *requested* hooks to be created
    LoopAsync(1000, function()
        local allHooksReady = true
        local waitingForHooks = {}
        for hookName, requested in pairs(RequestedHooks) do
            if requested and not HookCreated[hookName] then
                allHooksReady = false
                table.insert(waitingForHooks, hookName .. "=false")
            end
        end

        if allHooksReady then
            ExecuteInGameThread(function()
                modPanel:LoadParameters()
            end)
            
            -- Execute callback if provided
            if onParametersLoaded and type(onParametersLoaded) == "function" then
                onParametersLoaded()
            end

            return true -- Stop LoopAsync
        else
            return false -- Continue LoopAsync
        end
    end)
end

-- -------------------------------------------------------
-- Callback Hooks
-- -------------------------------------------------------

---@class ModPanel
---@field YourPanel table The mod's configuration panel

local mod_panel_callbacks = {}

---Register a callback for when a parameter changes
---@param modPanel table The mod configuration panel
---@param saveId string The unique save ID of the parameter
---@param callback fun(value: any) Callback function that receives the changed value
function RegisterCallback(modPanel, saveId, callback)
    if not modPanel or not modPanel:IsValid() then
        return
    end
    
    local addr = modPanel:GetAddress()
    
    if not mod_panel_callbacks[addr] then
        mod_panel_callbacks[addr] = {}
    end
    mod_panel_callbacks[addr][saveId] = callback
end

function SetupFloatCallbackHook()
    -- Float hook
    AttemptRegisterHookAsync("float", "/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaFloatCallback",
                function(PanelRef, ParameterName, ParameterValue)
                    -- Get the actual panel instance from the reference
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        return
                    end
                    
                    -- Get identifying information
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get()
                    
                    -- Find and execute callback
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    end
                end)
end

function SetupIntCallbackHook()
    -- Int hook
    AttemptRegisterHookAsync("int", "/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaIntCallback",
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = math.floor(ParameterValue:get())  -- Ensure integer value
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    end
                end)
end

function SetupBoolCallbackHook()
    -- Bool hook
    AttemptRegisterHookAsync("bool", "/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaBoolCallback",
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get() and true or false  -- Force boolean
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    end
                end)
end

function SetupStringCallbackHook()
    -- String hook
    AttemptRegisterHookAsync("string", "/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaStringCallback",
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get():ToString()
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    end
                end)
end

function SetupStringArrayCallbackHook()
    -- String Array hook
    AttemptRegisterHookAsync("stringArray", "/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaStringArrayCallback",
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        return
                    end

                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()

                    -- Assuming ParameterValue is now directly the TArray<string>
                    local array = ParameterValue:get() -- Get the underlying TArray object

                    if not array or (type(array) == "userdata" and not array.GetArrayNum) then
                        return
                    end

                    local valueArray = {}
                    
                    local arrayLength = array:GetArrayNum()
                    
                    if arrayLength > 0 then
                        -- Assuming the underlying array is 1-indexed in this context
                        for i = 1, arrayLength do
                            local success, elem = pcall(function()
                                return array[i]
                            end)
                            if success and elem then
                                local success, str = pcall(function()
                                    if type(elem) == "userdata" and elem.ToString then
                                        return elem:ToString()
                                    else
                                        -- If not a userdata with ToString, treat as is
                                        return tostring(elem)
                                    end
                                end)
                                if success then
                                    table.insert(valueArray, str)
                                end
                            end
                        end
                    end

                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](valueArray)
                    end
                end)
end

-- -------------------------------------------------------
-- Register Mod
-- -------------------------------------------------------

---@param modName string The name of your mod
---@param doHandleSaves? boolean Whether to handle saves (default: true)
---@param onlyHandleSaves? boolean Whether to only handle saves, no config panel (default: false)
---@param onPanelRegistered? fun(panel: table) Optional callback to execute when the panel is successfully registered
---@return table|nil panel The configuration panel, or nil if not ready yet (the panel is returned asynchronously via the callback)
function RegisterMod(modName, doHandleSaves, onlyHandleSaves, onPanelRegistered)
    if not modName then
        error("modName is required")
        return nil
    end

    print("[KCnfg]["..modName.."] Attempting to register mod:")

    -- Set defaults for boolean parameters
    if doHandleSaves == nil then doHandleSaves = true end
    if onlyHandleSaves == nil then onlyHandleSaves = false end

    local attemptCount = 0 -- Initialize attempt counter

    -- Keep trying to register until we succeed
    LoopAsync(3000, function()
        attemptCount = attemptCount + 1 -- Increment counter

        local MainPanel = FindFirstOf("WBP_KConfigPanel_C")
        if not MainPanel or not MainPanel:IsValid() then
            if attemptCount >= 10 then
                print("[KCnfg]["..modName.."] Max registration attempts (10) reached.")
                return true -- Stop LoopAsync
            end
            return false -- Continue LoopAsync
        end

        print("[KCnfg]["..modName.."] Found main panel, attempting to register")

        -- Create return value table and register mod
        local ReturnValue = {}
        MainPanel:RegisterMod(modName, doHandleSaves, onlyHandleSaves, ReturnValue)

        -- Check if we got the panel
        if not ReturnValue.YourPanel then
            print("[KCnfg]["..modName.."] Warning: ReturnValue.YourPanel is nil")
            return false
        end

        print("[KCnfg]["..modName.."] Successfully registered mod")
        print("[KCnfg]["..modName.."] Panel object:", ReturnValue.YourPanel)
        if ReturnValue.YourPanel.IsValid then
            print("[KCnfg]["..modName.."] Panel is valid:", ReturnValue.YourPanel:IsValid())
        end

        -- Only set up callbacks if we successfully registered
        print("[KCnfg]["..modName.."] Callback setup complete")

        -- Execute the callback if provided
        if onPanelRegistered and type(onPanelRegistered) == "function" then
            onPanelRegistered(ReturnValue.YourPanel)
        end

        return true -- Stop LoopAsync
    end)

    return nil -- Initial return is nil, panel returned async via callback
end

-- -------------------------------------------------------
-- Setters
-- -------------------------------------------------------
---@type fun(str: string): FString
FString = FString or function(str) return str end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@param value integer
function SetIntParameter(modPanel, uniqueIdentifier, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetIntParameter(FName(uniqueIdentifier), math.floor(value))
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@param value number
function SetFloatParameter(modPanel, uniqueIdentifier, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetFloatParameter(FName(uniqueIdentifier), value)
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@param value string
function SetStringParameter(modPanel, uniqueIdentifier, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetStringParameter(FName(uniqueIdentifier), FString(value))
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@param value string[]
function SetStringArrayParameter(modPanel, uniqueIdentifier, value)
    if not modPanel or not modPanel:IsValid() then return end
    -- Create a copy of the input array
    local valueCopy = {}
    for i, str in ipairs(value) do
        valueCopy[i] = str
    end
    -- Convert the Lua table of strings to a table of FString objects for the Blueprint TArray<FString>
    local param = {}
    for i, str in ipairs(valueCopy) do param[i] = FString(str) end
    modPanel:SetStringArrayParameter(FName(uniqueIdentifier), valueCopy)
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@param value boolean
function SetBoolParameter(modPanel, uniqueIdentifier, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetBoolParameter(FName(uniqueIdentifier), value and true or false)
end
-- -------------------------------------------------------
-- Getters
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@return integer, boolean
function GetIntParameter(modPanel, uniqueIdentifier)
    if not modPanel or not modPanel:IsValid() then return 0, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetIntParameter(FName(uniqueIdentifier), Returns, EmptyTable)
    return Returns.Output or 0, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@return number, boolean
function GetFloatParameter(modPanel, uniqueIdentifier)
    if not modPanel or not modPanel:IsValid() then return 0.0, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetFloatParameter(FName(uniqueIdentifier), Returns, EmptyTable)
    return Returns.Output or 0.0, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@return boolean, boolean
function GetBoolParameter(modPanel, uniqueIdentifier)
    if not modPanel or not modPanel:IsValid() then return false, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetBoolParameter(FName(uniqueIdentifier), Returns, EmptyTable)
    return Returns.Output or false, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@return string, boolean
function GetStringParameter(modPanel, uniqueIdentifier)
    if not modPanel or not modPanel:IsValid() then return "", false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetStringParameter(FName(uniqueIdentifier), Returns, EmptyTable)
    return Returns.Output:ToString() or "", Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueIdentifier string The unique identifier for the parameter
---@return table, boolean
function GetStringArrayParameter(modPanel, uniqueIdentifier)
    if not modPanel or not modPanel:IsValid() then return {}, false end
    local Returns = {}
    local OutputParam = {}
    -- Call the Blueprint function, expecting array elements in 'Returns' and 'Found' in 'OutputParam'
    modPanel:GetStringArrayParameter(FName(uniqueIdentifier), Returns, OutputParam)
    
    local arrayData = {}
    local found = OutputParam.Found or false

    if found then
        -- Iterate through the array elements found in the Returns table using 1-based indexing
        local i = 1
        while Returns[i] ~= nil do
            local successElem, elemWrapper = pcall(function()
                return Returns[i]
            end)
            if successElem and elemWrapper and type(elemWrapper) == "userdata" then
                -- Element is a RemoteUnrealParam, get the actual value
                local successGet, elem = pcall(function()
                    return elemWrapper:get()
                end)

                if successGet and elem then
                    -- Assuming the underlying element is FString and needs ToString()
                    local successStr, str = pcall(function()
                        if type(elem) == "userdata" and elem.ToString then
                            return elem:ToString()
                        else
                            -- If not a userdata with ToString, treat as is
                            return tostring(elem)
                        end
                    end)
                    if successStr then
                        table.insert(arrayData, str)
                    end
                end
            else
                -- Stop iterating if we encounter a nil or non-userdata element wrapper
                break
            end
            i = i + 1
        end
    end

    return arrayData, found
end

-- -------------------------------------------------------
-- Attempts to register a Blueprint hook asynchronously with retry logic.
---@param hookTypeName string The key in the HookCreated and RequestedHooks tables (e.g., "float", "int").
---@param blueprintPath string The full Blueprint path for the hook.
---@param callbackFunction fun(PanelRef: userdata, ParameterName: userdata, ParameterValue: any) The Lua function to execute when the hook is triggered.
function AttemptRegisterHookAsync(hookTypeName, blueprintPath, callbackFunction)
    RequestedHooks[hookTypeName] = true
    LoopAsync(1000, function()
        if HookCreated[hookTypeName] then return true end
        if pcall(function()
            RegisterHook(blueprintPath, callbackFunction)
            HookCreated[hookTypeName] = true
            return true
        end) then
            return true
        else
            return false
        end
    end)
end




