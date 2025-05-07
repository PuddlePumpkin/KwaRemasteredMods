#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVActorBehaviorState.h"
#include "OnActorBehaviorEndedDelegateDelegate.h"
#include "VActorBehaviorBase.generated.h"

class AVPairedPawn;
class UVAltarActionState;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class ALTAR_API UVActorBehaviorBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorBehaviorEndedDelegate OnEnded;
    
    UVActorBehaviorBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd(bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void Interrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVActorBehaviorState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVAltarActionState* GetOuterState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVPairedPawn* GetControlledPawn() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndBehavior();
    
};

