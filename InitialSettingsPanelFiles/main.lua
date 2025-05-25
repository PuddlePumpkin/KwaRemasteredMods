-- Require the ConfigPanelHelpers library
require("KwaHelpers.ConfigPanelHelpers")

-- Find the UVOblivionInitialSettings class outside the mod registration callback
local SettingsClass = StaticFindObject("/Script/UE5AltarPairing.VOblivionInitialSettings")

if not SettingsClass then
    print("[OblivionSettings] Failed to find the UVOblivionInitialSettings class. Configuration panel will not control settings.")
    -- We can still proceed with panel registration even if the class isn't found,
    -- but the settings won't be controllable via the panel.
else
    -- Get the Class Default Object (CDO)
    local SettingsCDO = SettingsClass:GetCDO()

    if not SettingsCDO or not SettingsCDO:IsValid() then
        print("[OblivionSettings] Failed to get a valid Settings CDO. Configuration panel will not control settings.")
        -- Continue to register panel, but without settings control.
    else
        print("[OblivionSettings] Successfully found Settings class and CDO.")

        -- Helper function to retrieve settings instance and apply a property
        local function applySetting(propertyName, value)
            local settingsInstance = SettingsCDO.GetOblivionInitialSettings()
            if settingsInstance and settingsInstance:IsValid() then
                -- Handle integer properties by converting the value
                if type(value) == 'number' and (propertyName == "TeleportMaxIterationCount" or propertyName == "ArrowInventoryChancePercentOnTargetHit" or propertyName == "BarBlinkAnimLoopNum" or propertyName == "NewFormulaFatigueMult" or string.find(propertyName, "ThreatLevelOffset") or string.find(propertyName, "PerkMercantile") or propertyName == "LowThreatLevelOffset" or propertyName == "MediumThreatLevelOffset" or propertyName == "HighThreatLevelOffset") then
                    settingsInstance[propertyName] = math.floor(value)
                else
                    settingsInstance[propertyName] = value
                end
                -- Optional: Print confirmation
                -- print(string.format("[OblivionSettings] Applied %s = %s", propertyName, tostring(settingsInstance[propertyName])))
            else
                print("[OblivionSettings] Failed to get a valid settings instance in applySetting for " .. propertyName .. ".")
            end
        end

        -- Register the mod and setup the panel inside the callback
        -- The panel argument 'modPanel' is only valid within this callback scope
        RegisterMod("InitialSettings", true, false, function(modPanel)
            print("[InitialSettings] Mod panel registered. Setting up rows.")

            --------------------------------------------------------------------------------
            -- Oblivion Settings
            --------------------------------------------------------------------------------
            AddRowSectionHeader(modPanel, "Oblivion Settings")
            AddRowSeparator(modPanel)

            AddRowBoolSwitch(modPanel, "Enable God Mode", "GodModeEnabled", false)
            RegisterCallback(modPanel, "GodModeEnabled", function(value)
                 applySetting("bIsGodMode", value)
            end)

            --------------------------------------------------------------------------------
            -- Preloading
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Preloading")
            AddRowSeparator(modPanel)

            AddRowBoolSwitch(modPanel, "Enable Preload Inventory", "PreloadInventory", true)
            RegisterCallback(modPanel, "PreloadInventory", function(value)
                applySetting("bEnablePreloadingOfInventoryItems", value)
            end)

            AddRowBoolSwitch(modPanel, "Enable Preload Pickable Items", "PreloadPickable", true)
            RegisterCallback(modPanel, "PreloadPickable", function(value)
                applySetting("bEnablePreloadingOfPickableItems", value)
            end)

            AddRowBoolSwitch(modPanel, "Enable Preload NPCs Out of Worldspace", "PreloadNPCs", false)
            RegisterCallback(modPanel, "PreloadNPCs", function(value)
                applySetting("bEnablePreloadingOfNPCsOutOfPlayerWorldSpace", value)
            end)

            AddRowNumber(modPanel, "Early NPC Preload Distance", "NPCPreloadDist", 300.00)
            RegisterCallback(modPanel, "NPCPreloadDist", function(value)
                applySetting("EarlyNPCPreloadingDistanceMax", value)
            end)

            --------------------------------------------------------------------------------
            -- Physics
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Physics")
            AddRowSeparator(modPanel)

            AddRowBoolSwitch(modPanel, "Allow Havok Colliders", "AllowHavokColliders", false)
            RegisterCallback(modPanel, "AllowHavokColliders", function(value)
                applySetting("bAreHavokColliderInstancesAllowed", value)
            end)

            AddRowNumber(modPanel, "Default Linear Damping", "LinearDamping", 2.00)
            RegisterCallback(modPanel, "LinearDamping", function(value)
                applySetting("DefaultLinearDampingValue", value)
            end)

            AddRowNumber(modPanel, "Default Angular Damping", "AngularDamping", 2.00)
            RegisterCallback(modPanel, "AngularDamping", function(value)
                applySetting("DefaultAngularDampingValue", value)
            end)

            AddRowNumber(modPanel, "Overlap Penetration Threshold", "OverlapPenetration", 5.00)
            RegisterCallback(modPanel, "OverlapPenetration", function(value)
                applySetting("OverlappingCollisionPenetrationThreshold", value)
            end)

            AddRowNumber(modPanel, "Pawn Push Force Factor", "PawnPushForce", 10000.00)
            RegisterCallback(modPanel, "PawnPushForce", function(value)
                applySetting("PairedPawnPushForceFactor", value)
            end)

            AddRowNumber(modPanel, "Pawn Initial Push Force Factor", "PawnInitialPushForce", 1000.00)
            RegisterCallback(modPanel, "PawnInitialPushForce", function(value)
                applySetting("PairedPawnInitialPushForceFactor", value)
            end)

            AddRowNumber(modPanel, "Pawn Collider Height Offset", "PawnColliderHeightOffset", 25.00)
            RegisterCallback(modPanel, "PawnColliderHeightOffset", function(value)
                applySetting("PawnPhysicsBodyColliderHeightOffset", value)
            end)

            AddRowNumber(modPanel, "Pawn Collider Radius Margin", "PawnColliderRadiusMargin", 5.00)
            RegisterCallback(modPanel, "PawnColliderRadiusMargin", function(value)
                applySetting("PawnPhysicsBodyColliderRadiusMargin", value)
            end)

            AddRowBoolSwitch(modPanel, "Use Oblivion Like Walking Physics", "OblivionWalkingPhysics", true)
            RegisterCallback(modPanel, "OblivionWalkingPhysics", function(value)
                applySetting("bUseOblivionLikeWalkingPhysics", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Physics: Fall Damage")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Fall Time Min", "FallTimeMin", 0.20)
            RegisterCallback(modPanel, "FallTimeMin", function(value)
                applySetting("FallTimeMin", value)
            end)

            AddRowNumber(modPanel, "Fall Velocity Min", "FallVelocityMin", 800.00)
            RegisterCallback(modPanel, "FallVelocityMin", function(value)
                applySetting("FallVelocityMin", value)
            end)

            AddRowNumber(modPanel, "Fall Time Base", "FallTimeBase", 0.00)
            RegisterCallback(modPanel, "FallTimeBase", function(value)
                applySetting("FallTimeBase", value)
            end)

            AddRowNumber(modPanel, "Fall Time Mult", "FallTimeMult", 50.00)
            RegisterCallback(modPanel, "FallTimeMult", function(value)
                applySetting("FallTimeMult", value)
            end)

            AddRowNumber(modPanel, "Fall Damage Base", "FallDamageBase", 1.80)
            RegisterCallback(modPanel, "FallDamageBase", function(value)
                applySetting("FallDamageBase", value)
            end)

            AddRowNumber(modPanel, "Fall Damage Mult", "FallDamageMult", -0.45)
            RegisterCallback(modPanel, "FallDamageMult", function(value)
                applySetting("FallDamageMult", value)
            end)

            AddRowNumber(modPanel, "Fall Rider Damage Mult", "FallRiderDamageMult", 0.00)
            RegisterCallback(modPanel, "FallRiderDamageMult", function(value)
                applySetting("FallRiderDamageMult", value)
            end)

            --------------------------------------------------------------------------------
            -- Combat
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Combat")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Combat Hit Cone Angle", "CombatHitConeAngle", 20.00)
            RegisterCallback(modPanel, "CombatHitConeAngle", function(value)
                applySetting("CombatHitConeAngle", value)
            end)

            AddRowNumber(modPanel, "Duration Before Attack Follow Through", "AttackFollowThroughDuration", 5.00)
            RegisterCallback(modPanel, "AttackFollowThroughDuration", function(value)
                applySetting("DurationBeforeAttackFollowThrough", value)
            end)

            AddRowNumber(modPanel, "Combat Hit Trace Radius", "CombatHitRadius", 20.00)
            RegisterCallback(modPanel, "CombatHitRadius", function(value)
                applySetting("PlayerCombatHitTraceSphereRadius", value)
            end)

            AddRowNumber(modPanel, "Pushback Force Multiplier", "PushbackForceMult", 1.00)
            RegisterCallback(modPanel, "PushbackForceMult", function(value)
                applySetting("PushbackForceMultiplier", value)
            end)

            AddRowNumber(modPanel, "Pushback Force Multiplier (Player)", "PushbackForceMultPlayer", 0.75)
            RegisterCallback(modPanel, "PushbackForceMultPlayer", function(value)
                applySetting("PushbackForceMultiplierForPlayer", value)
            end)

            AddRowNumber(modPanel, "Pushback Duration", "PushbackDuration", 0.30)
            RegisterCallback(modPanel, "PushbackDuration", function(value)
                applySetting("PushbackDuration", value)
            end)

            AddRowNumber(modPanel, "Pushback Cooldown", "PushbackCooldown", 0.20)
            RegisterCallback(modPanel, "PushbackCooldown", function(value)
                applySetting("PushbackCooldown", value)
            end)

            AddRowNumber(modPanel, "Pushback Priority", "PushbackPriority", 1.00)
            RegisterCallback(modPanel, "PushbackPriority", function(value)
                applySetting("PushbackPriority", value)
            end)

            AddRowNumber(modPanel, "Projectile Collision Force", "ProjectileCollisionForce", 100.00)
            RegisterCallback(modPanel, "ProjectileCollisionForce", function(value)
                applySetting("ProjectileCollisionForce", value)
            end)

            AddRowNumber(modPanel, "Target Reach Height Tolerance", "TargetReachHeightTolerance", 50.00)
            RegisterCallback(modPanel, "TargetReachHeightTolerance", function(value)
                applySetting("TargetReachHeightTolerance", value)
            end)

            AddRowNumber(modPanel, "Resurrect State Duration", "ResurrectDuration", 5.00)
            RegisterCallback(modPanel, "ResurrectDuration", function(value)
                applySetting("ResurrectStateDuration", value)
            end)

            AddRowNumber(modPanel, "Recoil Move Multiplier", "RecoilMoveMult", 0.50)
            RegisterCallback(modPanel, "RecoilMoveMult", function(value)
                applySetting("RecoilMoveMultiplier", value)
            end)

            AddRowNumber(modPanel, "Stagger Fatigue Restoration", "StaggerFatigueRestoration", 0.40)
            RegisterCallback(modPanel, "StaggerFatigueRestoration", function(value)
                applySetting("StaggerFatigueRestoration", value)
            end)

            AddRowNumber(modPanel, "Knockdown Minimal Duration", "KnockdownMinDuration", 2.00)
            RegisterCallback(modPanel, "KnockdownMinDuration", function(value)
                applySetting("KnockdownMinimalDuration", value)
            end)

            AddRowNumber(modPanel, "Knockdown Fatigue Restoration", "KnockdownFatigueRestoration", 0.60)
            RegisterCallback(modPanel, "KnockdownFatigueRestoration", function(value)
                applySetting("KnockdownFatigueRestoration", value)
            end)

            AddRowNumber(modPanel, "Knockdown Horizontal Impact Force Mult", "KnockdownHorizImpactMult", 5.00)
            RegisterCallback(modPanel, "KnockdownHorizImpactMult", function(value)
                applySetting("KnockdownHorizontalImpactForceMultiplier", value)
            end)

            AddRowNumber(modPanel, "Knockdown Vertical Impact Force Mult", "KnockdownVertImpactMult", 5.00)
            RegisterCallback(modPanel, "KnockdownVertImpactMult", function(value)
                applySetting("KnockdownVerticalImpactForceMultiplier", value)
            end)

            AddRowNumber(modPanel, "Combat Ragdoll Linear Damping Increase", "RagdollLinearDampingIncrease", 1.00)
            RegisterCallback(modPanel, "RagdollLinearDampingIncrease", function(value)
                applySetting("CombatRagdollLinearDampingIncrease", value)
            end)

            AddRowNumber(modPanel, "Combat Ragdoll Angular Damping Increase", "RagdollAngularDampingIncrease", 1.00)
            RegisterCallback(modPanel, "RagdollAngularDampingIncrease", function(value)
                applySetting("CombatRagdollAngularDampingIncrease", value)
            end)

            AddRowNumber(modPanel, "Combat Ragdoll Max Linear Damping", "RagdollMaxLinearDamping", 500.00)
            RegisterCallback(modPanel, "RagdollMaxLinearDamping", function(value)
                applySetting("CombatRagdollMaxLinearDamping", value)
            end)

            AddRowNumber(modPanel, "Combat Ragdoll Max Angular Damping", "RagdollMaxAngularDamping", 500.00)
            RegisterCallback(modPanel, "RagdollMaxAngularDamping", function(value)
                applySetting("CombatRagdollMaxAngularDamping", value)
            end)

            AddRowNumber(modPanel, "Ragdoll Duration After Paralysis", "RagdollDurationAfterParalysis", 0.75)
            RegisterCallback(modPanel, "RagdollDurationAfterParalysis", function(value)
                applySetting("RagdollDurationAfterParalysis", value)
            end)

            AddRowNumber(modPanel, "Combat Death Force Multiplier", "CombatDeathForceMult", 400.00)
            RegisterCallback(modPanel, "CombatDeathForceMult", function(value)
                applySetting("CombatDeathForceMultiplier", value)
            end)

            AddRowNumber(modPanel, "Oblivion to Altar Knockdown Force Multiplier", "OblivionAltarKnockdownForceMult", 15.00)
            RegisterCallback(modPanel, "OblivionAltarKnockdownForceMult", function(value)
                applySetting("OblivionToAltarKnockdownForceMultiplier", value)
            end)

            AddRowNumber(modPanel, "Combat AI Hold Time Multiplier", "CombatAIHoldTimeMultiplier", 1.00)
            RegisterCallback(modPanel, "CombatAIHoldTimeMultiplier", function(value)
                applySetting("CombatAIHoldTimeMultiplier", value)
            end)

            --------------------------------------------------------------------------------
            -- Movement
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Movement")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Move/Run Multiplier", "MoveRunMult", 3.00)
            RegisterCallback(modPanel, "MoveRunMult", function(value)
                 applySetting("DefaultMoveRunMult", value)
            end)

            AddRowNumber(modPanel, "Move/Run Athletics Multiplier", "MoveRunAthleticsMult", 0.75)
            RegisterCallback(modPanel, "MoveRunAthleticsMult", function(value)
                applySetting("DefaultMoveRunAthleticsMult", value)
            end)

            AddRowNumber(modPanel, "Move/Swim Run Athletics Multiplier", "MoveSwimRunAthleticsMult", 0.10)
            RegisterCallback(modPanel, "MoveSwimRunAthleticsMult", function(value)
                applySetting("DefaultMoveSwimRunAthleticsMult", value)
            end)

            AddRowNumber(modPanel, "Move/Swim Run Base", "MoveSwimRunBase", 0.50)
            RegisterCallback(modPanel, "MoveSwimRunBase", function(value)
                applySetting("DefaultMoveSwimRunBase", value)
            end)

            AddRowNumber(modPanel, "Move/Swim Walk Athletics Multiplier", "MoveSwimWalkAthleticsMult", 0.02)
            RegisterCallback(modPanel, "MoveSwimWalkAthleticsMult", function(value)
                applySetting("DefaultMoveSwimWalkAthleticsMult", value)
            end)

            AddRowNumber(modPanel, "Move/Swim Walk Base", "MoveSwimWalkBase", 0.50)
            RegisterCallback(modPanel, "MoveSwimWalkBase", function(value)
                applySetting("DefaultMoveSwimWalkBase", value)
            end)

            AddRowNumber(modPanel, "Strength Encumbrance Multiplier", "StrengthEncumbranceMult", 5.00)
            RegisterCallback(modPanel, "StrengthEncumbranceMult", function(value)
                applySetting("DefaultStrengthEncumbranceMult", value)
            end)

            AddRowNumber(modPanel, "Move Weight Max", "MoveWeightMax", 150.00)
            RegisterCallback(modPanel, "MoveWeightMax", function(value)
                applySetting("DefaultMoveWeightMax", value)
            end)

            AddRowNumber(modPanel, "Move Weight Min", "MoveWeightMin", 0.00)
            RegisterCallback(modPanel, "MoveWeightMin", function(value)
                applySetting("DefaultMoveWeightMin", value)
            end)

            AddRowNumber(modPanel, "Move Sprint Base Multiplier", "MoveSprintBaseMult", 4.00)
            RegisterCallback(modPanel, "MoveSprintBaseMult", function(value)
                applySetting("DefaultMoveSprintBaseMult", value)
            end)

            AddRowNumber(modPanel, "Move Sprint Athletics Multiplier", "MoveSprintAthleticsMult", 0.45)
            RegisterCallback(modPanel, "MoveSprintAthleticsMult", function(value)
                applySetting("DefaultMoveSprintAthleticsMult", value)
            end)

            AddRowNumber(modPanel, "Move Character Walk Max", "MoveCharWalkMax", 130.00)
            RegisterCallback(modPanel, "MoveCharWalkMax", function(value)
                applySetting("DefaultMoveCharWalkMax", value)
            end)

            AddRowNumber(modPanel, "Move Character Walk Min", "MoveCharWalkMin", 90.00)
            RegisterCallback(modPanel, "MoveCharWalkMin", function(value)
                applySetting("DefaultMoveCharWalkMin", value)
            end)

            AddRowNumber(modPanel, "Move Creature Walk Max", "MoveCreatureWalkMax", 300.00)
            RegisterCallback(modPanel, "MoveCreatureWalkMax", function(value)
                applySetting("DefaultMoveCreatureWalkMax", value)
            end)

            AddRowNumber(modPanel, "Move Creature Walk Min", "MoveCreatureWalkMin", 5.00)
            RegisterCallback(modPanel, "MoveCreatureWalkMin", function(value)
                applySetting("DefaultMoveCreatureWalkMin", value)
            end)

            AddRowNumber(modPanel, "Move Encumbrance Effect No Weapon", "MoveEncumEffectNoWeap", 0.30)
            RegisterCallback(modPanel, "MoveEncumEffectNoWeap", function(value)
                applySetting("DefaultMoveEncumEffectNoWea", value)
            end)

            AddRowNumber(modPanel, "Move Encumbrance Effect", "MoveEncumEffect", 0.40)
            RegisterCallback(modPanel, "MoveEncumEffect", function(value)
                applySetting("DefaultMoveEncumEffect", value)
            end)

            AddRowNumber(modPanel, "Move No Weapon Multiplier", "MoveNoWeaponMult", 1.10)
            RegisterCallback(modPanel, "MoveNoWeaponMult", function(value)
                applySetting("DefaultMoveNoWeaponMult", value)
            end)

            AddRowNumber(modPanel, "Move Sneak Multiplier", "MoveSneakMult", 0.80)
            RegisterCallback(modPanel, "MoveSneakMult", function(value)
                applySetting("DefaultMoveSneakMult", value)
            end)

            AddRowNumber(modPanel, "Move Sneak Run Multiplier", "MoveSneakRunMult", 1.00)
            RegisterCallback(modPanel, "MoveSneakRunMult", function(value)
                applySetting("DefaultMoveSneakRunMult", value)
            end)

            AddRowNumber(modPanel, "Move Max Fly Speed", "MoveMaxFlySpeed", 300.00)
            RegisterCallback(modPanel, "MoveMaxFlySpeed", function(value)
                applySetting("DefaultMoveMaxFlySpeed", value)
            end)

            AddRowNumber(modPanel, "Move Min Fly Speed", "MoveMinFlySpeed", 5.00)
            RegisterCallback(modPanel, "MoveMinFlySpeed", function(value)
                applySetting("DefaultMoveMinFlySpeed", value)
            end)

            AddRowNumber(modPanel, "Over Encumbrance Speed", "OverEncumbranceSpeed", 90.00)
            RegisterCallback(modPanel, "OverEncumbranceSpeed", function(value)
                applySetting("OverEncumbranceSpeed", value)
            end)

            AddRowNumber(modPanel, "Air Control Modifier", "AirControlModifier", 0.03)
            RegisterCallback(modPanel, "AirControlModifier", function(value)
                applySetting("AirControlModifier", value)
            end)

            AddRowNumber(modPanel, "Step Height", "StepHeight", 44.30)
            RegisterCallback(modPanel, "StepHeight", function(value)
                applySetting("StepHeight", value)
            end)

            AddRowNumber(modPanel, "Max Slope", "MaxSlope", 47.00)
            RegisterCallback(modPanel, "MaxSlope", function(value)
                applySetting("MaxSlope", value)
            end)

             AddRowNumber(modPanel, "Default Move Sprint Fatigue Base Cost Per Sec", "DefaultMoveSprintFatigueBaseCostPerSec", 9.00)
            RegisterCallback(modPanel, "DefaultMoveSprintFatigueBaseCostPerSec", function(value)
                applySetting("DefaultMoveSprintFatigueBaseCostPerSec", value)
            end)

            AddRowNumber(modPanel, "Default Move Sprint Fatigue Regen Delay", "DefaultMoveSprintFatigueRegenDelay", 3.00)
            RegisterCallback(modPanel, "DefaultMoveSprintFatigueRegenDelay", function(value)
                applySetting("DefaultMoveSprintFatigueRegenDelay", value)
            end)

            --------------------------------------------------------------------------------
            -- Teleportation
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Teleportation")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Kill Z Teleport Research Distance", "KillZTeleportDist", 100.00)
            RegisterCallback(modPanel, "KillZTeleportDist", function(value)
                applySetting("KillZTeleportCustomResearchDist", value)
            end)

            AddRowNumber(modPanel, "Teleport Height If Stuck", "TeleportHeightIfStuck", 50.00)
            RegisterCallback(modPanel, "TeleportHeightIfStuck", function(value)
                applySetting("TeleportHeightIfStuckInGround", value)
            end)

            AddRowNumber(modPanel, "Teleport Max Iteration Count", "TeleportMaxIterations", 150, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "TeleportMaxIterations", function(value)
                applySetting("TeleportMaxIterationCount", value)
            end)

            --------------------------------------------------------------------------------
            -- UI & Effects
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "UI & Effects")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Idle Min Duration", "IdleMinDuration", 0.10)
            RegisterCallback(modPanel, "IdleMinDuration", function(value)
                applySetting("IdleMinDuration", value)
            end)

            AddRowNumber(modPanel, "Draw Weapon Duration", "DrawWeaponDuration", 0.20)
            RegisterCallback(modPanel, "DrawWeaponDuration", function(value)
                applySetting("DrawWeaponDuration", value)
            end)

            AddRowNumber(modPanel, "Prepare Power Attack Duration", "PreparePowerAttackDuration", 0.37)
            RegisterCallback(modPanel, "PreparePowerAttackDuration", function(value)
                applySetting("PreparePowerAttackDuration", value)
            end)

            AddRowNumber(modPanel, "Arrow Life Duration", "ArrowLifeDuration", 90.00)
            RegisterCallback(modPanel, "ArrowLifeDuration", function(value)
                applySetting("ArrowLifeDuration", value)
            end)

            AddRowNumber(modPanel, "Min Pawn Projectile Penetration Depth", "MinProjectilePenetration", 15.00)
            RegisterCallback(modPanel, "MinProjectilePenetration", function(value)
                applySetting("MinPawnProjectilePenetrationDepth", value)
            end)

            AddRowNumber(modPanel, "Max Pawn Projectile Penetration Depth", "MaxProjectilePenetration", 30.00)
            RegisterCallback(modPanel, "MaxProjectilePenetration", function(value)
                applySetting("MaxPawnProjectilePenetrationDepth", value)
            end)

            AddRowNumber(modPanel, "Min Pawn Projectile Velocity Threshold", "MinProjectileVelocity", 500.00)
            RegisterCallback(modPanel, "MinProjectileVelocity", function(value)
                applySetting("MinPawnProjectileVelocityThreshold", value)
            end)

            AddRowNumber(modPanel, "Max Pawn Projectile Velocity Threshold", "MaxProjectileVelocity", 1000.00)
            RegisterCallback(modPanel, "MaxProjectileVelocity", function(value)
                applySetting("MaxPawnProjectileVelocityThreshold", value)
            end)

            AddRowNumber(modPanel, "Arrow Inventory Chance on Hit (%)", "ArrowInventoryChance", 100, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "ArrowInventoryChance", function(value)
                applySetting("ArrowInventoryChancePercentOnTargetHit", value)
            end)

            AddRowNumber(modPanel, "Arrow Fade Duration", "ArrowFadeDuration", 0.00)
            RegisterCallback(modPanel, "ArrowFadeDuration", function(value)
                applySetting("ArrowFadeDuration", value)
            end)

            AddRowNumber(modPanel, "Spell Casting Duration", "SpellCastingDuration", 1.40)
            RegisterCallback(modPanel, "SpellCastingDuration", function(value)
                applySetting("SpellCastingDuration", value)
            end)

            AddRowNumber(modPanel, "Fog Projectile Life Duration", "FogProjectileLifeDuration", 5.00)
            RegisterCallback(modPanel, "FogProjectileLifeDuration", function(value)
                applySetting("FogProjectileLifeDuration", value)
            end)

            AddRowNumber(modPanel, "Clairvoyance Refresh Delay", "ClairvoyanceRefreshDelay", 31.00)
            RegisterCallback(modPanel, "ClairvoyanceRefreshDelay", function(value)
                applySetting("ClairvoyanceRefreshDelay", value)
            end)

            AddRowNumber(modPanel, "Telekinesis Throw Force", "TelekinesisThrowForce", 1000.00)
            RegisterCallback(modPanel, "TelekinesisThrowForce", function(value)
                applySetting("TelekinesisThrowForce", value)
            end)

            AddRowNumber(modPanel, "Bar Blink Anim Loop Num", "BarBlinkAnimLoopNum", 3, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "BarBlinkAnimLoopNum", function(value)
                applySetting("BarBlinkAnimLoopNum", value)
            end)

            AddRowNumber(modPanel, "Bar Blink Anim Speed", "BarBlinkAnimSpeed", 1.40)
            RegisterCallback(modPanel, "BarBlinkAnimSpeed", function(value)
                applySetting("BarBlinkAnimSpeed", value)
            end)

            AddRowNumber(modPanel, "Health Bar Blink Threshold", "HealthBarBlinkThreshold", 0.35)
            RegisterCallback(modPanel, "HealthBarBlinkThreshold", function(value)
                applySetting("HealthBarBlinkProgressThreshold", value)
            end)

            AddRowNumber(modPanel, "Breath Bar Blink Threshold", "BreathBarBlinkThreshold", 0.40)
            RegisterCallback(modPanel, "BreathBarBlinkThreshold", function(value)
                applySetting("BreathBarBlinkProgressThreshold", value)
            end)

            AddRowNumber(modPanel, "Blood Drop Emerge Speed", "BloodDropEmergeSpeed", 4.50)
            RegisterCallback(modPanel, "BloodDropEmergeSpeed", function(value)
                applySetting("BloodDropEmergeSpeed", value)
            end)

            AddRowNumber(modPanel, "Blood Drop Stay Duration", "BloodDropStayDuration", 0.80)
            RegisterCallback(modPanel, "BloodDropStayDuration", function(value)
                applySetting("BloodDropStayDuration", value)
            end)

            AddRowNumber(modPanel, "Blood Drop Fade Out Speed", "BloodDropFadeOutSpeed", 3.30)
            RegisterCallback(modPanel, "BloodDropFadeOutSpeed", function(value)
                applySetting("BloodDropFadeOutSpeed", value)
            end)

            AddRowNumber(modPanel, "Min Damage % for Blood Drop", "MinBloodDropDamage", 0.01)
            RegisterCallback(modPanel, "MinBloodDropDamage", function(value)
                applySetting("MinDamagePercentForBloodDropAppearance", value)
            end)

            AddRowNumber(modPanel, "Max Damage % for Blood Drop Enhancement", "MaxBloodDropDamageEnhance", 0.80)
            RegisterCallback(modPanel, "MaxBloodDropDamageEnhance", function(value)
                applySetting("MaxDamagePercentForBloodDropVisualEnhancement", value)
            end)

            AddRowNumber(modPanel, "Min Blood Drop Scale Factor", "MinBloodDropScale", 0.40)
            RegisterCallback(modPanel, "MinBloodDropScale", function(value)
                applySetting("MinBloodDropScaleFactor", value)
            end)

            AddRowNumber(modPanel, "Full Progress Reduction Duration", "FullProgressReductionDuration", 1.30)
            RegisterCallback(modPanel, "FullProgressReductionDuration", function(value)
                applySetting("FullProgressReductionDuration", value)
            end)

            AddRowNumber(modPanel, "Wait to Start Reduction Anim Duration", "WaitReductionAnimDuration", 1.00)
            RegisterCallback(modPanel, "WaitReductionAnimDuration", function(value)
                applySetting("WaitToStartReductionAnimDuration", value)
            end)

            AddRowNumber(modPanel, "Bow Hold Minimum Completion", "BowHoldMinCompletion", 0.20)
            RegisterCallback(modPanel, "BowHoldMinCompletion", function(value)
                applySetting("BowHoldMinimumCompletion", value)
            end)

            AddRowNumber(modPanel, "Bow Hold Completion Per Second", "BowHoldCompletionPerSecond", 0.80)
            RegisterCallback(modPanel, "BowHoldCompletionPerSecond", function(value)
                applySetting("BowHoldCompletionPerSecond", value)
            end)

            AddRowNumber(modPanel, "Arrow Weak Speed Multiplier", "ArrowWeakSpeedMult", 0.00)
            RegisterCallback(modPanel, "ArrowWeakSpeedMult", function(value)
                applySetting("ArrowWeakSpeedMultiplier", value)
            end)

            AddRowNumber(modPanel, "Arrow Initial Speed Multiplier", "ArrowInitialSpeedMult", 5000.00)
            RegisterCallback(modPanel, "ArrowInitialSpeedMult", function(value)
                applySetting("ArrowInitialSpeedMultiplier", value)
            end)

            AddRowNumber(modPanel, "Magic Projectile Speed Multiplier", "MagicProjectileSpeedMult", 1950.00)
            RegisterCallback(modPanel, "MagicProjectileSpeedMult", function(value)
                applySetting("MagicProjectileSpeedMultiplier", value)
            end)

            AddRowNumber(modPanel, "First Person Arms Height", "FirstPersonArmsHeight", 45.00)
            RegisterCallback(modPanel, "FirstPersonArmsHeight", function(value)
                applySetting("FirstPersonArmsHeight", value)
            end)

            AddRowNumber(modPanel, "Immersion Depth to Lock Arms Rotation", "ImmersionDepthToLockArmsRotation", 0.85)
            RegisterCallback(modPanel, "ImmersionDepthToLockArmsRotation", function(value)
                applySetting("ImmersionDepthToLockArmsRotation", value)
            end)

            AddRowNumber(modPanel, "Arms Visibility Upward", "ArmsVisibilityUpward", 75.00)
            RegisterCallback(modPanel, "ArmsVisibilityUpward", function(value)
                applySetting("ArmsVisibilityUpward", value)
            end)

            AddRowNumber(modPanel, "Arms Visibility Downward", "ArmsVisibilityDownward", -79.00)
            RegisterCallback(modPanel, "ArmsVisibilityDownward", function(value)
                applySetting("ArmsVisibilityDownward", value)
            end)

            AddRowNumber(modPanel, "Arms Speed After Attack", "ArmsSpeedAfterAttack", 0.00)
            RegisterCallback(modPanel, "ArmsSpeedAfterAttack", function(value)
                applySetting("ArmsSpeedAfterAttack", value)
            end)

            AddRowNumber(modPanel, "Arms Speed After Look Up In Swim", "ArmsSpeedAfterLookUpInSwim", 0.10)
            RegisterCallback(modPanel, "ArmsSpeedAfterLookUpInSwim", function(value)
                applySetting("ArmsSpeedAfterLookUpInSwim", value)
            end)

            AddRowNumber(modPanel, "Focus When Dialogue", "FocusWhenDialogue", 75.00)
            RegisterCallback(modPanel, "FocusWhenDialogue", function(value)
                applySetting("FocusWhenDialogue", value)
            end)

            AddRowNumber(modPanel, "Speed When Start Targeting In Dialogue", "SpeedWhenStartTargetingInDialogue", 2.00)
            RegisterCallback(modPanel, "SpeedWhenStartTargetingInDialogue", function(value)
                applySetting("SpeedWhenStartTargetingInDialogue", value)
            end)

            AddRowNumber(modPanel, "Persuasion Percentage Reduction FOV", "PersuasionPercentageReductionFOV", 0.25)
            RegisterCallback(modPanel, "PersuasionPercentageReductionFOV", function(value)
                applySetting("PersuasionPercentageReductionFOV", value)
            end)

            --------------------------------------------------------------------------------
            -- Experience Rates
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Experience Rates")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Skill Level Up XP Exponent", "SkillXPExponent", 1.50)
            RegisterCallback(modPanel, "SkillXPExponent", function(value)
                applySetting("SkillLevelUpGrantedXPExponent", value)
            end)

            AddRowNumber(modPanel, "Player Level Up Base XP", "PlayerLevelUpBaseXP", 1940.00)
            RegisterCallback(modPanel, "PlayerLevelUpBaseXP", function(value)
                applySetting("PlayerLevelUpBaseLevelXP", value)
            end)

            AddRowNumber(modPanel, "Player Level Up XP Factor", "PlayerLevelUpXPFactor", 60.00)
            RegisterCallback(modPanel, "PlayerLevelUpXPFactor", function(value)
                applySetting("PlayerLevelUpXPFactor", value)
            end)

            AddRowNumber(modPanel, "Player Level Up XP Exponent", "PlayerLevelUpXPExponent", 1.75)
            RegisterCallback(modPanel, "PlayerLevelUpXPExponent", function(value)
                applySetting("PlayerLevelUpXPExponent", value)
            end)

            AddRowNumber(modPanel, "Exp Running", "AthleticsExpRunning", 0.05)
            RegisterCallback(modPanel, "AthleticsExpRunning", function(value)
                applySetting("AthleticsExpRunning", value)
            end)

            AddRowNumber(modPanel, "Exp Swimming", "AthleticsExpSwimming", 0.08)
            RegisterCallback(modPanel, "AthleticsExpSwimming", function(value)
                applySetting("AthleticsExpSwimming", value)
            end)

            AddRowNumber(modPanel, "Exp Sprinting", "AthleticsExpSprinting", 0.05)
            RegisterCallback(modPanel, "AthleticsExpSprinting", function(value)
                applySetting("AthleticsExpSprinting", value)
            end)

            AddRowNumber(modPanel, "Exp Transaction Multiplier", "MercantileExpMult", 0.03)
            RegisterCallback(modPanel, "MercantileExpMult", function(value)
                applySetting("MercantileExpTransactionMult", value)
            end)

            AddRowNumber(modPanel, "Alteration Exp Cast Multiplier", "AlterationExpMult", 0.10)
            RegisterCallback(modPanel, "AlterationExpMult", function(value)
                applySetting("AlterationExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Conjuration Exp Cast Multiplier", "ConjurationExpMult", 0.10)
            RegisterCallback(modPanel, "ConjurationExpMult", function(value)
                applySetting("ConjurationExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Destruction Exp Cast Multiplier", "DestructionExpMult", 0.10)
            RegisterCallback(modPanel, "DestructionExpMult", function(value)
                applySetting("DestructionExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Illusion Exp Cast Multiplier", "IllusionExpMult", 0.10)
            RegisterCallback(modPanel, "IllusionExpMult", function(value)
                applySetting("IllusionExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Mysticism Exp Cast Multiplier", "MysticismExpMult", 0.10)
            RegisterCallback(modPanel, "MysticismExpMult", function(value)
                applySetting("MysticismExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Restoration Exp Cast Multiplier", "RestorationExpMult", 0.10)
            RegisterCallback(modPanel, "RestorationExpMult", function(value)
                applySetting("RestorationExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Exp Gain Disposition Increased", "PersuasionExpIncreased", 3.60)
            RegisterCallback(modPanel, "PersuasionExpIncreased", function(value)
                applySetting("PersuasionExpGainDispositionIncreased", value)
            end)

            AddRowNumber(modPanel, "Exp Gain Disposition Decreased", "PersuasionExpDecreased", 1.20)
            RegisterCallback(modPanel, "PersuasionExpDecreased", function(value)
                applySetting("PersuasionExpGainDispositionDecreased", value)
            end)

            --------------------------------------------------------------------------------
            -- Leveling & Character Stats
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Leveling & Character Stats")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Magicka Return Linear Multiplier", "MagickaReturnLinearMult", 0.01)
            RegisterCallback(modPanel, "MagickaReturnLinearMult", function(value)
                applySetting("NewFormulaMagickaReturnLinearMult", value)
            end)

            AddRowNumber(modPanel, "Magicka Return Quadratic Multiplier", "MagickaReturnQuadraticMult", 0.00)
            RegisterCallback(modPanel, "MagickaReturnQuadraticMult", function(value)
                applySetting("NewFormulaMagickaReturnQuadraticMult", value)
            end)

            AddRowNumber(modPanel, "PC Health Level Endurance Multiplier", "HealthLevelEnduranceMult", 0.10)
            RegisterCallback(modPanel, "HealthLevelEnduranceMult", function(value)
                applySetting("PCHealthNewFormulaLevelEnduranceMult", value)
            end)

            AddRowNumber(modPanel, "PC Health Endurance Multiplier", "HealthEnduranceMult", 0.67)
            RegisterCallback(modPanel, "HealthEnduranceMult", function(value)
                applySetting("PCHealthNewFormulaEnduranceMult", value)
            end)

            AddRowNumber(modPanel, "PC Health Strength Multiplier", "HealthStrengthMult", 0.33)
            RegisterCallback(modPanel, "HealthStrengthMult", function(value)
                applySetting("PCHealthNewFormulaStrengthMult", value)
            end)

            AddRowNumber(modPanel, "Fatigue Multiplier", "FatigueMult", 4, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "FatigueMult", function(value)
                applySetting("NewFormulaFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Willpower Multiplier", "WillpowerMult", 0.67)
            RegisterCallback(modPanel, "WillpowerMult", function(value)
                applySetting("NewFormulaWillpowerMult", value)
            end)

            AddRowNumber(modPanel, "Agility Multiplier", "AgilityMult", 0.33)
            RegisterCallback(modPanel, "AgilityMult", function(value)
                applySetting("NewFormulaAgilityMult", value)
            end)

            AddRowBoolSwitch(modPanel, "Show Player Leveling", "ShowPlayerLeveling", false)
            RegisterCallback(modPanel, "ShowPlayerLeveling", function(value)
                applySetting("bDoesOblivionShowPlayerLeveling", value)
            end)

            --------------------------------------------------------------------------------
            -- Skills
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Skills")
            AddRowSeparator(modPanel)

            AddRowSectionHeader(modPanel, "Acrobatics")
            AddRowNumber(modPanel, "Novice Jump Fatigue Mult", "NoviceAcrobaticsJumpFatigueMult", 1.00)
            RegisterCallback(modPanel, "NoviceAcrobaticsJumpFatigueMult", function(value)
                applySetting("NoviceAcrobaticsJumpFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Apprentice Jump Fatigue Mult", "ApprenticeAcrobaticsJumpFatigueMult", 1.00)
            RegisterCallback(modPanel, "ApprenticeAcrobaticsJumpFatigueMult", function(value)
                applySetting("ApprenticeAcrobaticsJumpFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Journeyman Jump Fatigue Mult", "JourneymanAcrobaticsJumpFatigueMult", 0.50)
            RegisterCallback(modPanel, "JourneymanAcrobaticsJumpFatigueMult", function(value)
                applySetting("JourneymanAcrobaticsJumpFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Expert Jump Fatigue Mult", "ExpertAcrobaticsJumpFatigueMult", 0.50)
            RegisterCallback(modPanel, "ExpertAcrobaticsJumpFatigueMult", function(value)
                applySetting("ExpertAcrobaticsJumpFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Master Jump Fatigue Mult", "MasterAcrobaticsJumpFatigueMult", 0.25)
            RegisterCallback(modPanel, "MasterAcrobaticsJumpFatigueMult", function(value)
                applySetting("MasterAcrobaticsJumpFatigueMult", value)
            end)

            AddRowNumber(modPanel, "Master Fall Damage Mult", "MasterAcrobaticsFallDamageMult", 0.50)
            RegisterCallback(modPanel, "MasterAcrobaticsFallDamageMult", function(value)
                applySetting("MasterAcrobaticsFallDamageMult", value)
            end)

            AddRowNumber(modPanel, "Dodge Cooldown", "DodgeCooldown", 0.50)
            RegisterCallback(modPanel, "DodgeCooldown", function(value)
                applySetting("DodgeCooldown", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Alchemy")
            AddRowNumber(modPanel, "Apprentice Double Craft Chance", "AlchemyApprenticeCraftChance", 0.25)
            RegisterCallback(modPanel, "AlchemyApprenticeCraftChance", function(value)
                applySetting("AlchemyApprenticeDoubleCraftChance", value)
            end)

            AddRowNumber(modPanel, "Journeyman Double Craft Chance", "AlchemyJourneymanCraftChance", 0.25)
            RegisterCallback(modPanel, "AlchemyJourneymanCraftChance", function(value)
                applySetting("AlchemyJourneymanDoubleCraftChance", value)
            end)

            AddRowNumber(modPanel, "Expert Double Craft Chance", "AlchemyExpertCraftChance", 1.00)
            RegisterCallback(modPanel, "AlchemyExpertCraftChance", function(value)
                applySetting("AlchemyExpertDoubleCraftChance", value)
            end)

            AddRowNumber(modPanel, "Master Double Craft Chance", "AlchemyMasterCraftChance", 1.00)
            RegisterCallback(modPanel, "AlchemyMasterCraftChance", function(value)
                applySetting("AlchemyMasterDoubleCraftChance", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Athletics")
            AddRowNumber(modPanel, "Novice Run Fatigue Regen Mult", "AthleticsNoviceRunFatigueRegenMult", 0.75)
            RegisterCallback(modPanel, "AthleticsNoviceRunFatigueRegenMult", function(value)
                applySetting("PerkAthleticsNoviceRunFatigueRegenMult", value)
            end)

            AddRowNumber(modPanel, "Apprentice Run Fatigue Regen Mult", "AthleticsApprenticeRunFatigueRegenMult", 1.00)
            RegisterCallback(modPanel, "AthleticsApprenticeRunFatigueRegenMult", function(value)
                applySetting("PerkAthleticsApprenticeRunFatigueRegenMult", value)
            end)

            AddRowNumber(modPanel, "Journeyman Run Fatigue Regen Mult", "AthleticsJourneymanRunFatigueRegenMult", 1.00)
            RegisterCallback(modPanel, "AthleticsJourneymanRunFatigueRegenMult", function(value)
                applySetting("PerkAthleticsJourneymanRunFatigueRegenMult", value)
            end)

            AddRowNumber(modPanel, "Expert Run Fatigue Regen Mult", "AthleticsExpertRunFatigueRegenMult", 1.00)
            RegisterCallback(modPanel, "AthleticsExpertRunFatigueRegenMult", function(value)
                applySetting("PerkAthleticsExpertRunFatigueRegenMult", value)
            end)

            AddRowNumber(modPanel, "Master Run Fatigue Regen Mult", "AthleticsMasterRunFatigueRegenMult", 1.00)
            RegisterCallback(modPanel, "AthleticsMasterRunFatigueRegenMult", function(value)
                applySetting("PerkAthleticsMasterRunFatigueRegenMult", value)
            end)

            AddRowNumber(modPanel, "Novice Sprint Fatigue Cost Mult", "AthleticsNoviceSprintFatigueCostMult", 1.00)
            RegisterCallback(modPanel, "AthleticsNoviceSprintFatigueCostMult", function(value)
                applySetting("PerkAthleticsNoviceSprintFatigueCostMult", value)
            end)

            AddRowNumber(modPanel, "Apprentice Sprint Fatigue Cost Mult", "AthleticsApprenticeSprintFatigueCostMult", 1.00)
            RegisterCallback(modPanel, "AthleticsApprenticeSprintFatigueCostMult", function(value)
                applySetting("PerkAthleticsApprenticeSprintFatigueCostMult", value)
            end)

            AddRowNumber(modPanel, "Journeyman Sprint Fatigue Cost Mult", "AthleticsJourneymanSprintFatigueCostMult", 0.70)
            RegisterCallback(modPanel, "AthleticsJourneymanSprintFatigueCostMult", function(value)
                applySetting("PerkAthleticsJourneymanSprintFatigueCostMult", value)
            end)

            AddRowNumber(modPanel, "Expert Sprint Fatigue Cost Mult", "AthleticsExpertSprintFatigueCostMult", 0.40)
            RegisterCallback(modPanel, "AthleticsExpertSprintFatigueCostMult", function(value)
                applySetting("PerkAthleticsExpertSprintFatigueCostMult", value)
            end)

            AddRowNumber(modPanel, "Master Sprint Fatigue Cost Mult", "AthleticsMasterSprintFatigueCostMult", 0.00)
            RegisterCallback(modPanel, "AthleticsMasterSprintFatigueCostMult", function(value)
                applySetting("PerkAthleticsMasterSprintFatigueCostMult", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Block")
            AddRowNumber(modPanel, "Novice Fatigue Damage Mod", "NoviceBlockFatigueDamageMod", 2.00)
            RegisterCallback(modPanel, "NoviceBlockFatigueDamageMod", function(value)
                applySetting("NoviceBlockPerkFatigueDamageMod", value)
            end)

            AddRowNumber(modPanel, "Journeyman Fatigue Damage Mod", "JourneymanBlockFatigueDamageMod", 1.50)
            RegisterCallback(modPanel, "JourneymanBlockFatigueDamageMod", function(value)
                applySetting("JourneymanBlockPerkFatigueDamageMod", value)
            end)

            AddRowNumber(modPanel, "Expert Fatigue Damage Mod", "ExpertBlockFatigueDamageMod", 1.00)
            RegisterCallback(modPanel, "ExpertBlockFatigueDamageMod", function(value)
                applySetting("ExpertBlockPerkFatigueDamageMod", value)
            end)

            AddRowNumber(modPanel, "Master Fatigue Damage Mod", "MasterBlockFatigueDamageMod", 0.50)
            RegisterCallback(modPanel, "MasterBlockFatigueDamageMod", function(value)
                applySetting("MasterBlockPerkFatigueDamageMod", value)
            end)

            AddRowNumber(modPanel, "Fatigue Shield Bash Base Cost", "FatigueShieldBashBaseCost", 7.00)
            RegisterCallback(modPanel, "FatigueShieldBashBaseCost", function(value)
                applySetting("FatigueShieldBashBaseCost", value)
            end)

            AddRowNumber(modPanel, "Fatigue Shield Bash Weight Mult", "FatigueShieldBashWeightMult", 0.30)
            RegisterCallback(modPanel, "FatigueShieldBashWeightMult", function(value)
                applySetting("FatigueShieldBashWeightMult", value)
            end)

            AddRowNumber(modPanel, "Fatigue Shield Bash Final Mult", "FatigueShieldBashFinalMult", 5.00)
            RegisterCallback(modPanel, "FatigueShieldBashFinalMult", function(value)
                applySetting("FatigueShieldBashFinalMult", value)
            end)

            AddRowNumber(modPanel, "Base Shield Bash Attribute Value", "BaseShieldBashAttributeValue", 0.75)
            RegisterCallback(modPanel, "BaseShieldBashAttributeValue", function(value)
                applySetting("BaseShieldBashAttributeValue", value)
            end)

            AddRowNumber(modPanel, "Attribute Shield Bash Bonus Scaling Mult", "AttributeShieldBashBonusScalingMultiplier", 0.00)
            RegisterCallback(modPanel, "AttributeShieldBashBonusScalingMultiplier", function(value)
                applySetting("AttributeShieldBashBonusScalingMultiplier", value)
            end)

            AddRowNumber(modPanel, "Base Shield Bash Skill Value", "BaseShieldBashSkillValue", 0.20)
            RegisterCallback(modPanel, "BaseShieldBashSkillValue", function(value)
                applySetting("BaseShieldBashSkillValue", value)
            end)

            AddRowNumber(modPanel, "Skill Shield Bash Bonus Scaling Mult", "SkillShieldBashBonusScalingMultiplier", 0.01)
            RegisterCallback(modPanel, "SkillShieldBashBonusScalingMultiplier", function(value)
                applySetting("SkillShieldBashBonusScalingMultiplier", value)
            end)

            AddRowNumber(modPanel, "Final Shield Bash Damage Multiplier", "FinalShieldBashDamageMultiplier", 1.00)
            RegisterCallback(modPanel, "FinalShieldBashDamageMultiplier", function(value)
                applySetting("FinalShieldBashDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Master Level Shield Bash Damage Mult", "BlockMasterLevelShieldBashDamageMultiplier", 2.50)
            RegisterCallback(modPanel, "BlockMasterLevelShieldBashDamageMultiplier", function(value)
                applySetting("BlockMasterLevelShieldBashDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Formula Skill Multiplier", "BlockFormulaSkillMutliplier", 0.01)
            RegisterCallback(modPanel, "BlockFormulaSkillMutliplier", function(value)
                applySetting("BlockFormulaSkillMutliplier", value)
            end)

            AddRowNumber(modPanel, "Formula Final Skill Multiplier", "BlockFormulaFinalSkillMultiplier", 0.40)
            RegisterCallback(modPanel, "BlockFormulaFinalSkillMultiplier", function(value)
                applySetting("BlockFormulaFinalSkillMultiplier", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Blade")
            AddRowNumber(modPanel, "Novice Power Attack Damage Mult", "NoviceBladePowerAttackDamageMultiplier", 2.50)
            RegisterCallback(modPanel, "NoviceBladePowerAttackDamageMultiplier", function(value)
                applySetting("NoviceBladePowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Power Attack Damage Mult", "ApprenticeBladePowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ApprenticeBladePowerAttackDamageMultiplier", function(value)
                applySetting("ApprenticeBladePowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Damage Mult", "JourneymanBladePowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "JourneymanBladePowerAttackDamageMultiplier", function(value)
                applySetting("JourneymanBladePowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Expert Power Attack Damage Mult", "ExpertBladePowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ExpertBladePowerAttackDamageMultiplier", function(value)
                applySetting("ExpertBladePowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Damage Mult", "MasterBladePowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "MasterBladePowerAttackDamageMultiplier", function(value)
                applySetting("MasterBladePowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Durability Loss %", "BladePerkApprenticeDurabilityLossPercentage", 0.80)
            RegisterCallback(modPanel, "BladePerkApprenticeDurabilityLossPercentage", function(value)
                applySetting("BladePerkApprenticeDurabilityLossPercentage", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Weakness to Norm Weap Mag", "BladePerkJourneymanPowerAttackWeaknessToNormWeapMagnitude", 15.00)
            RegisterCallback(modPanel, "BladePerkJourneymanPowerAttackWeaknessToNormWeapMagnitude", function(value)
                applySetting("BladePerkJourneymanPowerAttackWeaknessToNormWeapMagnitude", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Weakness to Norm Weap Dur", "BladePerkJourneymanPowerAttackWeaknessToNormWeapDuration", 5.00)
            RegisterCallback(modPanel, "BladePerkJourneymanPowerAttackWeaknessToNormWeapDuration", function(value)
                applySetting("BladePerkJourneymanPowerAttackWeaknessToNormWeapDuration", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Weakness to Norm Weap Mag", "BladePerkMasterPowerAttackWeaknessToNormWeapMagnitude", 30.00)
            RegisterCallback(modPanel, "BladePerkMasterPowerAttackWeaknessToNormWeapMagnitude", function(value)
                applySetting("BladePerkMasterPowerAttackWeaknessToNormWeapMagnitude", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Weakness to Norm Weap Dur", "BladePerkMasterPowerAttackWeaknessToNormWeapDuration", 10.00)
            RegisterCallback(modPanel, "BladePerkMasterPowerAttackWeaknessToNormWeapDuration", function(value)
                applySetting("BladePerkMasterPowerAttackWeaknessToNormWeapDuration", value)
            end)

            AddRowNumber(modPanel, "Power Attack Weakness to Norm Weap Chance Modifier", "BladePerkPowerAttackWeaknessToNormWeapChanceModifier", 100.00)
            RegisterCallback(modPanel, "BladePerkPowerAttackWeaknessToNormWeapChanceModifier", function(value)
                applySetting("BladePerkPowerAttackWeaknessToNormWeapChanceModifier", value)
            end)

            AddRowNumber(modPanel, "Expert Light Attack Damage Health Chance", "BladePerkExpertLightAttackDamageHealthChance", 20.00)
            RegisterCallback(modPanel, "BladePerkExpertLightAttackDamageHealthChance", function(value)
                applySetting("BladePerkExpertLightAttackDamageHealthChance", value)
            end)

            AddRowNumber(modPanel, "Expert Light Attack Damage Health Level Mult", "BladePerkExpertLightAttackDamageHealthLevelMultiplier", 0.10)
            RegisterCallback(modPanel, "BladePerkExpertLightAttackDamageHealthLevelMultiplier", function(value)
                applySetting("BladePerkExpertLightAttackDamageHealthLevelMultiplier", value)
            end)

            AddRowNumber(modPanel, "Expert Light Attack Damage Health Dur", "BladePerkExpertLightAttackDamageHealthDuration", 3.00)
            RegisterCallback(modPanel, "BladePerkExpertLightAttackDamageHealthDuration", function(value)
                applySetting("BladePerkExpertLightAttackDamageHealthDuration", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Blunt")
            AddRowNumber(modPanel, "Novice Power Attack Damage Mult", "NoviceBluntPowerAttackDamageMultiplier", 2.50)
            RegisterCallback(modPanel, "NoviceBluntPowerAttackDamageMultiplier", function(value)
                applySetting("NoviceBluntPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Power Attack Damage Mult", "ApprenticeBluntPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ApprenticeBluntPowerAttackDamageMultiplier", function(value)
                applySetting("ApprenticeBluntPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Damage Mult", "JourneymanBluntPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "JourneymanBluntPowerAttackDamageMultiplier", function(value)
                applySetting("JourneymanBluntPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Expert Power Attack Damage Mult", "ExpertBluntPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ExpertBluntPowerAttackDamageMultiplier", function(value)
                applySetting("ExpertBluntPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Damage Mult", "MasterBluntPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "MasterBluntPowerAttackDamageMultiplier", function(value)
                applySetting("MasterBluntPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Durability Loss %", "BluntPerkApprenticeDurabilityLossPercentage", 0.80)
            RegisterCallback(modPanel, "BluntPerkApprenticeDurabilityLossPercentage", function(value)
                applySetting("BluntPerkApprenticeDurabilityLossPercentage", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Self Shield Magnitude", "BluntPerkJourneymanPowerAttackSelfShieldMagnitude", 15.00)
            RegisterCallback(modPanel, "BluntPerkJourneymanPowerAttackSelfShieldMagnitude", function(value)
                applySetting("BluntPerkJourneymanPowerAttackSelfShieldMagnitude", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Self Shield Duration", "BluntPerkJourneymanPowerAttackSelfShieldDuration", 5.00)
            RegisterCallback(modPanel, "BluntPerkJourneymanPowerAttackSelfShieldDuration", function(value)
                applySetting("BluntPerkJourneymanPowerAttackSelfShieldDuration", value)
            end)

            AddRowNumber(modPanel, "Master Self Shield Magnitude", "BluntPerkMasterSelfShieldMagnitude", 30.00)
            RegisterCallback(modPanel, "BluntPerkMasterSelfShieldMagnitude", function(value)
                applySetting("BluntPerkMasterSelfShieldMagnitude", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Self Shield Duration", "BluntPerkMasterPowerAttackSelfShieldDuration", 10.00)
            RegisterCallback(modPanel, "BluntPerkMasterPowerAttackSelfShieldDuration", function(value)
                applySetting("BluntPerkMasterPowerAttackSelfShieldDuration", value)
            end)

            AddRowNumber(modPanel, "Power Attack Self Shield Chance", "BluntPerkPowerAttackSelfShieldChance", 100.00)
            RegisterCallback(modPanel, "BluntPerkPowerAttackSelfShieldChance", function(value)
                applySetting("BluntPerkPowerAttackSelfShieldChance", value)
            end)

            AddRowNumber(modPanel, "Expert Light Attack Silence Chance", "BluntPerkExpertLightAttackSilenceChance", 20.00)
            RegisterCallback(modPanel, "BluntPerkExpertLightAttackSilenceChance", function(value)
                applySetting("BluntPerkExpertLightAttackSilenceChance", value)
            end)

            AddRowNumber(modPanel, "Light Attack Silence Duration", "BluntPerkLightAttackSilenceDuration", 10.00)
            RegisterCallback(modPanel, "BluntPerkLightAttackSilenceDuration", function(value)
                applySetting("BluntPerkLightAttackSilenceDuration", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Hand-to-Hand")
            AddRowNumber(modPanel, "Novice Power Attack Damage Mult", "NoviceHandToHandPowerAttackDamageMultiplier", 2.50)
            RegisterCallback(modPanel, "NoviceHandToHandPowerAttackDamageMultiplier", function(value)
                applySetting("NoviceHandToHandPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Power Attack Damage Mult", "ApprenticeHandToHandPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ApprenticeHandToHandPowerAttackDamageMultiplier", function(value)
                applySetting("ApprenticeHandToHandPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Damage Mult", "JourneymanHandToHandPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "JourneymanHandToHandPowerAttackDamageMultiplier", function(value)
                applySetting("JourneymanHandToHandPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Expert Power Attack Damage Mult", "ExpertHandToHandPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "ExpertHandToHandPowerAttackDamageMultiplier", function(value)
                applySetting("ExpertHandToHandPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Master Power Attack Damage Mult", "MasterHandToHandPowerAttackDamageMultiplier", 3.00)
            RegisterCallback(modPanel, "MasterHandToHandPowerAttackDamageMultiplier", function(value)
                applySetting("MasterHandToHandPowerAttackDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Novice Light Attack Fatigue Mult", "HandToHandNoviceLightAttackFatigueMultiplier", 1.00)
            RegisterCallback(modPanel, "HandToHandNoviceLightAttackFatigueMultiplier", function(value)
                applySetting("HandToHandPerkNoviceLightAttackFatigueMultiplier", value)
            end)

            AddRowNumber(modPanel, "Apprentice Light Attack Fatigue Mult", "HandToHandApprenticeLightAttackFatigueMultiplier", 1.00)
            RegisterCallback(modPanel, "HandToHandApprenticeLightAttackFatigueMultiplier", function(value)
                applySetting("HandToHandPerkApprenticeLightAttackFatigueMultiplier", value)
            end)

            AddRowNumber(modPanel, "Journeyman Light Attack Fatigue Mult", "HandToHandJourneymanLightAttackFatigueMultiplier", 1.00)
            RegisterCallback(modPanel, "HandToHandJourneymanLightAttackFatigueMultiplier", function(value)
                applySetting("HandToHandPerkJournyemanLightAttackFatigueMultiplier", value)
            end)

            AddRowNumber(modPanel, "Expert Light Attack Fatigue Mult", "HandToHandExpertLightAttackFatigueMultiplier", 1.50)
            RegisterCallback(modPanel, "HandToHandExpertLightAttackFatigueMultiplier", function(value)
                applySetting("HandToHandPerkExpertLightAttackFatigueMultiplier", value)
            end)

            AddRowNumber(modPanel, "Master Light Attack Fatigue Mult", "HandToHandMasterLightAttackFatigueMultiplier", 2.00)
            RegisterCallback(modPanel, "HandToHandMasterLightAttackFatigueMultiplier", function(value)
                applySetting("HandToHandPerkMasterLightAttackFatigueMultiplier", value)
            end)

            AddRowNumber(modPanel, "Journeyman Power Attack Disarm Chance", "HandToHandJourneymanPowerAttackDisarmChance", 25.00)
            RegisterCallback(modPanel, "HandToHandJourneymanPowerAttackDisarmChance", function(value)
                applySetting("HandToHandJourneymanPowerAttackDisarmChance", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Marksman")
            AddRowNumber(modPanel, "Expert Paralyze Chance", "PerkMarksmanExpertParalyzeChance", 10.00)
            RegisterCallback(modPanel, "PerkMarksmanExpertParalyzeChance", function(value)
                applySetting("PerkMarksmanExpertParalyzeChance", value)
            end)

            AddRowNumber(modPanel, "Master Paralyze Chance", "PerkMarksmanMasterParalyzeChance", 25.00)
            RegisterCallback(modPanel, "PerkMarksmanMasterParalyzeChance", function(value)
                applySetting("PerkMarksmanMasterParalyzeChance", value)
            end)

            AddRowNumber(modPanel, "Expert Paralyze Duration", "PerkMarksmanExpertParalyzeDuration", 5.00)
            RegisterCallback(modPanel, "PerkMarksmanExpertParalyzeDuration", function(value)
                applySetting("PerkMarksmanExpertParalyzeDuration", value)
            end)

            AddRowNumber(modPanel, "Master Paralyze Duration", "PerkMarksmanMasterParalyzeDuration", 5.00)
            RegisterCallback(modPanel, "PerkMarksmanMasterParalyzeDuration", function(value)
                applySetting("PerkMarksmanMasterParalyzeDuration", value)
            end)

            AddRowNumber(modPanel, "Novice Bow Draw Fatigue Burn Per Second", "NoviceMarksmanBowDrawFatigueBurnPerSecond", 20.00)
            RegisterCallback(modPanel, "NoviceMarksmanBowDrawFatigueBurnPerSecond", function(value)
                applySetting("NoviceMarksmanBowDrawFatigueBurnPerSecond", value)
            end)

            AddRowNumber(modPanel, "Apprentice Bow Draw Fatigue Burn Per Second", "ApprenticeMarksmanBowDrawFatigueBurnPerSecond", 0.00)
            RegisterCallback(modPanel, "ApprenticeMarksmanBowDrawFatigueBurnPerSecond", function(value)
                applySetting("ApprenticeMarksmanBowDrawFatigueBurnPerSecond", value)
            end)

            AddRowNumber(modPanel, "Journeyman Bow Draw Fatigue Burn Per Second", "JourneymanMarksmanBowDrawFatigueBurnPerSecond", 0.00)
            RegisterCallback(modPanel, "JourneymanMarksmanBowDrawFatigueBurnPerSecond", function(value)
                applySetting("JourneymanMarksmanBowDrawFatigueBurnPerSecond", value)
            end)

            AddRowNumber(modPanel, "Expert Bow Draw Fatigue Burn Per Second", "ExpertMarksmanBowDrawFatigueBurnPerSecond", 0.00)
            RegisterCallback(modPanel, "ExpertMarksmanBowDrawFatigueBurnPerSecond", function(value)
                applySetting("ExpertMarksmanBowDrawFatigueBurnPerSecond", value)
            end)

            AddRowNumber(modPanel, "Master Bow Draw Fatigue Burn Per Second", "MasterMarksmanBowDrawFatigueBurnPerSecond", 0.00)
            RegisterCallback(modPanel, "MasterMarksmanBowDrawFatigueBurnPerSecond", function(value)
                applySetting("MasterMarksmanBowDrawFatigueBurnPerSecond", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Mercantile")
            AddRowNumber(modPanel, "Apprentice Level Offset", "MercantileApprenticeOffset", 2, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "MercantileApprenticeOffset", function(value)
                applySetting("PerkMercantileApprenticeLevelOffset", value)
            end)

            AddRowNumber(modPanel, "Journeyman Level Offset", "MercantileJourneymanOffset", 4, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "MercantileJourneymanOffset", function(value)
                applySetting("PerkMercantileJourneymanLevelOffset", value)
            end)

            AddRowNumber(modPanel, "Master Level Offset", "MercantileMasterOffset", 6, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "MercantileMasterOffset", function(value)
                applySetting("PerkMercantileMasterLevelOffset", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Magic Schools")
            AddRowNumber(modPanel, "Alteration Exp Cast Multiplier", "AlterationExpMult", 0.10)
            RegisterCallback(modPanel, "AlterationExpMult", function(value)
                applySetting("AlterationExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Conjuration Exp Cast Multiplier", "ConjurationExpMult", 0.10)
            RegisterCallback(modPanel, "ConjurationExpMult", function(value)
                applySetting("ConjurationExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Destruction Exp Cast Multiplier", "DestructionExpMult", 0.10)
            RegisterCallback(modPanel, "DestructionExpMult", function(value)
                applySetting("DestructionExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Illusion Exp Cast Multiplier", "IllusionExpMult", 0.10)
            RegisterCallback(modPanel, "IllusionExpMult", function(value)
                applySetting("IllusionExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Mysticism Exp Cast Multiplier", "MysticismExpMult", 0.10)
            RegisterCallback(modPanel, "MysticismExpMult", function(value)
                applySetting("MysticismExpCastMult", value)
            end)

            AddRowNumber(modPanel, "Restoration Exp Cast Multiplier", "RestorationExpMult", 0.10)
            RegisterCallback(modPanel, "RestorationExpMult", function(value)
                applySetting("RestorationExpCastMult", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Persuasion")
            AddRowNumber(modPanel, "Exp Gain Disposition Increased", "PersuasionExpIncreased", 3.60)
            RegisterCallback(modPanel, "PersuasionExpIncreased", function(value)
                applySetting("PersuasionExpGainDispositionIncreased", value)
            end)

            AddRowNumber(modPanel, "Exp Gain Disposition Decreased", "PersuasionExpDecreased", 1.20)
            RegisterCallback(modPanel, "PersuasionExpDecreased", function(value)
                applySetting("PersuasionExpGainDispositionDecreased", value)
            end)

            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Sneak")
            AddRowNumber(modPanel, "Perk Expert Light Impact Modifier", "SneakPerkExpertLightImpactModifier", 0.80)
            RegisterCallback(modPanel, "SneakPerkExpertLightImpactModifier", function(value)
                applySetting("SneakPerkExpertLightImpactModifier", value)
            end)

            AddRowNumber(modPanel, "Transition Speed", "SneakTransitionSpeed", 6.00)
            RegisterCallback(modPanel, "SneakTransitionSpeed", function(value)
                applySetting("SneakTransitionSpeed", value)
            end)

            AddRowNumber(modPanel, "Noticed Min", "SneakNoticedMin", -20.00)
            RegisterCallback(modPanel, "SneakNoticedMin", function(value)
                applySetting("SneakNoticedMin", value)
            end)

            AddRowNumber(modPanel, "Seen Min", "SneakSeenMin", 0.00)
            RegisterCallback(modPanel, "SneakSeenMin", function(value)
                applySetting("SneakSeenMin", value)
            end)

            AddRowNumber(modPanel, "Unseen Min", "SneakUnseenMin", 0.00)
            RegisterCallback(modPanel, "SneakUnseenMin", function(value)
                applySetting("SneakUnseenMin", value)
            end)

            AddRowNumber(modPanel, "Lost Min", "SneakLostMin", -20.00)
            RegisterCallback(modPanel, "SneakLostMin", function(value)
                applySetting("SneakLostMin", value)
            end)

            AddRowNumber(modPanel, "Minimal Detection Value", "MinimalDetectionValue", -20.00)
            RegisterCallback(modPanel, "MinimalDetectionValue", function(value)
                applySetting("MinimalDetectionValue", value)
            end)

            AddRowNumber(modPanel, "Detection Night Eye Bonus", "DetectionNightEyeBonus", 3.00)
            RegisterCallback(modPanel, "DetectionNightEyeBonus", function(value)
                applySetting("DetectionNightEyeBonus", value)
            end)

            AddRowNumber(modPanel, "Max Distance", "SneakMaxDistance", 1500.00)
            RegisterCallback(modPanel, "SneakMaxDistance", function(value)
                applySetting("SneakMaxDistance", value)
            end)

            AddRowNumber(modPanel, "Exterior Distance Mult", "SneakExteriorDistanceMult", 1.50)
            RegisterCallback(modPanel, "SneakExteriorDistanceMult", function(value)
                applySetting("SneakExteriorDistanceMult", value)
            end)

            AddRowNumber(modPanel, "Boot Weight Base", "SneakBootWeightBase", 10.00)
            RegisterCallback(modPanel, "SneakBootWeightBase", function(value)
                applySetting("SneakBootWeightBase", value)
            end)

            AddRowNumber(modPanel, "Boot Weight Mult", "SneakBootWeightMult", 1.00)
            RegisterCallback(modPanel, "SneakBootWeightMult", function(value)
                applySetting("SneakBootWeightMult", value)
            end)

            AddRowNumber(modPanel, "Target In Combat Bonus", "SneakTargetInCombatBonus", 20.00)
            RegisterCallback(modPanel, "SneakTargetInCombatBonus", function(value)
                applySetting("SneakTargetInCombatBonus", value)
            end)

            AddRowNumber(modPanel, "Running Mult", "SneakRunningMult", 1.30)
            RegisterCallback(modPanel, "SneakRunningMult", function(value)
                applySetting("SneakRunningMult", value)
            end)

            AddRowNumber(modPanel, "Sound Los Mult", "SneakSoundLosMult", 1.00)
            RegisterCallback(modPanel, "SneakSoundLosMult", function(value)
                applySetting("SneakSoundLosMult", value)
            end)

            AddRowNumber(modPanel, "Default Non Sneaking Sound Mult", "DefaultNonSneakingSoundMult", 2.00)
            RegisterCallback(modPanel, "DefaultNonSneakingSoundMult", function(value)
                applySetting("DefaultNonSneakingSoundMult", value)
            end)

            AddRowNumber(modPanel, "Novice Sounds Mult", "NoviceSneakSoundsMult", 1.60)
            RegisterCallback(modPanel, "NoviceSneakSoundsMult", function(value)
                applySetting("NoviceSneakSoundsMult", value)
            end)

            AddRowNumber(modPanel, "Apprentice Sounds Mult", "ApprenticeSneakSoundsMult", 1.60)
            RegisterCallback(modPanel, "ApprenticeSneakSoundsMult", function(value)
                applySetting("ApprenticeSneakSoundsMult", value)
            end)

            AddRowNumber(modPanel, "Journeyman Sounds Mult", "JourneymanSneakSoundsMult", 0.80)
            RegisterCallback(modPanel, "JourneymanSneakSoundsMult", function(value)
                applySetting("JourneymanSneakSoundsMult", value)
            end)

            AddRowNumber(modPanel, "Expert Sounds Mult", "ExpertSneakSoundsMult", 0.80)
            RegisterCallback(modPanel, "ExpertSneakSoundsMult", function(value)
                applySetting("ExpertSneakSoundsMult", value)
            end)

            AddRowNumber(modPanel, "Master Sounds Mult", "MasterSneakSoundsMult", 0.80)
            RegisterCallback(modPanel, "MasterSneakSoundsMult", function(value)
                applySetting("MasterSneakSoundsMult", value)
            end)

            AddRowNumber(modPanel, "Detection Light Mod", "DetectionSneakLightMod", 15.00)
            RegisterCallback(modPanel, "DetectionSneakLightMod", function(value)
                applySetting("DetectionSneakLightMod", value)
            end)

            AddRowNumber(modPanel, "Light Mult", "SneakLightMult", 1.40)
            RegisterCallback(modPanel, "SneakLightMult", function(value)
                applySetting("SneakLightMult", value)
            end)

            AddRowNumber(modPanel, "Skill Mult", "SneakSkillMult", 0.50)
            RegisterCallback(modPanel, "SkillMult", function(value)
                applySetting("SneakSkillMult", value)
            end)

            AddRowNumber(modPanel, "Target Attack Bonus", "SneakTargetAttackBonus", 100.00)
            RegisterCallback(modPanel, "SneakTargetAttackBonus", function(value)
                applySetting("SneakTargetAttackBonus", value)
            end)

            AddRowNumber(modPanel, "Swimming Light Mult", "SneakSwimmingLightMult", 0.50)
            RegisterCallback(modPanel, "SneakSwimmingLightMult", function(value)
                applySetting("SneakSwimmingLightMult", value)
            end)

            AddRowNumber(modPanel, "Sleep Bonus", "SneakSleepBonus", -10.00)
            RegisterCallback(modPanel, "SneakSleepBonus", function(value)
                applySetting("SneakSleepBonus", value)
            end)

            AddRowNumber(modPanel, "Base Value", "SneakBaseValue", -25.00)
            RegisterCallback(modPanel, "SneakBaseValue", function(value)
                applySetting("SneakBaseValue", value)
            end)

            --------------------------------------------------------------------------------
            -- Equipment
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Equipment")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Broken Weapon Damage Multiplier", "BrokenWeaponDamageMult", 0.50)
            RegisterCallback(modPanel, "BrokenWeaponDamageMult", function(value)
                applySetting("BrokenWeaponDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Default Weapon Damage Multiplier", "DefaultWeaponDamageMult", 1.00)
            RegisterCallback(modPanel, "DefaultWeaponDamageMult", function(value)
                applySetting("DefaultWeaponDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Improved Weapon Damage Multiplier", "ImprovedWeaponDamageMult", 1.12)
            RegisterCallback(modPanel, "ImprovedWeaponDamageMult", function(value)
                applySetting("ImprovedWeaponDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Broken Armor Efficiency Multiplier", "BrokenArmorEfficiencyMult", 0.25)
            RegisterCallback(modPanel, "BrokenArmorEfficiencyMult", function(value)
                applySetting("BrokenArmorEfficiencyMultiplier", value)
            end)

            AddRowNumber(modPanel, "Default Armor Efficiency Multiplier", "DefaultArmorEfficiencyMult", 1.00)
            RegisterCallback(modPanel, "DefaultArmorEfficiencyMult", function(value)
                applySetting("DefaultArmorEfficiencyMultiplier", value)
            end)

            AddRowNumber(modPanel, "Improved Armor Efficiency Multiplier", "ImprovedArmorEfficiencyMult", 1.25)
            RegisterCallback(modPanel, "ImprovedArmorEfficiencyMult", function(value)
                applySetting("ImprovedArmorEfficiencyMultiplier", value)
            end)

            AddRowNumber(modPanel, "Base Weapon Damage Multiplier", "BaseWeaponDamageMultiplier", 0.50)
            RegisterCallback(modPanel, "BaseWeaponDamageMultiplier", function(value)
                applySetting("BaseWeaponDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Attribute Damage Multiplier", "AttributeDamageMultiplier", 0.00)
            RegisterCallback(modPanel, "AttributeDamageMultiplier", function(value)
                applySetting("AttributeDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Minimum Attribute Damage", "MinimumAttributeDamage", 0.75)
            RegisterCallback(modPanel, "MinimumAttributeDamage", function(value)
                applySetting("MinimumAttributeDamage", value)
            end)

            AddRowNumber(modPanel, "Skill Damage Multiplier", "SkillDamageMultiplier", 0.01)
            RegisterCallback(modPanel, "SkillDamageMultiplier", function(value)
                applySetting("SkillDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Minimum Skill Damage", "MinimumSkillDamage", 0.20)
            RegisterCallback(modPanel, "MinimumSkillDamage", function(value)
                applySetting("MinimumSkillDamage", value)
            end)

            AddRowNumber(modPanel, "Minimum Hand to Hand Block Value", "MinimumHandToHandBlockValue", 0.20)
            RegisterCallback(modPanel, "MinimumHandToHandBlockValue", function(value)
                applySetting("MinimumHandToHandBlockValue", value)
            end)

            AddRowNumber(modPanel, "Minimum Weapon Block Value", "MinimumWeaponBlockValue", 0.40)
            RegisterCallback(modPanel, "MinimumWeaponBlockValue", function(value)
                applySetting("MinimumWeaponBlockValue", value)
            end)

            AddRowNumber(modPanel, "Minimum Shield Block Value", "MinimumShieldBlockValue", 0.60)
            RegisterCallback(modPanel, "MinimumShieldBlockValue", function(value)
                applySetting("MinimumShieldBlockValue", value)
            end)

            --------------------------------------------------------------------------------
            -- Creature Settings
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Creature Settings")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Creature Health Scaling Multiplier", "CreatureHealthScalingMult", 0.40)
            RegisterCallback(modPanel, "CreatureHealthScalingMult", function(value)
                applySetting("CreatureHealthScalingMultiplier", value)
            end)

            AddRowNumber(modPanel, "Creature Damage Scaling Multiplier", "CreatureDamageScalingMult", 0.15)
            RegisterCallback(modPanel, "CreatureDamageScalingMult", function(value)
                applySetting("CreatureDamageScalingMultiplier", value)
            end)

            AddRowNumber(modPanel, "Creature Fatigue Scaling Multiplier", "CreatureFatigueScalingMult", 0.15)
            RegisterCallback(modPanel, "CreatureFatigueScalingMult", function(value)
                applySetting("CreatureFatigueScalingMultiplier", value)
            end)

            AddRowNumber(modPanel, "Creature Weapon Damage Multiplier", "CreatureWeaponDamageMult", 1.00)
            RegisterCallback(modPanel, "CreatureWeaponDamageMult", function(value)
                applySetting("CreatureWeaponDamageMultiplier", value)
            end)

            AddRowNumber(modPanel, "Enter Low Fatigue Threshold", "EnterLowFatigueThreshold", 0.20)
            RegisterCallback(modPanel, "EnterLowFatigueThreshold", function(value)
                applySetting("EnterLowFatigueThreshold", value)
            end)

            AddRowNumber(modPanel, "Exit Low Fatigue Threshold", "ExitLowFatigueThreshold", 0.25)
            RegisterCallback(modPanel, "ExitLowFatigueThreshold", function(value)
                applySetting("ExitLowFatigueThreshold", value)
            end)

            --------------------------------------------------------------------------------
            -- Regeneration
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Regeneration")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Health Regen Base", "HealthRegenBase", 0.16)
            RegisterCallback(modPanel, "HealthRegenBase", function(value)
                applySetting("HealthRegenBase", value)
            end)

            AddRowNumber(modPanel, "Health Regen Endurance Multiplier", "HealthRegenEnduranceMult", 0.34)
            RegisterCallback(modPanel, "HealthRegenEnduranceMult", function(value)
                applySetting("HealthRegenEnduranceMult", value)
            end)

            AddRowNumber(modPanel, "Fatigue Regen Base", "FatigueRegenBase", 12.00)
            RegisterCallback(modPanel, "FatigueRegenBase", function(value)
                applySetting("FatigueRegenBase", value)
            end)

            AddRowNumber(modPanel, "Fatigue Regen Agility Multiplier", "FatigueRegenAgilityMult", 8.00)
            RegisterCallback(modPanel, "FatigueRegenAgilityMult", function(value)
                applySetting("FatigueRegenAgilityMult", value)
            end)

            AddRowNumber(modPanel, "Health Regen Delay", "HealthRegenDelay", 6.00)
            RegisterCallback(modPanel, "HealthRegenDelay", function(value)
                applySetting("HealthRegenDelay", value)
            end)

            AddRowNumber(modPanel, "Magicka Regen Delay", "MagickaRegenDelay", 2.00)
            RegisterCallback(modPanel, "MagickaRegenDelay", function(value)
                applySetting("MagickaRegenDelay", value)
            end)

            AddRowNumber(modPanel, "Fatigue Regen Delay", "FatigueRegenDelay", 2.00)
            RegisterCallback(modPanel, "FatigueRegenDelay", function(value)
                applySetting("FatigueRegenDelay", value)
            end)

            AddRowNumber(modPanel, "Health Regen Outside Combat Multiplier", "HealthRegenOutsideCombatMult", 7.50)
            RegisterCallback(modPanel, "HealthRegenOutsideCombatMult", function(value)
                applySetting("HealthRegenOutsideCombatMult", value)
            end)

            AddRowNumber(modPanel, "Magicka Regen Outside Combat Multiplier", "MagickaRegenOutsideCombatMult", 2.00)
            RegisterCallback(modPanel, "MagickaRegenOutsideCombatMult", function(value)
                applySetting("MagickaRegenOutsideCombatMult", value)
            end)

            AddRowNumber(modPanel, "Fatigue Regen Outside Combat Multiplier", "FatigueRegenOutsideCombatMult", 1.50)
            RegisterCallback(modPanel, "FatigueRegenOutsideCombatMult", function(value)
                applySetting("FatigueRegenOutsideCombatMult", value)
            end)

            AddRowNumber(modPanel, "Player Health Regen Multiplier", "PlayerHealthRegenMult", 1.00)
            RegisterCallback(modPanel, "PlayerHealthRegenMult", function(value)
                applySetting("PlayerHealthRegenMult", value)
            end)

            AddRowNumber(modPanel, "NPC Health Regen Multiplier", "NPCHealthRegenMult", 0.00)
            RegisterCallback(modPanel, "NPCHealthRegenMult", function(value)
                applySetting("NPCHealthRegenMult", value)
            end)

            --------------------------------------------------------------------------------
            -- Animation & Poses
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Animation & Poses")
            AddRowSeparator(modPanel)

            AddRowBoolSwitch(modPanel, "Are Dead Default Poses Enabled", "DeadDefaultPosesEnabled", true)
            RegisterCallback(modPanel, "DeadDefaultPosesEnabled", function(value)
                applySetting("bAreDeadDefaultPosesEnabled", value)
            end)

            AddRowNumber(modPanel, "Aim Slowdown Raycast Check Delay", "AimSlowdownRaycastDelay", 0.04)
            RegisterCallback(modPanel, "AimSlowdownRaycastDelay", function(value)
                applySetting("AimSlowdownRaycastCheckDelay", value)
            end)

            AddRowNumber(modPanel, "Kill Z Offset", "KillZOffset", 2500.00)
            RegisterCallback(modPanel, "KillZOffset", function(value)
                applySetting("KillZOffset", value)
            end)

            AddRowNumber(modPanel, "Camera Shake Check Delay", "CameraShakeCheckDelay", 0.10)
            RegisterCallback(modPanel, "CameraShakeCheckDelay", function(value)
                applySetting("CameraShakeCheckDelay", value)
            end)

            --------------------------------------------------------------------------------
            -- Fast Travel
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Fast Travel")
            AddRowSeparator(modPanel)

            AddRowBoolSwitch(modPanel, "Enable Fast Transition", "EnableFastTransition", false)
            RegisterCallback(modPanel, "EnableFastTransition", function(value)
                applySetting("bIsFastTransitionEnabled", value)
            end)

            AddRowBoolSwitch(modPanel, "Enable Fast Transition Injected Worlds", "FastTransitionInjectedWorlds", false)
            RegisterCallback(modPanel, "FastTransitionInjectedWorlds", function(value)
                applySetting("bEnableFastTransitionInjectedWorlds", value)
            end)

            AddRowBoolSwitch(modPanel, "Enable Fast Transition Parent Non World Partition", "FastTransitionParentNonPartition", false)
            RegisterCallback(modPanel, "EnableFastTransitionParentNonWorldPartition", function(value)
                applySetting("bEnableFastTransitionParentNonWorldPartition", value)
            end)

            AddRowBoolSwitch(modPanel, "Enable Fast Transition Preload Houses", "FastTransitionPreloadHouses", false)
            RegisterCallback(modPanel, "FastTransitionPreloadHouses", function(value)
                applySetting("bEnableFastTransitionPreLoadHouses", value)
            end)

            AddRowNumber(modPanel, "Max Fast Transition Unload Cache Size", "FastTransitionCacheSize", 3, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "FastTransitionCacheSize", function(value)
                applySetting("MaxFastTransitionUnloadCacheSize", value)
            end)

            --------------------------------------------------------------------------------
            -- Threat System
            --------------------------------------------------------------------------------
            AddRowSeparator(modPanel)
            AddRowSectionHeader(modPanel, "Threat System")
            AddRowSeparator(modPanel)

            AddRowNumber(modPanel, "Low Threat Level Offset", "LowThreatOffset", -3, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "LowThreatOffset", function(value)
                applySetting("LowThreatLevelOffset", value)
            end)

            AddRowNumber(modPanel, "Medium Threat Level Offset", "MediumThreatOffset", 0, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "MediumThreatOffset", function(value)
                applySetting("MediumThreatLevelOffset", value)
            end)

            AddRowNumber(modPanel, "High Threat Level Offset", "HighThreatOffset", 3, nil, nil, nil, nil, 0)
            RegisterCallback(modPanel, "HighThreatOffset", function(value)
                applySetting("HighThreatLevelOffset", value)
            end)

            print("[InitialSettings] Loading parameters.")
            LoadParameters(modPanel)

            print("[InitialSettings] Panel setup complete and parameters loaded.")

        end) -- End RegisterMod callback
    end -- End if SettingsCDO check
end -- End if SettingsClass check 