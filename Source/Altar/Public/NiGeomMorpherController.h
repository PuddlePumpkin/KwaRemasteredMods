#pragma once
#include "CoreMinimal.h"
#include "NiInterpController.h"
#include "NiGeomMorpherController.generated.h"

class UMorphWeight;
class UNiInterpolator;
class UNiMorphData;

UCLASS(Blueprintable)
class ALTAR_API UNiGeomMorpherController : public UNiInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MorpherFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiMorphData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AlwaysUpdate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumInterpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiInterpolator*> Interpolators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorphWeight*> InterpolatorWeights;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumUnknownInts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UnknownInts;
    
    UNiGeomMorpherController();

};

