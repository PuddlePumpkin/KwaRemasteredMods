#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_MotionWarping.h"
#include "VAnimNotifyState_WarpToLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALTAR_API UVAnimNotifyState_WarpToLocation : public UAnimNotifyState_MotionWarping {
    GENERATED_BODY()
public:

    UVAnimNotifyState_WarpToLocation(const FObjectInitializer& ObjectInitializer);


};

