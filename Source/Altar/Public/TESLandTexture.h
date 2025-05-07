#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TextureHavokData.h"
#include "TESLandTexture.generated.h"

class UTESGrass;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESLandTexture : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpecularExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextureHavokData HavokData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTESGrass*> Grasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureName;
    
    UTESLandTexture();

};

