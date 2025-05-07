#pragma once
#include "CoreMinimal.h"
#include "TESMagicItemObject.h"
#include "TESIngredientItem.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESIngredientItem : public UTESMagicItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESIngredientItem();

};

