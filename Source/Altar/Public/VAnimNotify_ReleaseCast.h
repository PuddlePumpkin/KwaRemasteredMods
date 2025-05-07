#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "VAnimNotify_ReleaseCast.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_ReleaseCast : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStaffNotify;
    
    UVAnimNotify_ReleaseCast();

};

