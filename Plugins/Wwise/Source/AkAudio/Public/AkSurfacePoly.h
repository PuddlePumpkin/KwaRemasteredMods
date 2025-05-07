#pragma once
#include "CoreMinimal.h"
#include "AkSurfacePoly.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkSurfacePoly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Occlusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSurface;
    
private:
    UPROPERTY()
    float SurfaceArea;
    
public:
    AKAUDIO_API FAkSurfacePoly();
};

