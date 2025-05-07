#pragma once
#include "CoreMinimal.h"
#include "AlphaFormat.h"
#include "MipMapFormat.h"
#include "NifType.h"
#include "PixelLayout.h"
#include "FormatPrefs.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UFormatPrefs : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PixelLayout PixelLayoutFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    MipMapFormat UseMipmaps;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    AlphaFormat AlphaFormatFlag;
    
    UFormatPrefs();

};

