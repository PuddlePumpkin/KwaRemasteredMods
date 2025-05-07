#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "PixelFormat.h"
#include "PixelTiling.h"
#include "NiPixelFormat.generated.h"

class UPixelFormatComponent;

UCLASS(Blueprintable)
class ALTAR_API UNiPixelFormat : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PixelFormat PixelFormatFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RedMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GreenMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BlueMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 AlphaMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BitsPerPixeluint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> OldFastCompare;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    PixelTiling Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitsPerPixelbyte;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RendererHint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ExtraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool sRGBSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPixelFormatComponent*> Channels;
    
    UNiPixelFormat();

};

