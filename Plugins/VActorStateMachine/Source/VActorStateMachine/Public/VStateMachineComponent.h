#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "VStateMachineComponent.generated.h"

class UVStateBase;
class UVStateMachine;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VACTORSTATEMACHINE_API UVStateMachineComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UVStateBase*> StateInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AutonomousStateChangeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintCurrentStatesDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalOnlyDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthorityOnlyDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartStateMachineOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreviousAutonomousTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentAutonomousTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnServerCurrentTagsChange, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ServerCurrentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVStateMachine> StateMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVStateMachine* StateMachineInstance;
    
public:
    UVStateMachineComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendStateChangeToServer(FGameplayTagContainer CurrentStatesTagContainer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendStateChangeListToServer(const TArray<FGameplayTag>& StateChangeList);
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RegisterStateChange(FGameplayTag NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnServerCurrentTagsChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVStateBase* GetStateFromTag(FGameplayTag StateTag) const;
    
};

