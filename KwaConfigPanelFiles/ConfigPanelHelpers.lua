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

---@param flairType number|string Number (0-3) or string ("NoFlair", "OblivionFlairTop", "OblivionFlairTopAndBottom", "OblivionFlairBottom")
---@return string
local function GetFlairType(flairType)
    if type(flairType) == "number" then
        local flairTypes = {
            [0] = "NoFlair",
            [1] = "OblivionFlairTop",
            [2] = "OblivionFlairTopAndBottom",
            [3] = "OblivionFlairBottom"
        }
        return flairTypes[flairType] or "NoFlair"
    end
    return flairType or "NoFlair"
end

---@param modPanel table The mod configuration panel
---@param labelText string Text to display in the section header
---@param flairType string|nil The flair type (OblivionFlairTop/OblivionFlairTopAndBottom/OblivionFlairBottom/NoFlair)
function AddRowSectionHeader(modPanel, labelText, flairType)
    if not modPanel then 
        print("AddRowSectionHeader: modPanel is nil")
        return 
    end
    if not modPanel:IsValid() then
        print("AddRowSectionHeader: modPanel is not valid")
        return
    end
    print("Adding section header:", labelText)
    local ReturnValue = {}
    modPanel:AddRowSectionHeader(FText(labelText), flairType or "NoFlair", ReturnValue)
    print("Section header added")
end

---@param modPanel table The mod configuration panel
---@param labelText string Text to display in the label
function AddRowLabel(modPanel, labelText)
    if not modPanel then 
        print("AddRowLabel: modPanel is nil")
        return 
    end
    if not modPanel:IsValid() then
        print("AddRowLabel: modPanel is not valid")
        return
    end
    print("Adding label:", labelText)
    local ReturnValue = {}
    modPanel:AddRowLabel(FText(labelText), ReturnValue)
    print("Label added")
end

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
        print("AddRowSlider: modPanel is nil")
        return 
    end
    if not modPanel:IsValid() then
        print("AddRowSlider: modPanel is not valid")
        return
    end
    print("Adding slider:", label, "with id:", uniqueSaveLabel)
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
    print("Slider added")
end

---@param modPanel table The mod configuration panel
function LoadParameters(modPanel)
    if not modPanel then return end
    modPanel:LoadParameters()
end

---@class ModPanel
---@field YourPanel table The mod's configuration panel

local HookCreated = {
    float = false,
    int = false,
    string = false,
    stringArray = false,
    bool = false
}

-- Single callback storage
local Callbacks = {}

---Register a callback for when a parameter changes
---@param saveId string The unique save ID of the parameter
---@param callback fun(value: any) Callback function that receives the changed value
function RegisterCallback(saveId, callback)
    Callbacks[saveId] = callback
end

local function SetupCallbacks()
    -- Float callback
    LoopAsync(3000, function()
        if HookCreated.float then return true end
        if pcall(function()
            print("Registering float callback hook")
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KCModPanel.WBP_KCModPanel_C:LuaFloatCallback", 
                function(context, ParameterName, ParameterValue)
                    local name = ParameterName:get():ToString()
                    print("Float callback received for parameter:", name, "value:", ParameterValue:get())
                    if Callbacks[name] then
                        Callbacks[name](ParameterValue:get())
                    else
                        print("No callback registered for:", name)
                        local registeredCallbacks = ""
                        for k,_ in pairs(Callbacks) do
                            if registeredCallbacks ~= "" then
                                registeredCallbacks = registeredCallbacks .. ", "
                            end
                            registeredCallbacks = registeredCallbacks .. k
                        end
                        print("Currently registered callbacks:", registeredCallbacks)
                    end
                end)
            print("Float callback hook registered successfully")
        end) then
            HookCreated.float = true
            return true
        else
            print("Failed to register float callback hook")
        end
    end)

    -- Int callback
    LoopAsync(3000, function()
        if HookCreated.int then return true end
        if pcall(function()
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KCModPanel.WBP_KCModPanel_C:LuaIntCallback", 
                function(context, ParameterName, ParameterValue)
                    local name = ParameterName:get():ToString()
                    if Callbacks[name] then
                        Callbacks[name](ParameterValue:get())
                    end
                end)
        end) then
            HookCreated.int = true
            return true
        end
    end)

    -- String callback
    LoopAsync(3000, function()
        if HookCreated.string then return true end
        if pcall(function()
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KCModPanel.WBP_KCModPanel_C:LuaStringCallback", 
                function(context, ParameterName, ParameterValue)
                    local name = ParameterName:get():ToString()
                    if Callbacks[name] then
                        Callbacks[name](ParameterValue:get())
                    end
                end)
        end) then
            HookCreated.string = true
            return true
        end
    end)

    -- StringArray callback
    LoopAsync(3000, function()
        if HookCreated.stringArray then return true end
        if pcall(function()
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KCModPanel.WBP_KCModPanel_C:LuaStringArrayCallback", 
                function(context, ParameterName, ParameterValue)
                    local name = ParameterName:get():ToString()
                    if Callbacks[name] then
                        Callbacks[name](ParameterValue:get())
                    end
                end)
        end) then
            HookCreated.stringArray = true
            return true
        end
    end)

    -- Bool callback
    LoopAsync(3000, function()
        if HookCreated.bool then return true end
        if pcall(function()
            RegisterHook("/Game/Mods/KwaConfigPanelBP_P/WBP_KCModPanel.WBP_KCModPanel_C:LuaBoolCallback", 
                function(context, ParameterName, ParameterValue)
                    local name = ParameterName:get():ToString()
                    if Callbacks[name] then
                        Callbacks[name](ParameterValue:get())
                    end
                end)
        end) then
            HookCreated.bool = true
            return true
        end
    end)
end

local PanelRegistered = false
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
    if PanelRegistered then
        return RegisteredPanel
    end

    print("Attempting to register mod:", modName)

    -- Set defaults for boolean parameters
    if doHandleSaves == nil then doHandleSaves = true end
    if onlyHandleSaves == nil then onlyHandleSaves = false end

    -- Keep trying to register until we succeed
    LoopAsync(3000, function()
        if PanelRegistered then return true end

        local MainPanel = FindFirstOf("WBP_KwaConfigPanelMain_C")
        if not MainPanel or not MainPanel:IsValid() then
            print("Mod panel not found, retrying...")
            return false
        end
        
        print("Found main panel, attempting to register")
        
        -- Create return value table and register mod
        local ReturnValue = {}
        MainPanel:RegisterMod(modName, doHandleSaves, onlyHandleSaves, ReturnValue)
        
        -- Check if we got the panel
        if not ReturnValue.YourPanel then
            print("Warning: ReturnValue.YourPanel is nil")
            return false
        end

        print("Successfully registered mod")
        print("Panel object:", ReturnValue.YourPanel)
        if ReturnValue.YourPanel.IsValid then
            print("Panel is valid:", ReturnValue.YourPanel:IsValid())
        end
        
        -- Only set up callbacks if we successfully registered
        SetupCallbacks()
        print("Callbacks setup complete")

        RegisteredPanel = ReturnValue.YourPanel
        PanelRegistered = true
        return true
    end)

    return RegisteredPanel
end