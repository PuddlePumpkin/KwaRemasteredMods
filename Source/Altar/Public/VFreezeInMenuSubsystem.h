#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVFreezeSubsystemMode.h"
#include "VFreezeLayer.h"
#include "VFreezeInMenuSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class ALTAR_API UVFreezeInMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVFreezeLayer> FreezeStack;
    
public:
    UVFreezeInMenuSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnFreeze(const FName& FreezeName, bool bShouldUnfreezeOblivion);
    
    UFUNCTION(BlueprintCallable)
    void SpareActorFromFreeze(AActor* ActorToAffect);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(TEnumAsByte<EVFreezeSubsystemMode> NewMode);
    
    UFUNCTION(BlueprintCallable)
    void RequestMode(TEnumAsByte<EVFreezeSubsystemMode> NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreezing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorFrozen(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EVFreezeSubsystemMode> GetMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentFreezeName() const;
    
    UFUNCTION(BlueprintCallable)
    void Freeze(const FName& FreezeName, bool bShouldFreezeOblivion);
    
};

