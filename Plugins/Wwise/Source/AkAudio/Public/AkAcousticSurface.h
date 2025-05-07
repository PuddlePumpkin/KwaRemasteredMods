#pragma once
#include "CoreMinimal.h"
#include "AkAcousticSurface.generated.h"

USTRUCT()
struct FAkAcousticSurface {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 Texture;
    
    UPROPERTY()
    float Occlusion;
    
    UPROPERTY()
    FString Name;
    
    AKAUDIO_API FAkAcousticSurface();
};

