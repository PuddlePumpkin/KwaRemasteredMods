#pragma once
#include "CoreMinimal.h"
#include "CellInteriorData.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FCellInteriorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Ambient;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Directional;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogFar;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DirectionalXY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DirectionalZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClipDist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 InteriorOffset;
    
    FCellInteriorData();
};

