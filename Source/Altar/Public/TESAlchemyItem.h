#pragma once
#include "CoreMinimal.h"
#include "TESMagicItemObject.h"
#include "TESAlchemyItem.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESAlchemyItem : public UTESMagicItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESAlchemyItem();

};

