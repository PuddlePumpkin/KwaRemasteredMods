#pragma once
#include "CoreMinimal.h"
#include "TESObjectACTI.h"
#include "TESFurniture.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESFurniture : public UTESObjectACTI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESFurniture();

};

