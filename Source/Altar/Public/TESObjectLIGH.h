#pragma once
#include "CoreMinimal.h"
#include "OBJ_LIGH.h"
#include "TESBoundAnimObject.h"
#include "TESObjectLIGH.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectLIGH : public UTESBoundAnimObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOBJ_LIGH Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture;
    
    UTESObjectLIGH();

};

