#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "EVMoveDirection.h"
#include "VAudioPlayable.h"
#include "VPairedPawnMovementComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVPairedPawnMovementComponent : public UCharacterMovementComponent, public IVAudioPlayable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesSweepAllSecondaryColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesDrawDebugSecondarySweepTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPawnGetPushedBySimulatingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatingActorPushFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumSimulatingActorPushVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesDrawSimulatingActorPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HighestReachableGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRunMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRunAthleticsMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSwimRunAthleticsMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSwimRunBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSwimWalkAthleticsMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSwimWalkBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWalkMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveWalkMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveEncumEffectNoWea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveEncumEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveNoWeaponMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSneakMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSneakRunMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveMaxFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveMinFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSprintBaseMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSprintAthleticsMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DirectionalSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartWalkDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopWalkDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartRunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopRunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSprintDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopSprintDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningThresholdRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSprintFatigueBaseCostPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSprintFatigueRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DirectionalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalAxisLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOblivionLikeWalkingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOblivionLocoDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> NonLandscapeCollisionProfilesEligibleForAntiClimbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeAngleThresholdToUseDirectionalAntiClimbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlopeAngleForFloorsNotEligibleForAntiClimbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSlopeAntiClimbingActivationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlopeAntiClimbingActivationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlopeAngleBeforeSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpOffSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpOffSlopeVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAntiClimbingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAntiClimbingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> AntiClimbingFactorAgainstSlopeAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> NonLandscapeFloorAntiClimbingReducingFactorAgainstSlopeAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocitySmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocitySmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> VelocitySmoothingAgainstSlopeAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapUpwardVelocityAtMaxSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventJumpOnStiffSlopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreventJumpMinSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bIsLocomotionDebugEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bAccelerationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bForceUseParentDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSwimmingDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpOutOfWaterZFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthToAllowJumpOutOfWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcrobaticWaterJumpZFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddAboveWaterAcrobaticJumpDistanceAcceptance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcrobaticWaterJumpMaxDistanceAboveWaterPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaterPlaneTestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderneathWaterPlaneTestOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlotationStopDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlotationTriggerDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceStabilisationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterDecelerationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterWalkJumpVerticalVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterWalkJumpHorizontalVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWaterplaneDistanceToEnableWaterWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaterplaneDistanceToEnableWaterWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMinJumpOutOfWaterZForWaterWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpOutOfWaterZForWaterWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSlideAgainstPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PawnInteractionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockNormalVelocity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WaterSplashEvent;
    
public:
    UVPairedPawnMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwimmingJumpOutOfWater();
    
    UFUNCTION(BlueprintCallable)
    void StopSprint();
    
    UFUNCTION(BlueprintCallable)
    void StartSprint();
    
    UFUNCTION(BlueprintCallable)
    void SetUseControllerRotation(bool bUseControllerRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetPreventSwimming(bool bNeverSwim);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMaxSpeed(float fNewOverrideMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetMovementInput(FVector NewOverrideMoveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMovementLocked(bool LockMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalSpeedMultiplier(float NewMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowWaterWalking(bool bNewAllowWaterWalking);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetOffsetMovementInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetGlobalSpeedMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void ResetFallingTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSprintFatigueRegenDelayFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPawnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHitFromSimulatingActor(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterWalkingAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTouchingWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSprintRegenDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAboveWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVMoveDirection GetMovementDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSwimWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSwimRunSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxGroundWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxGroundSprintSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxGroundRunSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFlySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImmersionDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallingTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToUnderneathWaterPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentGaitMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoSpecialJump(float JumpHeightMultiplier, float HorizontalVelocityMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWaterWalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJumpOutOfWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAcrobaticWaterJump() const;
    
    UFUNCTION(BlueprintCallable)
    void AcrobaticWaterJump();
    

    // Fix for true pure virtual functions not being implemented
};

