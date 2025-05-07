#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "VAltarAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAltarAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UVAltarAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ForceUpdateGameObjectPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasActiveEvents() const;
    
};

