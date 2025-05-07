#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OblivionToAltarFaceConversionValue.h"
#include "VOblivionToAltarFaceMorphsConversionMap.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVOblivionToAltarFaceMorphsConversionMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FOblivionToAltarFaceConversionValue> IndexMap;
    
    UVOblivionToAltarFaceMorphsConversionMap();

};

