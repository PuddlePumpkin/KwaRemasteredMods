#pragma once
#include "CoreMinimal.h"
#include "OblivionNPCFaceGenData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FOblivionNPCFaceGenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SymmetricalGeometryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AsymmetricalGeometryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TextureData;
    
    FOblivionNPCFaceGenData();
};

