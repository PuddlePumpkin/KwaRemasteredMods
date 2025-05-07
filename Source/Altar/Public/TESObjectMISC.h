#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectMISC.generated.h"

class UStreamableRenderAsset;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectMISC : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TextureIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESObjectMISC();

};

