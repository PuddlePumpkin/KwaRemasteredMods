#pragma once
#include "CoreMinimal.h"
#include "EVActorValues.h"
#include "EVSkill.h"
#include "EVSkillLevel.h"
#include "OnActorValueChangedDelegate.h"
#include "OnAllActorValueChangedDelegate.h"
#include "OnEquippedEncumbranceChangedDelegate.h"
#include "VActorPairingComponent.h"
#include "VActorValuesPairingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVActorValuesPairingComponent : public UVActorPairingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedEncumbranceChanged OnEquippedEncumbranceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllActorValueChanged OnAllActorValueChanged;
    
    UVActorValuesPairingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnBindOnAnyActorValueChanged(const FOnActorValueChanged& Callback);
    
    UFUNCTION(BlueprintCallable)
    void UnBindOnActorValueChanged(EVActorValues ActorValueToListen, const FOnActorValueChanged& Callback);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAllNewValues();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetUIntModifiedActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetUIntBaseActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVSkillLevel GetModifiedSkillLevel(EVSkill Skill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntModifiedActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntBaseActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatModifiedActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatBaseActorValue(EVActorValues ValueWanted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEquippedEncumbrance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVSkillLevel GetBaseSkillLevel(EVSkill Skill) const;
    
    UFUNCTION(BlueprintCallable)
    void BindOnAnyActorValueChanged(TSet<EVActorValues> ActorValuesToListen, const FOnActorValueChanged& Callback);
    
    UFUNCTION(BlueprintCallable)
    void BindOnActorValueChanged(EVActorValues ActorValueToListen, const FOnActorValueChanged& Callback);
    
};

