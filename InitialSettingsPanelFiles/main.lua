-- Require the ConfigPanelHelpers library
require("KwaHelpers.ConfigPanelHelpers")

-- Find the UVOblivionInitialSettings class outside the mod registration callback
local SettingsClass = StaticFindObject("/Script/UE5AltarPairing.VOblivionInitialSettings")

if not SettingsClass then
    print("[InitialSettingsPanel] Failed to find the UVOblivionInitialSettings class. Configuration panel will not control settings.")
    -- We can still proceed with panel registration even if the class isn't found,
    -- but the settings won't be controllable via the panel.
else
    -- Get the Class Default Object (CDO)
    local SettingsCDO = SettingsClass:GetCDO()

    if not SettingsCDO or not SettingsCDO:IsValid() then
        print("[InitialSettingsPanel] Failed to get a valid Settings CDO. Configuration panel will not control settings.")
        -- Continue to register panel, but without settings control.
    else
        print("[InitialSettingsPanel] Successfully found Settings class and CDO.")

        local function decamelCase(str)
            if not str or type(str) ~= 'string' then
                return ""
            end
            local result = ""
            local prevLower = false
            for i = 1, #str do
                local char = str:sub(i, i)
                local isUpper = char:upper() == char and char:lower() ~= char
                local isLower = char:lower() == char and char:upper() ~= char

                if i > 1 and isUpper and prevLower then
                    result = result .. " "
                end
                result = result .. char
                prevLower = isLower
            end
            -- Handle leading 'b' for boolean properties
            if result:sub(1, 1):lower() == 'b' and #result > 1 and result:sub(2, 2):upper() == result:sub(2, 2) then
                result = result:sub(2)
                result = result:sub(1,1):upper() .. result:sub(2)
            end
             -- Capitalize the first letter if it's lowercase after processing
            if #result > 0 and result:sub(1, 1):lower() == result:sub(1, 1) then
                result = result:sub(1, 1):upper() .. result:sub(2)
            end
            return result
        end

        -- Helper function to retrieve settings instance and apply a property
        local function applySetting(propertyName, value)
            local settingsInstance = SettingsCDO.GetOblivionInitialSettings()
            if settingsInstance and settingsInstance:IsValid() then
                -- Optional: Print confirmation
                print(string.format("[InitialSettingsPanel] Applying %s = %s", propertyName, tostring(value)))
                settingsInstance[propertyName] = value
            else
                print("[InitialSettingsPanel] Failed to get a valid settings instance in applySetting for " .. propertyName .. ".\n")
            end
        end

        -- Define settings data in tables grouped by section and type
        local settingsData = {
            ["Misc"] = {
                settings = {
                    { type = "bool", settingProperty = "bIsGodMode", defaultValue = false },
                    { type = "bool", settingProperty = "bIsUsingPrePlacedDatatable", defaultValue = true },
                    { type = "bool", settingProperty = "bIsSavingPrePlacedDatatable", defaultValue = false },
                    { type = "bool", settingProperty = "bIsEnvironmentLuminanceValuePairedFromOblivion", defaultValue = true },
                    { type = "float", settingProperty = "EnvironmentLuminanceValueUpdateFrequency", defaultValue = 2.00 },
                    { type = "name", settingProperty = "MainWorldLevelName", defaultValue = "Tamriel", hintText = "Enter Level Name" },
                    { type = "string", settingProperty = "AltarVSMapPath", defaultValue = "/Game/Maps/VerticalSlice/", hintText = "Enter Map Path" },
                    { type = "bool", settingProperty = "bIsEnsurePairingEntryValidityEnabledForOblivionSendHandler", defaultValue = true },
                    { type = "bool", settingProperty = "bShouldCameraTrackTarget", defaultValue = true },
                    { type = "bool", settingProperty = "bIsFastTransitionEnabled", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionInjectedWorlds", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionParentNonWorldPartition", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionPreLoadHouses", defaultValue = false },
                    { type = "int", settingProperty = "MaxFastTransitionUnloadCacheSize", defaultValue = 3 },
                },
            },
            ["Preloading"] = {
                settings = {
                    { type = "bool", settingProperty = "bEnablePreloadingOfInventoryItems", defaultValue = true },
                    { type = "bool", settingProperty = "bEnablePreloadingOfPickableItems", defaultValue = true },
                    { type = "bool", settingProperty = "bEnablePreloadingOfNPCsOutOfPlayerWorldSpace", defaultValue = false },
                    { type = "float", settingProperty = "EarlyNPCPreloadingDistanceMax", defaultValue = 300.00 },
                },
            },
            ["Physics"] = {
                settings = {
                    { type = "bool", settingProperty = "bAreHavokColliderInstancesAllowed", defaultValue = false },
                    { type = "bool", settingProperty = "bUseOblivionLikeWalkingPhysics", defaultValue = true },
                    { type = "bool", settingProperty = "bDefaultUseFakeRootLocationInterpolation", defaultValue = false },
                    { type = "bool", settingProperty = "bDefaultInterpolateFakeRootForHumanoids", defaultValue = true },
                    { type = "bool", settingProperty = "bDefaultInterpolateFakeRootForCreatures", defaultValue = true },
                    { type = "bool", settingProperty = "bDefaultInterpolateFakeRootOnlyZAxis", defaultValue = true },
                    { type = "bool", settingProperty = "bDefaultUseFlatBaseForFloorChecks", defaultValue = false },
                    { type = "bool", settingProperty = "bDefaultCapUpwardVelocityAtMaxSlopeAngle", defaultValue = true },
                    { type = "bool", settingProperty = "bDefaultPreventJumpOnStiffSlopes", defaultValue = true },
                    { type = "float", settingProperty = "DefaultLinearDampingValue", defaultValue = 2.00 },
                    { type = "float", settingProperty = "DefaultAngularDampingValue", defaultValue = 2.00 },
                    { type = "float", settingProperty = "OverlappingCollisionPenetrationThreshold", defaultValue = 5.00 },
                    { type = "float", settingProperty = "PairedPawnPushForceFactor", defaultValue = 10000.00 },
                    { type = "float", settingProperty = "PairedPawnInitialPushForceFactor", defaultValue = 1000.00 },
                    { type = "float", settingProperty = "PawnPhysicsBodyColliderHeightOffset", defaultValue = 25.00 },
                    { type = "float", settingProperty = "PawnPhysicsBodyColliderRadiusMargin", defaultValue = 5.00 },
                    { type = "float", settingProperty = "DefaultMaxFakeRootDistanceFromCapsule", defaultValue = 100.00 },
                    { type = "float", settingProperty = "DefaultTimeToRejoinRootWhenStoppingFakeRootInterp", defaultValue = 0.35 },
                    { type = "float", settingProperty = "DefaultMaxSlopeAngleForFloorsNotEligibleForAntiClimbing", defaultValue = 70.00 },
                    { type = "float", settingProperty = "DefaultMinSlopeAntiClimbingActivationAngle", defaultValue = 0.00 },
                    { type = "float", settingProperty = "DefaultMaxSlopeAntiClimbingActivationAngle", defaultValue = 60.00 },
                    { type = "float", settingProperty = "DefaultSlopeAngleThresholdToUseDirectionalAntiClimbing", defaultValue = 60.00 },
                    { type = "float", settingProperty = "DefaultMaxSlopeAngleBeforeSlide", defaultValue = 85.00 },
                    { type = "float", settingProperty = "DefaultMinJumpOffSlopeAngle", defaultValue = 65.00 },
                    { type = "float", settingProperty = "DefaultMinJumpOffSlopeVelocity", defaultValue = 200.00 },
                    { type = "float", settingProperty = "DefaultMinAntiClimbingFactor", defaultValue = 0.00 },
                    { type = "float", settingProperty = "DefaultMaxAntiClimbingFactor", defaultValue = 1.00 },
                    { type = "float", settingProperty = "DefaultMinVelocitySmoothingSpeed", defaultValue = 2000.00 },
                    { type = "float", settingProperty = "DefaultMaxVelocitySmoothingSpeed", defaultValue = 6000.00 },
                    { type = "float", settingProperty = "DefaultPreventJumpMinSlopeAngle", defaultValue = 60.00 },
                },
            },
            ["Physics: Fall Damage"] = {
                settings = {
                    { type = "float", settingProperty = "FallTimeMin", defaultValue = 0.20 },
                    { type = "float", settingProperty = "FallVelocityMin", defaultValue = 800.00 },
                    { type = "float", settingProperty = "FallTimeBase", defaultValue = 0.00 },
                    { type = "float", settingProperty = "FallTimeMult", defaultValue = 50.00 },
                    { type = "float", settingProperty = "FallDamageBase", defaultValue = 1.80 },
                    { type = "float", settingProperty = "FallDamageMult", defaultValue = -0.45 },
                    { type = "float", settingProperty = "FallRiderDamageMult", defaultValue = 0.00 },
                },
            },
            ["Combat"] = {
                settings = {
                    { type = "bool", settingProperty = "bEnablePlayerCombatHitTraceDebugDraw", defaultValue = false },
                    { type = "bool", settingProperty = "bDebugDisplayPushbackOnScreen", defaultValue = false },
                    { type = "float", settingProperty = "CombatHitConeAngle", defaultValue = 20.00 },
                    { type = "float", settingProperty = "DurationBeforeAttackFollowThrough", defaultValue = 5.00 },
                    { type = "float", settingProperty = "PlayerCombatHitTraceSphereRadius", defaultValue = 20.00 },
                    { type = "float", settingProperty = "PlayerCombatHitTraceDebugDrawDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "TimeBetweenTwoWarningBorderRegion", defaultValue = 5.00 },
                    { type = "float", settingProperty = "PushbackForceMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PushbackForceMultiplierForPlayer", defaultValue = 0.75 },
                    { type = "float", settingProperty = "PushbackDuration", defaultValue = 0.30 },
                    { type = "float", settingProperty = "PushbackCooldown", defaultValue = 0.20 },
                    { type = "float", settingProperty = "PushbackPriority", defaultValue = 1.00 },
                    { type = "float", settingProperty = "DebugOverridePushbackForce", defaultValue = -1.00 },
                    { type = "float", settingProperty = "CombatAIHoldTimeMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "ProjectileCollisionForce", defaultValue = 100.00 },
                    { type = "float", settingProperty = "TargetReachHeightTolerance", defaultValue = 50.00 },
                    { type = "float", settingProperty = "ResurrectStateDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "RecoilMoveMultiplier", defaultValue = 0.50 },
                    { type = "float", settingProperty = "StaggerFatigueRestoration", defaultValue = 0.40 },
                    { type = "float", settingProperty = "KnockdownMinimalDuration", defaultValue = 2.00 },
                    { type = "float", settingProperty = "KnockdownFatigueRestoration", defaultValue = 0.60 },
                    { type = "float", settingProperty = "KnockdownHorizontalImpactForceMultiplier", defaultValue = 5.00 },
                    { type = "float", settingProperty = "KnockdownVerticalImpactForceMultiplier", defaultValue = 5.00 },
                    { type = "float", settingProperty = "CombatRagdollLinearDampingIncrease", defaultValue = 1.00 },
                    { type = "float", settingProperty = "CombatRagdollAngularDampingIncrease", defaultValue = 1.00 },
                    { type = "float", settingProperty = "CombatRagdollMaxLinearDamping", defaultValue = 500.00 },
                    { type = "float", settingProperty = "CombatRagdollMaxAngularDamping", defaultValue = 500.00 },
                    { type = "float", settingProperty = "RagdollDurationAfterParalysis", defaultValue = 0.75 },
                    { type = "float", settingProperty = "CombatDeathForceMultiplier", defaultValue = 400.00 },
                    { type = "float", settingProperty = "OblivionToAltarKnockdownForceMultiplier", defaultValue = 15.00 },
                },
            },
            ["Movement"] = {
                settings = {
                    { type = "float", settingProperty = "DefaultMoveRunMult", defaultValue = 3.00 },
                    { type = "float", settingProperty = "DefaultMoveRunAthleticsMult", defaultValue = 0.75 },
                    { type = "float", settingProperty = "DefaultMoveSwimRunAthleticsMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "DefaultMoveSwimRunBase", defaultValue = 0.50 },
                    { type = "float", settingProperty = "DefaultMoveSwimWalkAthleticsMult", defaultValue = 0.02 },
                    { type = "float", settingProperty = "DefaultMoveSwimWalkBase", defaultValue = 0.50 },
                    { type = "float", settingProperty = "DefaultStrengthEncumbranceMult", defaultValue = 5.00 },
                    { type = "float", settingProperty = "DefaultMoveWeightMax", defaultValue = 150.00 },
                    { type = "float", settingProperty = "DefaultMoveWeightMin", defaultValue = 0.00 },
                    { type = "float", settingProperty = "DefaultMoveSprintBaseMult", defaultValue = 4.00 },
                    { type = "float", settingProperty = "DefaultMoveSprintAthleticsMult", defaultValue = 0.45 },
                    { type = "float", settingProperty = "DefaultMoveCharWalkMax", defaultValue = 130.00 },
                    { type = "float", settingProperty = "DefaultMoveCharWalkMin", defaultValue = 90.00 },
                    { type = "float", settingProperty = "DefaultMoveCreatureWalkMax", defaultValue = 300.00 },
                    { type = "float", settingProperty = "DefaultMoveCreatureWalkMin", defaultValue = 5.00 },
                    { type = "float", settingProperty = "DefaultMoveEncumEffectNoWea", defaultValue = 0.30 },
                    { type = "float", settingProperty = "DefaultMoveEncumEffect", defaultValue = 0.40 },
                    { type = "float", settingProperty = "DefaultMoveNoWeaponMult", defaultValue = 1.10 },
                    { type = "float", settingProperty = "DefaultMoveSneakMult", defaultValue = 0.80 },
                    { type = "float", settingProperty = "DefaultMoveSneakRunMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "DefaultMoveMaxFlySpeed", defaultValue = 300.00 },
                    { type = "float", settingProperty = "DefaultMoveMinFlySpeed", defaultValue = 5.00 },
                    { type = "float", settingProperty = "OverEncumbranceSpeed", defaultValue = 90.00 },
                    { type = "float", settingProperty = "AirControlModifier", defaultValue = 0.03 },
                    { type = "float", settingProperty = "StepHeight", defaultValue = 44.30 },
                    { type = "float", settingProperty = "MaxSlope", defaultValue = 47.00 },
                    { type = "float", settingProperty = "DefaultMoveSprintFatigueBaseCostPerSec", defaultValue = 9.00 },
                    { type = "float", settingProperty = "DefaultMoveSprintFatigueRegenDelay", defaultValue = 3.00 },
                },
            },
            ["Horse Movement"] = {
                settings = {
                    { type = "bool", settingProperty = "bHorseDefaultCapUpwardVelocityAtMaxSlopeAngle", defaultValue = true },
                    { type = "bool", settingProperty = "bHorseDefaultPreventJumpOnStiffSlopes", defaultValue = true },
                    { type = "float", settingProperty = "HorseDefaultMaxSlopeAngleForFloorsNotEligibleForAntiClimbing", defaultValue = 70.00 },
                    { type = "float", settingProperty = "HorseDefaultMinSlopeAntiClimbingActivationAngle", defaultValue = 0.00 },
                    { type = "float", settingProperty = "HorseDefaultMaxSlopeAntiClimbingActivationAngle", defaultValue = 60.00 },
                    { type = "float", settingProperty = "HorseDefaultSlopeAngleThresholdToUseDirectionalAntiClimbing", defaultValue = 60.00 },
                    { type = "float", settingProperty = "HorseDefaultMaxSlopeAngleBeforeSlide", defaultValue = 85.00 },
                    { type = "float", settingProperty = "HorseDefaultMinJumpOffSlopeAngle", defaultValue = 65.00 },
                    { type = "float", settingProperty = "HorseDefaultMinJumpOffSlopeVelocity", defaultValue = 200.00 },
                    { type = "float", settingProperty = "HorseDefaultMinAntiClimbingFactor", defaultValue = 0.00 },
                    { type = "float", settingProperty = "HorseDefaultMaxAntiClimbingFactor", defaultValue = 1.00 },
                    { type = "float", settingProperty = "HorseDefaultMinVelocitySmoothingSpeed", defaultValue = 500.00 },
                    { type = "float", settingProperty = "HorseDefaultMaxVelocitySmoothingSpeed", defaultValue = 2000.00 },
                    { type = "float", settingProperty = "HorseDefaultPreventJumpMinSlopeAngle", defaultValue = 60.00 },
                },
            },
            ["Teleportation"] = {
                settings = {
                    { type = "float", settingProperty = "KillZTeleportCustomResearchDist", defaultValue = 100.00 },
                    { type = "float", settingProperty = "TeleportHeightIfStuckInGround", defaultValue = 50.00 },
                    { type = "int", settingProperty = "TeleportMaxIterationCount", defaultValue = 150 },
                },
            },
            ["UI & Effects"] = {
                settings = {
                    { type = "bool", settingProperty = "bDoesOblivionDrawCapsuleColliders", defaultValue = false },
                    { type = "bool", settingProperty = "bDoesOblivionDrawGrabDebugDisplay", defaultValue = false },
                    { type = "bool", settingProperty = "bDoesOblivionShowPlayerDetectionLighting", defaultValue = false },
                    { type = "bool", settingProperty = "bDoesOblivionOutputSaveGameFileDebugInfoOnSaving", defaultValue = false },
                    { type = "bool", settingProperty = "bDoesOblivionOutputSaveGameFileDebugInfoOnLoading", defaultValue = false },
                    { type = "bool", settingProperty = "bIsEnsurePairingEntryValidityEnabledForOblivionSendHandler", defaultValue = true },
                    { type = "bool", settingProperty = "bShouldCameraTrackTarget", defaultValue = true },
                    { type = "bool", settingProperty = "bIsFastTransitionEnabled", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionInjectedWorlds", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionParentNonWorldPartition", defaultValue = false },
                    { type = "bool", settingProperty = "bEnableFastTransitionPreLoadHouses", defaultValue = false },
                    { type = "bool", settingProperty = "bAreDeadDefaultPosesEnabled", defaultValue = true },
                    { type = "bool", settingProperty = "bShouldSaveDatatableDeadDefaultPose", defaultValue = false },
                    { type = "float", settingProperty = "IdleMinDuration", defaultValue = 0.10 },
                    { type = "float", settingProperty = "DrawWeaponDuration", defaultValue = 0.20 },
                    { type = "float", settingProperty = "PreparePowerAttackDuration", defaultValue = 0.37 },
                    { type = "float", settingProperty = "ArrowLifeDuration", defaultValue = 90.00 },
                    { type = "float", settingProperty = "MinPawnProjectilePenetrationDepth", defaultValue = 15.00 },
                    { type = "float", settingProperty = "MaxPawnProjectilePenetrationDepth", defaultValue = 30.00 },
                    { type = "float", settingProperty = "MinPawnProjectileVelocityThreshold", defaultValue = 500.00 },
                    { type = "float", settingProperty = "MaxPawnProjectileVelocityThreshold", defaultValue = 1000.00 },
                    { type = "int", settingProperty = "ArrowInventoryChancePercentOnTargetHit", defaultValue = 100 },
                    { type = "float", settingProperty = "ArrowFadeDuration", defaultValue = 0.00 },
                    { type = "float", settingProperty = "SpellCastingDuration", defaultValue = 1.40 },
                    { type = "float", settingProperty = "FogProjectileLifeDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "ClairvoyanceRefreshDelay", defaultValue = 31.00 },
                    { type = "float", settingProperty = "TelekinesisThrowForce", defaultValue = 1000.00 },
                    { type = "int", settingProperty = "BarBlinkAnimLoopNum", defaultValue = 3 },
                    { type = "float", settingProperty = "BarBlinkAnimSpeed", defaultValue = 1.40 },
                    { type = "float", settingProperty = "HealthBarBlinkProgressThreshold", defaultValue = 0.35 },
                    { type = "float", settingProperty = "BreathBarBlinkProgressThreshold", defaultValue = 0.40 },
                    { type = "float", settingProperty = "BloodDropEmergeSpeed", defaultValue = 4.50 },
                    { type = "float", settingProperty = "BloodDropStayDuration", defaultValue = 0.80 },
                    { type = "float", settingProperty = "BloodDropFadeOutSpeed", defaultValue = 3.30 },
                    { type = "float", settingProperty = "MinDamagePercentForBloodDropAppearance", defaultValue = 0.01 },
                    { type = "float", settingProperty = "MaxDamagePercentForBloodDropVisualEnhancement", defaultValue = 0.80 },
                    { type = "float", settingProperty = "MinBloodDropScaleFactor", defaultValue = 0.40 },
                    { type = "float", settingProperty = "FullProgressReductionDuration", defaultValue = 1.30 },
                    { type = "float", settingProperty = "WaitToStartReductionAnimDuration", defaultValue = 1.00 },
                    { type = "float", settingProperty = "BowHoldMinimumCompletion", defaultValue = 0.20 },
                    { type = "float", settingProperty = "BowHoldCompletionPerSecond", defaultValue = 0.80 },
                    { type = "float", settingProperty = "ArrowWeakSpeedMultiplier", defaultValue = 0.00 },
                    { type = "float", settingProperty = "ArrowInitialSpeedMultiplier", defaultValue = 5000.00 },
                    { type = "float", settingProperty = "MagicProjectileSpeedMultiplier", defaultValue = 1950.00 },
                    { type = "float", settingProperty = "FirstPersonArmsHeight", defaultValue = 45.00 },
                    { type = "float", settingProperty = "ImmersionDepthToLockArmsRotation", defaultValue = 0.85 },
                    { type = "float", settingProperty = "ArmsVisibilityUpward", defaultValue = 75.00 },
                    { type = "float", settingProperty = "ArmsVisibilityDownward", defaultValue = -79.00 },
                    { type = "float", settingProperty = "ArmsSpeedAfterAttack", defaultValue = 0.00 },
                    { type = "float", settingProperty = "ArmsSpeedAfterLookUpInSwim", defaultValue = 0.10 },
                    { type = "float", settingProperty = "FocusWhenDialogue", defaultValue = 75.00 },
                    { type = "float", settingProperty = "SpeedWhenStartTargetingInDialogue", defaultValue = 2.00 },
                    { type = "float", settingProperty = "PersuasionPercentageReductionFOV", defaultValue = 0.25 },
                    { type = "float", settingProperty = "InputTagBufferingDefaultTime", defaultValue = 0.30 },
                    { type = "int", settingProperty = "MaxFastTransitionUnloadCacheSize", defaultValue = 3 },
                    { type = "float", settingProperty = "AimSlowdownRaycastCheckDelay", defaultValue = 0.04 },
                    { type = "float", settingProperty = "KillZOffset", defaultValue = 2500.00 },
                    { type = "float", settingProperty = "CameraShakeCheckDelay", defaultValue = 0.10 },
                },
            },
            ["Experience Rates"] = {
                settings = {
                    { type = "float", settingProperty = "SkillLevelUpGrantedXPExponent", defaultValue = 1.50 },
                    { type = "float", settingProperty = "PlayerLevelUpBaseLevelXP", defaultValue = 1940.00 },
                    { type = "float", settingProperty = "PlayerLevelUpXPFactor", defaultValue = 60.00 },
                    { type = "float", settingProperty = "PlayerLevelUpXPExponent", defaultValue = 1.75 },
                    { type = "float", settingProperty = "AthleticsExpRunning", defaultValue = 0.05 },
                    { type = "float", settingProperty = "AthleticsExpSwimming", defaultValue = 0.08 },
                    { type = "float", settingProperty = "AthleticsExpSprinting", defaultValue = 0.05 },
                    { type = "float", settingProperty = "MercantileExpTransactionMult", defaultValue = 0.03 },
                    { type = "float", settingProperty = "AlterationExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "ConjurationExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "DestructionExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "IllusionExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "MysticismExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "RestorationExpCastMult", defaultValue = 0.10 },
                },
            },
            ["Leveling & Character Stats"] = {
                settings = {
                    { type = "bool", settingProperty = "bDoesOblivionShowPlayerLeveling", defaultValue = false },
                    { type = "float", settingProperty = "NewFormulaMagickaReturnLinearMult", defaultValue = 0.01 },
                    { type = "float", settingProperty = "NewFormulaMagickaReturnQuadraticMult", defaultValue = 0.00 },
                    { type = "float", settingProperty = "PCHealthNewFormulaLevelEnduranceMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "PCHealthNewFormulaEnduranceMult", defaultValue = 0.67 },
                    { type = "float", settingProperty = "PCHealthNewFormulaStrengthMult", defaultValue = 0.33 },
                    { type = "int", settingProperty = "NewFormulaFatigueMult", defaultValue = 4 },
                    { type = "float", settingProperty = "NewFormulaWillpowerMult", defaultValue = 0.67 },
                    { type = "float", settingProperty = "NewFormulaAgilityMult", defaultValue = 0.33 },
                },
            },
            ["Acrobatics"] = {
                 settings = {
                    { type = "float", settingProperty = "NoviceAcrobaticsJumpFatigueMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "ApprenticeAcrobaticsJumpFatigueMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "JourneymanAcrobaticsJumpFatigueMult", defaultValue = 0.50 },
                    { type = "float", settingProperty = "ExpertAcrobaticsJumpFatigueMult", defaultValue = 0.50 },
                    { type = "float", settingProperty = "MasterAcrobaticsJumpFatigueMult", defaultValue = 0.25 },
                    { type = "float", settingProperty = "MasterAcrobaticsFallDamageMult", defaultValue = 0.50 },
                    { type = "float", settingProperty = "DodgeCooldown", defaultValue = 0.50 },
                 },
            },
            ["Alchemy"] = {
                 settings = {
                    { type = "float", settingProperty = "AlchemyApprenticeDoubleCraftChance", defaultValue = 0.25 },
                    { type = "float", settingProperty = "AlchemyJourneymanDoubleCraftChance", defaultValue = 0.25 },
                    { type = "float", settingProperty = "AlchemyExpertDoubleCraftChance", defaultValue = 1.00 },
                    { type = "float", settingProperty = "AlchemyMasterDoubleCraftChance", defaultValue = 1.00 },
                 },
            },
            ["Athletics"] = {
                settings = {
                    { type = "float", settingProperty = "PerkAthleticsNoviceRunFatigueRegenMult", defaultValue = 0.75 },
                    { type = "float", settingProperty = "PerkAthleticsApprenticeRunFatigueRegenMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsJourneymanRunFatigueRegenMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsExpertRunFatigueRegenMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsMasterRunFatigueRegenMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsNoviceSprintFatigueCostMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsApprenticeSprintFatigueCostMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "PerkAthleticsJourneymanSprintFatigueCostMult", defaultValue = 0.70 },
                    { type = "float", settingProperty = "PerkAthleticsExpertSprintFatigueCostMult", defaultValue = 0.40 },
                    { type = "float", settingProperty = "PerkAthleticsMasterSprintFatigueCostMult", defaultValue = 0.00 },
                },
            },
            ["Block"] = {
                settings = {
                    { type = "float", settingProperty = "NoviceBlockPerkFatigueDamageMod", defaultValue = 2.00 },
                    { type = "float", settingProperty = "JourneymanBlockPerkFatigueDamageMod", defaultValue = 1.50 },
                    { type = "float", settingProperty = "ExpertBlockPerkFatigueDamageMod", defaultValue = 1.00 },
                    { type = "float", settingProperty = "MasterBlockPerkFatigueDamageMod", defaultValue = 0.50 },
                    { type = "float", settingProperty = "FatigueShieldBashBaseCost", defaultValue = 7.00 },
                    { type = "float", settingProperty = "FatigueShieldBashWeightMult", defaultValue = 0.30 },
                    { type = "float", settingProperty = "FatigueShieldBashFinalMult", defaultValue = 5.00 },
                    { type = "float", settingProperty = "BaseShieldBashAttributeValue", defaultValue = 0.75 },
                    { type = "float", settingProperty = "AttributeShieldBashBonusScalingMultiplier", defaultValue = 0.00 },
                    { type = "float", settingProperty = "BaseShieldBashSkillValue", defaultValue = 0.20 },
                    { type = "float", settingProperty = "SkillShieldBashBonusScalingMultiplier", defaultValue = 0.01 },
                    { type = "float", settingProperty = "FinalShieldBashDamageMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "BlockMasterLevelShieldBashDamageMultiplier", defaultValue = 2.50 },
                    { type = "float", settingProperty = "BlockFormulaSkillMutliplier", defaultValue = 0.01 },
                    { type = "float", settingProperty = "BlockFormulaFinalSkillMultiplier", defaultValue = 0.40 },
                },
            },
            ["Blade"] = {
                settings = {
                    { type = "float", settingProperty = "NoviceBladePowerAttackDamageMultiplier", defaultValue = 2.50 },
                    { type = "float", settingProperty = "ApprenticeBladePowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "JourneymanBladePowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "ExpertBladePowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "MasterBladePowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "BladePerkApprenticeDurabilityLossPercentage", defaultValue = 0.80 },
                    { type = "float", settingProperty = "BladePerkJourneymanPowerAttackWeaknessToNormWeapMagnitude", defaultValue = 15.00 },
                    { type = "float", settingProperty = "BladePerkJourneymanPowerAttackWeaknessToNormWeapDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "BladePerkMasterPowerAttackWeaknessToNormWeapMagnitude", defaultValue = 30.00 },
                    { type = "float", settingProperty = "BladePerkMasterPowerAttackWeaknessToNormWeapDuration", defaultValue = 10.00 },
                    { type = "float", settingProperty = "BladePerkPowerAttackWeaknessToNormWeapChanceModifier", defaultValue = 100.00 },
                    { type = "float", settingProperty = "BladePerkExpertLightAttackDamageHealthChance", defaultValue = 20.00 },
                    { type = "float", settingProperty = "BladePerkExpertLightAttackDamageHealthLevelMultiplier", defaultValue = 0.10 },
                    { type = "float", settingProperty = "BladePerkExpertLightAttackDamageHealthDuration", defaultValue = 3.00 },
                },
            },
            ["Blunt"] = {
                settings = {
                    { type = "float", settingProperty = "NoviceBluntPowerAttackDamageMultiplier", defaultValue = 2.50 },
                    { type = "float", settingProperty = "ApprenticeBluntPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "JourneymanBluntPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "ExpertBluntPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "MasterBluntPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "BluntPerkApprenticeDurabilityLossPercentage", defaultValue = 0.80 },
                    { type = "float", settingProperty = "BluntPerkJourneymanPowerAttackSelfShieldMagnitude", defaultValue = 15.00 },
                    { type = "float", settingProperty = "BluntPerkJourneymanPowerAttackSelfShieldDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "BluntPerkMasterSelfShieldMagnitude", defaultValue = 30.00 },
                    { type = "float", settingProperty = "BluntPerkMasterPowerAttackSelfShieldDuration", defaultValue = 10.00 },
                    { type = "float", settingProperty = "BluntPerkPowerAttackSelfShieldChance", defaultValue = 100.00 },
                    { type = "float", settingProperty = "BluntPerkExpertLightAttackSilenceChance", defaultValue = 20.00 },
                    { type = "float", settingProperty = "BluntPerkLightAttackSilenceDuration", defaultValue = 10.00 },
                },
            },
            ["Hand-to-Hand"] = {
                settings = {
                    { type = "float", settingProperty = "NoviceHandToHandPowerAttackDamageMultiplier", defaultValue = 2.50 },
                    { type = "float", settingProperty = "ApprenticeHandToHandPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "JournyemanHandToHandPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "ExpertHandToHandPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "MasterHandToHandPowerAttackDamageMultiplier", defaultValue = 3.00 },
                    { type = "float", settingProperty = "HandToHandPerkNoviceLightAttackFatigueMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "HandToHandPerkApprenticeLightAttackFatigueMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "HandToHandJournyemanLightAttackFatigueMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "HandToHandPerkExpertLightAttackFatigueMultiplier", defaultValue = 1.50 },
                    { type = "float", settingProperty = "HandToHandPerkMasterLightAttackFatigueMultiplier", defaultValue = 2.00 },
                    { type = "float", settingProperty = "HandToHandJourneymanPowerAttackDisarmChance", defaultValue = 25.00 },
                },
            },
            ["Marksman"] = {
                settings = {
                    { type = "float", settingProperty = "PerkMarksmanExpertParalyzeChance", defaultValue = 10.00 },
                    { type = "float", settingProperty = "PerkMarksmanMasterParalyzeChance", defaultValue = 25.00 },
                    { type = "float", settingProperty = "PerkMarksmanExpertParalyzeDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "PerkMarksmanMasterParalyzeDuration", defaultValue = 5.00 },
                    { type = "float", settingProperty = "NoviceMarksmanBowDrawFatigueBurnPerSecond", defaultValue = 20.00 },
                    { type = "float", settingProperty = "ApprenticeMarksmanBowDrawFatigueBurnPerSecond", defaultValue = 0.00 },
                    { type = "float", settingProperty = "JourneymanMarksmanBowDrawFatigueBurnPerSecond", defaultValue = 0.00 },
                    { type = "float", settingProperty = "ExpertMarksmanBowDrawFatigueBurnPerSecond", defaultValue = 0.00 },
                    { type = "float", settingProperty = "MasterMarksmanBowDrawFatigueBurnPerSecond", defaultValue = 0.00 },
                },
            },
            ["Mercantile"] = {
                settings = {
                    { type = "int", settingProperty = "PerkMercantileApprenticeLevelOffset", defaultValue = 2 },
                    { type = "int", settingProperty = "PerkMercantileJourneymanLevelOffset", defaultValue = 4 },
                    { type = "int", settingProperty = "PerkMercantileMasterLevelOffset", defaultValue = 6 },
                },
            },
            ["Magic Schools"] = {
                settings = {
                    { type = "float", settingProperty = "AlterationExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "ConjurationExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "DestructionExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "IllusionExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "MysticismExpCastMult", defaultValue = 0.10 },
                    { type = "float", settingProperty = "RestorationExpCastMult", defaultValue = 0.10 },
                },
            },
            ["Persuasion"] = {
                settings = {
                    { type = "float", settingProperty = "PersuasionExpGainDispositionIncreased", defaultValue = 3.60 },
                    { type = "float", settingProperty = "PersuasionExpGainDispositionDecreased", defaultValue = 1.20 },
                },
            },
            ["Sneak"] = {
                settings = {
                    { type = "float", settingProperty = "PerkSneakExpertLightImpactModifier", defaultValue = 0.80 },
                    { type = "float", settingProperty = "SneakTransitionSpeed", defaultValue = 6.00 },
                    { type = "float", settingProperty = "SneakNoticedMin", defaultValue = -20.00 },
                    { type = "float", settingProperty = "SneakSeenMin", defaultValue = 0.00 },
                    { type = "float", settingProperty = "SneakUnseenMin", defaultValue = 0.00 },
                    { type = "float", settingProperty = "SneakLostMin", defaultValue = -20.00 },
                    { type = "float", settingProperty = "MinimalDetectionValue", defaultValue = -20.00 },
                    { type = "float", settingProperty = "DetectionNightEyeBonus", defaultValue = 3.00 },
                    { type = "float", settingProperty = "SneakMaxDistance", defaultValue = 1500.00 },
                    { type = "float", settingProperty = "SneakExteriorDistanceMult", defaultValue = 1.50 },
                    { type = "float", settingProperty = "SneakBootWeightBase", defaultValue = 10.00 },
                    { type = "float", settingProperty = "SneakBootWeightMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "SneakTargetInCombatBonus", defaultValue = 20.00 },
                    { type = "float", settingProperty = "SneakRunningMult", defaultValue = 1.30 },
                    { type = "float", settingProperty = "SneakSoundLosMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "DefaultNonSneakingSoundMult", defaultValue = 2.00 },
                    { type = "float", settingProperty = "NoviceSneakSoundsMult", defaultValue = 1.60 },
                    { type = "float", settingProperty = "ApprenticeSneakSoundsMult", defaultValue = 1.60 },
                    { type = "float", settingProperty = "JourneymanSneakSoundsMult", defaultValue = 0.80 },
                    { type = "float", settingProperty = "ExpertSneakSoundsMult", defaultValue = 0.80 },
                    { type = "float", settingProperty = "MasterSneakSoundsMult", defaultValue = 0.80 },
                    { type = "float", settingProperty = "DetectionSneakLightMod", defaultValue = 15.00 },
                    { type = "float", settingProperty = "SneakLightMult", defaultValue = 1.40 },
                    { type = "float", settingProperty = "SneakSkillMult", defaultValue = 0.50 },
                    { type = "float", settingProperty = "SneakTargetAttackBonus", defaultValue = 100.00 },
                    { type = "float", settingProperty = "SneakSwimmingLightMult", defaultValue = 0.50 },
                    { type = "float", settingProperty = "SneakSleepBonus", defaultValue = -10.00 },
                    { type = "float", settingProperty = "SneakBaseValue", defaultValue = -25.00 },
                },
            },
            ["Equipment"] = {
                settings = {
                    { type = "float", settingProperty = "BrokenWeaponDamageMultiplier", defaultValue = 0.50 },
                    { type = "float", settingProperty = "DefaultWeaponDamageMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "ImprovedWeaponDamageMultiplier", defaultValue = 1.12 },
                    { type = "float", settingProperty = "BrokenArmorEfficiencyMultiplier", defaultValue = 0.25 },
                    { type = "float", settingProperty = "DefaultArmorEfficiencyMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "ImprovedArmorEfficiencyMultiplier", defaultValue = 1.25 },
                    { type = "float", settingProperty = "BaseWeaponDamageMultiplier", defaultValue = 0.50 },
                    { type = "float", settingProperty = "AttributeDamageMultiplier", defaultValue = 0.00 },
                    { type = "float", settingProperty = "MinimumAttributeDamage", defaultValue = 0.75 },
                    { type = "float", settingProperty = "SkillDamageMultiplier", defaultValue = 0.01 },
                    { type = "float", settingProperty = "MinimumSkillDamage", defaultValue = 0.20 },
                    { type = "float", settingProperty = "MinimumHandToHandBlockValue", defaultValue = 0.20 },
                    { type = "float", settingProperty = "MinimumWeaponBlockValue", defaultValue = 0.40 },
                    { type = "float", settingProperty = "MinimumShieldBlockValue", defaultValue = 0.60 },
                },
            },
            ["Creature Settings"] = {
                settings = {
                    { type = "float", settingProperty = "CreatureHealthScalingMultiplier", defaultValue = 0.40 },
                    { type = "float", settingProperty = "CreatureDamageScalingMultiplier", defaultValue = 0.15 },
                    { type = "float", settingProperty = "CreatureFatigueScalingMultiplier", defaultValue = 0.15 },
                    { type = "float", settingProperty = "CreatureWeaponDamageMultiplier", defaultValue = 1.00 },
                    { type = "float", settingProperty = "EnterLowFatigueThreshold", defaultValue = 0.20 },
                    { type = "float", settingProperty = "ExitLowFatigueThreshold", defaultValue = 0.25 },
                },
            },
            ["Regeneration"] = {
                settings = {
                    { type = "float", settingProperty = "HealthRegenBase", defaultValue = 0.16 },
                    { type = "float", settingProperty = "HealthRegenEnduranceMult", defaultValue = 0.34 },
                    { type = "float", settingProperty = "FatigueRegenBase", defaultValue = 12.00 },
                    { type = "float", settingProperty = "FatigueRegenAgilityMult", defaultValue = 8.00 },
                    { type = "float", settingProperty = "HealthRegenDelay", defaultValue = 6.00 },
                    { type = "float", settingProperty = "MagickaRegenDelay", defaultValue = 2.00 },
                    { type = "float", settingProperty = "FatigueRegenDelay", defaultValue = 2.00 },
                    { type = "float", settingProperty = "HealthRegenOutsideCombatMult", defaultValue = 7.50 },
                    { type = "float", settingProperty = "MagickaRegenOutsideCombatMult", defaultValue = 2.00 },
                    { type = "float", settingProperty = "FatigueRegenOutsideCombatMult", defaultValue = 1.50 },
                    { type = "float", settingProperty = "PlayerHealthRegenMult", defaultValue = 1.00 },
                    { type = "float", settingProperty = "NPCHealthRegenMult", defaultValue = 0.00 },
                },
            },
             ["Animation & Poses"] = {
                settings = {
                    { type = "bool", settingProperty = "bAreDeadDefaultPosesEnabled", defaultValue = true },
                    { type = "bool", settingProperty = "bShouldSaveDatatableDeadDefaultPose", defaultValue = false },
                    { type = "float", settingProperty = "AimSlowdownRaycastCheckDelay", defaultValue = 0.04 },
                    { type = "float", settingProperty = "KillZOffset", defaultValue = 2500.00 },
                    { type = "float", settingProperty = "CameraShakeCheckDelay", defaultValue = 0.10 },
                },
            },
            ["Threat System"] = {
                settings = {
                    { type = "int", settingProperty = "LowThreatLevelOffset", defaultValue = -3 },
                    { type = "int", settingProperty = "MediumThreatLevelOffset", defaultValue = 0 },
                    { type = "int", settingProperty = "HighThreatLevelOffset", defaultValue = 3 },
                },
            },
        }

        -- Register the mod and setup the panel inside the callback
        -- The panel argument 'modPanel' is only valid within this callback scope
        RegisterMod("InitialSettings", true, false, function(modPanel)
            print("[InitialSettings] Mod panel registered. Setting up rows.")

            -- Loop through sections and settings to create rows
            for sectionName, sectionData in pairs(settingsData) do
                AddRowSectionHeader(modPanel, sectionName, 5)

                -- Loop through settings to create rows
                if sectionData.settings then
                    for _, setting in ipairs(sectionData.settings) do
                        local displayName = decamelCase(setting.settingProperty)
                        local settingType = setting.type

                        if settingType == "bool" then
                            AddRowBoolSwitch(modPanel, displayName, setting.settingProperty, setting.defaultValue)
                        elseif settingType == "float" or settingType == "int" then
                             AddRowNumber(modPanel, displayName, setting.settingProperty, setting.defaultValue, nil, nil, nil, nil, settingType == "int" and 0 or nil) -- Add min/max/step if available in data
                        elseif settingType == "string" then
                            AddRowString(modPanel, displayName, setting.settingProperty, setting.hintText or "", setting.defaultValue)
                        end

                        RegisterCallback(modPanel, setting.settingProperty, function(value)
                            -- Check type and convert to integer if necessary
                            local valueToApply = value
                            if settingType == "int" and type(value) == 'number' then
                                valueToApply = math.floor(value)
                            end
                            if settingType == "name" and type(value) == 'string' then
                                valueToApply = FName(value)
                            end
                            if settingType == "string" and type(value) == 'string' then
                                valueToApply = FString(value)
                            end
                            applySetting(setting.settingProperty, valueToApply)
                        end)
                    end
                end
            end

            print("[InitialSettings] Loading parameters.")
            LoadParameters(modPanel)

            print("[InitialSettings] Panel setup complete and parameters loaded.")

        end) -- End RegisterMod callback
    end -- End if SettingsCDO check
end -- End if SettingsClass check