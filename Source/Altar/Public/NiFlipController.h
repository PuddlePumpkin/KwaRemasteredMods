#pragma once
#include "CoreMinimal.h"
#include "ETexType.h"
#include "NiFloatInterpController.h"
#include "NiFlipController.generated.h"

class UNiImage;
class UNiSourceTexture;

UCLASS(Blueprintable)
class ALTAR_API UNiFlipController : public UNiFloatInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETexType TextureSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiSourceTexture*> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiImage*> Images;
    
    UNiFlipController();

};

