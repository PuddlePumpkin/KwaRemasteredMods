#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NifType.h"
#include "TexClampMode.h"
#include "TexFilterMode.h"
#include "TexturingMapFlags.h"
#include "TransformMethod.h"
#include "TexDesc.generated.h"

class UNiImage;
class UNiSourceTexture;

UCLASS(Blueprintable)
class ALTAR_API UTexDesc : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiSourceTexture* Source;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TexClampMode ClampMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TexFilterMode FilterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTexturingMapFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAnisotropy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UVSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS2L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PS2K;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTextureTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TransformMethod TransformMethodFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UTexDesc();

};

