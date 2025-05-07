#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/TimerHandle.h"
#include "EVOblivionAIProcedureType.h"
#include "ReactToFreezeInterface.h"
#include "Templates/SubclassOf.h"
#include "VAIControllerCombatData.h"
#include "VOblivionAIPackageData.h"
#include "VPairedPawnAIController.generated.h"

class AActor;
class AVPairedPawn;
class AVWeapon;
class UNavigationQueryFilter;
class UVAIPackageExecutionOverride;
class UVAIProcedureExecution_Base;
class UVAltarPathFollowingComponent;
class UVSteeringBehaviorsComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPairedPawnAIController : public AAIController, public IReactToFreezeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bInDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bInCombatDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOblivionAIPackageData CurrentPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    EVOblivionAIProcedureType CurrentProcedureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* ControlledPairedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarPathFollowingComponent* AltarPathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVSteeringBehaviorsComponent* SteeringBehaviorsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> CannotSwimFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> CanOnlySwimFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FollowPlayerCharacterFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MovementActorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVTESObjectRefComponent> DynamicTargetRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVTESObjectRefComponent> GenericLocationRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIProcedureExecution_Base* CurrentProcedureExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAIPackageExecutionOverride* CurrentPackageExecutionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAIControllerCombatData CombatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachabilityUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ReachabilityUpdateTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementRestrictionUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MovementRestrictionUpdateTimerHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle MovementStoppedTimerHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrackedTargets[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bWantsToRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bWantsToSneak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedPawn* CurrentDestinationPawn;
    
public:
    AVPairedPawnAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCombatDebugDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProcedureStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProcedureInterrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugModeDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugModeActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnControlledPawnWeaponChanged(const AVWeapon* NewWeaponForm);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDynamicTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDynamicTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateDebugMode();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCombatDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputePackageRadius(int32 RadiusTypeIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateDebugMode();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCombatDebugMode();
    

    // Fix for true pure virtual functions not being implemented
};

