#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EVOpenCloseAction.h"
#include "VAnimNotify_PlayOpenCloseSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_PlayOpenCloseSound : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVOpenCloseAction Action;
    
public:
    UVAnimNotify_PlayOpenCloseSound();

};

