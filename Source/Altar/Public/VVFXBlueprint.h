#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VVFXBlueprint.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVVFXBlueprint : public AActor {
    GENERATED_BODY()
public:
    AVVFXBlueprint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PauseThisVFX(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPause(bool bIsPaused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeFirstPerson(bool bIsFirstPerson);
    
};

