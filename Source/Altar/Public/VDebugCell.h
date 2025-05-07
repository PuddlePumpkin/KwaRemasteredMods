#pragma once
#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "VDebugCell.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVDebugCell : public APostProcessVolume {
    GENERATED_BODY()
public:
    AVDebugCell(const FObjectInitializer& ObjectInitializer);

};

