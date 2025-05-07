#pragma once
#include "CoreMinimal.h"
#include "VDoor.h"
#include "VOblivionGate.generated.h"

class UVDynamicNavAreaRebuilderComponent;

UCLASS(Blueprintable)
class ALTAR_API AVOblivionGate : public AVDoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayerToOblivionGateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerToOblivionGateDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVDynamicNavAreaRebuilderComponent* DynamicNavAreaRebuilderComponent;
    
public:
    AVOblivionGate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterFromPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldComputeDistanceWithPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterToPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabled();
    
};

