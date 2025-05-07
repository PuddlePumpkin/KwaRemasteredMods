#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OBJ_TREE.h"
#include "TESBoundTreeObject.h"
#include "TESObjectTREE.generated.h"

class UFoliageType;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectTREE : public UTESBoundTreeObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFoliageType> Foliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureIcon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> SeedArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOBJ_TREE Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BillboardSize;
    
    UTESObjectTREE();

};

