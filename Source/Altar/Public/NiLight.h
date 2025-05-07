#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiDynamicEffect.h"
#include "NiLight.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiLight : public UNiDynamicEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dimmer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor AmbientColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DiffuseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SpecularColor;
    
    UNiLight();

};

