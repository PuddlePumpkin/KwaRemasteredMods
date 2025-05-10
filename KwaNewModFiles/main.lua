print("[KwaMusic] Initializing")
local HookSetRTPCValue
local HookSetGlobalRTPCValue
local HookAkGameplaySetRTPC
local HookAkGameObjectSetRTPC
local HookPostAudioEvent
local HookMusicSuccessEnded
--[[
-- Original RTPC Value Hook
LoopAsync(3000, function()
    if HookSetRTPCValue then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/Altar.VAudioStatics:SetRTPCValue", function(context)
            print("[KwaMusic] Log: SetRTPCValue Hook Fired")
        end)
    end) 
    if ok then
        print("[KwaMusic] SetRTPCValue hook registered successfully")
        HookSetRTPCValue = true
    end
end)

-- Global RTPC Value Hook
LoopAsync(3000, function()
    if HookSetGlobalRTPCValue then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/Altar.VAudioStatics:SetGlobalRTPCValue", function(context)
            print("[KwaMusic] Log: SetGlobalRTPCValue Hook Fired")
        end)
    end)
    if ok then
        print("[KwaMusic] SetGlobalRTPCValue hook registered successfully")
        HookSetGlobalRTPCValue = true
    end
end)

-- AkGameplayStatics Hook
LoopAsync(3000, function()
    if HookAkGameplaySetRTPC then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/AkAudio.AkGameplayStatics:SetRTPCValue", function(context)
            print("[KwaMusic] Log: AkGameplayStatics RTPC Hook Fired")
        end)
    end)
    if ok then
        print("[KwaMusic] AkGameplayStatics RTPC hook registered successfully")
        HookAkGameplaySetRTPC = true
    end
end)

-- AkGameObject Hook
LoopAsync(3000, function()
    if HookAkGameObjectSetRTPC then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/AkAudio.AkGameObject:SetRTPCValue", function(context)
            print("[KwaMusic] Log: AkGameObject RTPC Hook Fired")
        end)
    end)
    if ok then
        print("[KwaMusic] AkGameObject RTPC hook registered successfully")
        HookAkGameObjectSetRTPC = true
    end
end)

-- CONFIRMED USELESS Is called on music swaps, but is an AkAudioEvent - USELESS
-- Audio Event Hook
]--
LoopAsync(3000, function()
    if HookPostAudioEvent then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/Altar.VAudioStatics:BPF_PostAudioEvent", function(context)
            print("[KwaMusic] Log: Audio Event Hook Fired")
        end)
    end)
    if ok then
        print("[KwaMusic] Audio Event hook registered successfully")
        HookPostAudioEvent = true
    end
end)

--[[
-- Music Success Hook CONFIRMED USELESS, Not called on audio changes
LoopAsync(3000, function()
    if HookMusicSuccessEnded then return end
    local ok, err = pcall(function()
        RegisterHook("/Script/Altar.VMusicPlayer:OnMusicSuccessEnded", function(context)
            print("[KwaMusic] Log: Music Success End Hook Fired")
        end)
    end)
    if ok then
        print("[KwaMusic] Music Success End hook registered successfully")
        HookMusicSuccessEnded = true
    end
end)
]]--