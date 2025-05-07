#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VAttachComponentData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct ALTAR_API FVAttachComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> ParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LocalTransform;
    
    FVAttachComponentData();
};

