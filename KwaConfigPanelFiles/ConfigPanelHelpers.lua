---@class FText
---@class FName

---@type fun(text: string): FText
FText = FText or function(text) return text end

---@type fun(name: string): FName
FName = FName or function(name) return name end

---@type fun(ms: number, callback: function): void
LoopAsync = LoopAsync or function(ms, callback) end

---@type fun(path: string, callback: function): void
RegisterHook = RegisterHook or function(path, callback) end

---@type fun(className: string): table
FindFirstOf = FindFirstOf or function(className) return {} end

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
---@param style number|string|nil The style type (number 0-5 or string name)
---@param font number|string|nil The font to use (number 0-2 or string name)
---@param fontsize number the size of the font to use (default 25)
function AddRowSectionHeader(modPanel, labelText, style, font, fontsize)
    if not modPanel or not modPanel:IsValid() then
        print("[KCnfg] Invalid mod panel")
        return
    end
    
    local resolvedStyle = GetHeaderType(style or 5)  -- Default to "Label"
    local resolvedFont = GetFontType(font or 0)  -- Default to "Kingthings"
    print("[KCnfg] Adding section header:", labelText, "Type:", resolvedStyle, "Font:", resolvedFont)
    
    local ReturnValue = {}
    modPanel:AddRowSectionHeader(FText(labelText), resolvedStyle, resolvedFont, fontsize or 25, ReturnValue)
end

-- -------------------------------------------------------
-- Separator
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param height number height of the separator (default: 16)
---@param showLine boolean enable to show the line (default: true)
function AddRowSeparator(modPanel, height, showline)
    if not modPanel or not modPanel:IsValid() then
        print("Invalid mod panel")
        return
    end
    print("[KCnfg] Adding Separator")
    
    local ReturnValue = {}
    modPanel:AddRowSeparator(height or 16, showline or true, ReturnValue)
end

-- -------------------------------------------------------
-- Slider
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param label string Label text for the slider
---@param uniqueSaveLabel string Unique identifier for saving the value
---@param minValue number|nil Minimum value (default: 0)
---@param maxValue number|nil Maximum value (default: 1)
---@param defaultValue number|nil Default value (default: minValue)
---@param numberSuffix string|nil Suffix to display after the number (default: "")
---@param decimalCount number|nil Number of decimal places (default: 0)
---@param snapSlider boolean|nil Whether to snap to increments (default: false)
---@param snapSize number|nil Size of snap increments (default: 1)
function AddRowSlider(modPanel, label, uniqueSaveLabel, minValue, maxValue, defaultValue, numberSuffix, decimalCount, snapSlider, snapSize)
    if not modPanel then 
        print("[KCnfg] AddRowSlider: modPanel is nil")
        return 
    end
    if not modPanel:IsValid() then
        print("[KCnfg] AddRowSlider: modPanel is not valid")
        return
    end
    print("[KCnfg] Adding slider:", label, "with id:", uniqueSaveLabel)
    local ReturnValue = {}
    modPanel:AddRowSlider(
        FText(label),
        FName(uniqueSaveLabel),
        minValue or 0,
        maxValue or 1,
        defaultValue or (minValue or 0),
        FText(numberSuffix or ""),
        decimalCount or 0,
        snapSlider or false,
        snapSize or 1,
        ReturnValue
    )
    print("[KCnfg] Slider added")
end

-- -------------------------------------------------------
-- Load Params
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
function LoadParameters(modPanel)
    if not modPanel then return end
    modPanel:LoadParameters()
end

-- -------------------------------------------------------
-- Callback Hooks
-- -------------------------------------------------------

---@class ModPanel
---@field YourPanel table The mod's configuration panel

local HookCreated = {
    float = false,
    int = false,
    string = false,
    stringArray = false,
    bool = false
}

local mod_panel_callbacks = {}

---Register a callback for when a parameter changes
---@param modPanel table The mod configuration panel
---@param saveId string The unique save ID of the parameter
---@param callback fun(value: any) Callback function that receives the changed value
function RegisterCallback(modPanel, saveId, callback)
    if not modPanel or not modPanel:IsValid() then
        print("[KCnfg] RegisterCallback: Invalid mod panel")
        return
    end
    
    local addr = modPanel:GetAddress()
    print("[KCnfg] Registering callback for panel:", addr, "param:", saveId)
    
    if not mod_panel_callbacks[addr] then
        mod_panel_callbacks[addr] = {}
    end
    mod_panel_callbacks[addr][saveId] = callback
end

local function SetupCallbacks()
    -- Float hook
    LoopAsync(3000, function()
        if HookCreated.float then return true end
        if pcall(function()
            print("[KCnfg] Registering float callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaFloatCallback", 
                function(PanelRef, ParameterName, ParameterValue)
                    -- Get the actual panel instance from the reference
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        print("[KCnfg] Invalid panel reference in float callback")
                        return
                    end
                    
                    -- Get identifying information
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get()
                    
                    print(string.format("Float callback: Panel %s | Param %s | Value %s", addr, name, value))
                    
                    -- Find and execute callback
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    else
                        print(string.format("No callback found for %s in panel %s", name, addr))
                    end
                end)
            
            print("[KCnfg] Float callback hook registered successfully")
            HookCreated.float = true
            return true
        end) then return true
        else
            print("[KCnfg] Failed to register float callback hook")
            return false
        end
    end)
    -- Int hook
    LoopAsync(3000, function()
        if HookCreated.int then return true end
        if pcall(function()
            print("[KCnfg] Registering int callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaIntCallback", 
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        print("[KCnfg] Invalid panel reference in int callback")
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = math.floor(ParameterValue:get())  -- Ensure integer value
                    
                    print(string.format("Int callback: Panel %s | Param %s | Value %d", addr, name, value))
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    else
                        print(string.format("No int callback for %s in panel %s", name, addr))
                    end
                end)
            
            print("[KCnfg] Int callback hook registered successfully")
            HookCreated.int = true
            return true
        end) then return true
        else
            print("[KCnfg] Failed to register int callback hook")
            return false
        end
    end)

    -- Bool hook
    LoopAsync(3000, function()
        if HookCreated.bool then return true end
        if pcall(function()
            print("[KCnfg] Registering bool callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaBoolCallback", 
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        print("[KCnfg] Invalid panel reference in bool callback")
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get() and true or false  -- Force boolean
                    
                    print(string.format("Bool callback: Panel %s | Param %s | Value %s", addr, name, tostring(value)))
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    else
                        print(string.format("No bool callback for %s in panel %s", name, addr))
                    end
                end)
            
            print("[KCnfg] Bool callback hook registered successfully")
            HookCreated.bool = true
            return true
        end) then return true
        else
            print("[KCnfg] Failed to register bool callback hook")
            return false
        end
    end)

    -- String hook
    LoopAsync(3000, function()
        if HookCreated.string then return true end
        if pcall(function()
            print("[KCnfg] Registering string callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaStringCallback", 
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        print("[KCnfg] Invalid panel reference in string callback")
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local value = ParameterValue:get():ToString()
                    
                    print(string.format("String callback: Panel %s | Param %s | Value %s", addr, name, value))
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](value)
                    else
                        print(string.format("No string callback for %s in panel %s", name, addr))
                    end
                end)
            
            print("[KCnfg] String callback hook registered successfully")
            HookCreated.string = true
            return true
        end) then return true
        else
            print("[KCnfg] Failed to register string callback hook")
            return false
        end
    end)

    -- String Array hook
    LoopAsync(3000, function()
        if HookCreated.stringArray then return true end
        if pcall(function()
            print("[KCnfg] Registering string array callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KModPanel.WBP_KModPanel_C:LuaStringArrayCallback", 
                function(PanelRef, ParameterName, ParameterValue)
                    local panelInstance = PanelRef:get()
                    if not panelInstance or not panelInstance.IsValid or not panelInstance:IsValid() then
                        print("[KCnfg] Invalid panel reference in string array callback")
                        return
                    end
                    
                    local addr = panelInstance:GetAddress()
                    local name = ParameterName:get():ToString()
                    local valueArray = {}
                    
                    -- Convert UE4 Array to Lua table
                    local ueArray = ParameterValue:get().Array
                    for i = 1, ueArray:Num() do
                        table.insert(valueArray, ueArray:Get(i):ToString())
                    end
                    
                    print(string.format("StringArray callback: Panel %s | Param %s | Values %d", 
                        addr, name, #valueArray))
                    
                    local panelCallbacks = mod_panel_callbacks[addr]
                    if panelCallbacks and panelCallbacks[name] then
                        panelCallbacks[name](valueArray)
                    else
                        print(string.format("No string array callback for %s in panel %s", name, addr))
                    end
                end)
            
            print("[KCnfg] String array callback hook registered successfully")
            HookCreated.stringArray = true
            return true
        end) then return true
        else
            print("[KCnfg] Failed to register string array callback hook")
            return false
        end
    end)
end

-- -------------------------------------------------------
-- Register Mod
-- -------------------------------------------------------

local bPanelRegistered = false
local RegisteredPanel = nil

---@param modName string The name of your mod
---@param doHandleSaves boolean|nil Whether to handle saves (default: true)
---@param onlyHandleSaves boolean|nil Whether to only handle saves, no config panel (default: false)
---@return table|nil panel The configuration panel, or nil if not ready yet
function RegisterMod(modName, doHandleSaves, onlyHandleSaves)
    if not modName then
        error("modName is required")
        return nil
    end

    -- If already registered, return the existing panel
    if bPanelRegistered then
        return RegisteredPanel
    end

    print("[KCnfg] Attempting to register mod:", modName)

    -- Set defaults for boolean parameters
    if doHandleSaves == nil then doHandleSaves = true end
    if onlyHandleSaves == nil then onlyHandleSaves = false end

    -- Keep trying to register until we succeed
    LoopAsync(3000, function()
        if bPanelRegistered then return true end

        local MainPanel = FindFirstOf("WBP_KConfigPanel_C")
        if not MainPanel or not MainPanel:IsValid() then
            print("[KCnfg] Mod panel not found, retrying...")
            return false
        end
        
        print("[KCnfg] Found main panel, attempting to register")
        
        -- Create return value table and register mod
        local ReturnValue = {}
        MainPanel:RegisterMod(modName, doHandleSaves, onlyHandleSaves, ReturnValue)
        
        -- Check if we got the panel
        if not ReturnValue.YourPanel then
            print("[KCnfg] Warning: ReturnValue.YourPanel is nil")
            return false
        end

        print("[KCnfg] Successfully registered mod")
        print("[KCnfg] Panel object:", ReturnValue.YourPanel)
        if ReturnValue.YourPanel.IsValid then
            print("[KCnfg] Panel is valid:", ReturnValue.YourPanel:IsValid())
        end
        
        -- Only set up callbacks if we successfully registered
        SetupCallbacks()
        print("[KCnfg] Callbacks setup complete")

        RegisteredPanel = ReturnValue.YourPanel
        bPanelRegistered = true
        return true
    end)

    return RegisteredPanel
end

-- -------------------------------------------------------
-- Setters
-- -------------------------------------------------------
---@type fun(str: string): FString
FString = FString or function(str) return str end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@param value integer
function SetIntParameter(modPanel, uniqueSaveLabel, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetIntParameter(FName(uniqueSaveLabel), math.floor(value))
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@param value number
function SetFloatParameter(modPanel, uniqueSaveLabel, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetFloatParameter(FName(uniqueSaveLabel), value)
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@param value string
function SetStringParameter(modPanel, uniqueSaveLabel, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetStringParameter(FName(uniqueSaveLabel), FString(value))
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@param value string[]
function SetStringArrayParameter(modPanel, uniqueSaveLabel, value)
    if not modPanel or not modPanel:IsValid() then return end
    local param = { Array = {} }
    for _, str in ipairs(value) do
        param.Array:Add(FString(str))
    end
    modPanel:SetStringArrayParameter(FName(uniqueSaveLabel), param)
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@param value boolean
function SetBoolParameter(modPanel, uniqueSaveLabel, value)
    if not modPanel or not modPanel:IsValid() then return end
    modPanel:SetBoolParameter(FName(uniqueSaveLabel), value and true or false)
end
-- -------------------------------------------------------
-- Getters
-- -------------------------------------------------------
---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@return integer, boolean
function GetIntParameter(modPanel, uniqueSaveLabel)
    if not modPanel or not modPanel:IsValid() then return 0, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetIntParameter(FName(uniqueSaveLabel), Returns, EmptyTable)
    return Returns.Output or 0, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@return number, boolean
function GetFloatParameter(modPanel, uniqueSaveLabel)
    if not modPanel or not modPanel:IsValid() then return 0.0, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetFloatParameter(FName(uniqueSaveLabel), Returns, EmptyTable)
    return Returns.Output or 0.0, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@return boolean, boolean
function GetBoolParameter(modPanel, uniqueSaveLabel)
    if not modPanel or not modPanel:IsValid() then return false, false end
    local ValueOut = { Value = false }
    local FoundOut = { Value = false }
    modPanel:GetBoolParameter(FName(uniqueSaveLabel), Returns, EmptyTable)
    return Returns.Output or false, Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@return string, boolean
function GetStringParameter(modPanel, uniqueSaveLabel)
    if not modPanel or not modPanel:IsValid() then return "", false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetStringParameter(FName(uniqueSaveLabel), Returns, EmptyTable)
    return Returns.Output:ToString() or "", Returns.Found or false
end

---@param modPanel table The mod configuration panel
---@param uniqueSaveLabel string The unique identifier for the parameter
---@return table, boolean
function GetStringArrayParameter(modPanel, uniqueSaveLabel)
    if not modPanel or not modPanel:IsValid() then return {}, false end
    local Returns = {}
    local EmptyTable = {}
    modPanel:GetStringArrayParameter(FName(uniqueSaveLabel), Returns, EmptyTable)
    return Returns.Output.Array or {}, Returns.Found or false
end




