#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VSenescenceTexture.h"
#include "VSenescenceLevel.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class UVSenescenceLevel : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSenescenceTexture HealthyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVSenescenceTexture SickTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVSenescenceTexture> VampireTexture;
    
    UVSenescenceLevel();

};

