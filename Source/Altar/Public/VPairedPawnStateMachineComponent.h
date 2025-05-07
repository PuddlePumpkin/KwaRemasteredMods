#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VStateMachineComponent.h"
#include "VPairedPawnStateMachineComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVPairedPawnStateMachineComponent : public UVStateMachineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionStatePresetsDataTable;
    
    UVPairedPawnStateMachineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLocomotionStateTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActionStateTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionStateDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetActionState() const;
    
};

