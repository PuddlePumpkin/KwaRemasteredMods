#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseGeometrySurfacePropertiesRow.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FWwiseGeometrySurfacePropertiesRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransmissionLoss;
    
    AKAUDIO_API FWwiseGeometrySurfacePropertiesRow();
};

