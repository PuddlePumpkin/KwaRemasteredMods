#pragma once
#include "CoreMinimal.h"
#include "EVSenescencePhenotypeBehaviour.h"
#include "VSenescenceTexturePair.h"
#include "VSenescenceTexture.generated.h"

class UVCharacterPhenotypePreset;

USTRUCT(BlueprintType)
struct FVSenescenceTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVSenescenceTexturePair> SenescenceTextures;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVSenescencePhenotypeBehaviour PhenotypeBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVCharacterPhenotypePreset> Phenotype;
    
    ALTAR_API FVSenescenceTexture();
};

