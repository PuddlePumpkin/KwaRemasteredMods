#pragma once
#include "CoreMinimal.h"
#include "VModularBodyPartBase.h"
#include "VAmuletModularBodyPart.generated.h"

UCLASS(Abstract, Blueprintable)
class ALTAR_API AVAmuletModularBodyPart : public AVModularBodyPartBase {
    GENERATED_BODY()
public:
    AVAmuletModularBodyPart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateChestSnappingAlpha(const float NewAlpha);
    
};

