#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "AkAcousticPortalState.h"
#include "AkPortalComponent.generated.h"

class UPrimitiveComponent;
class UTextRenderComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDynamic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
private:
    UPROPERTY(Instanced, NonTransactional, SkipSerialization)
    UTextRenderComponent* FrontRoomText;
    
    UPROPERTY(Instanced, NonTransactional, SkipSerialization)
    UTextRenderComponent* BackRoomText;
    
public:
    UAkPortalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPortalOcclusion(float InPortalOcclusion);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamic(bool bInDynamic);
    
    UFUNCTION(BlueprintPure)
    bool PortalPlacementValid() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetPrimitiveParent() const;
    
    UFUNCTION(BlueprintPure)
    float GetPortalOcclusion() const;
    
    UFUNCTION(BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePortal();
    
    UFUNCTION(BlueprintCallable)
    void DisablePortal();
    
};

