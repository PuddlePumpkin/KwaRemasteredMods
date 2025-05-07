#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "VAnimNotify_FloorTrapOpening.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_FloorTrapOpening : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpening;
    
    UVAnimNotify_FloorTrapOpening();

};

