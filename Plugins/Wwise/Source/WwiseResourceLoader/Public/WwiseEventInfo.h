#pragma once
#include "CoreMinimal.h"
#include "EWwiseEventDestroyOptions.h"
#include "EWwiseEventSwitchContainerLoading.h"
#include "WwiseObjectInfo.h"
#include "WwiseEventInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseEventInfo : public FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWwiseEventSwitchContainerLoading SwitchContainerLoading;
    
    UPROPERTY(EditAnywhere)
    EWwiseEventDestroyOptions DestroyOptions;
    
    FWwiseEventInfo();
};

