#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EVEquipAction.h"
#include "VAnimNotify_PlayEquipUnequip.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALTAR_API UVAnimNotify_PlayEquipUnequip : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVEquipAction EquipAction;
    
public:
    UVAnimNotify_PlayEquipUnequip();

};

