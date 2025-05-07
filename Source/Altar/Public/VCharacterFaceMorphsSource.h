#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterFaceMorphAxis.h"
#include "VCharacterFaceMorphsSource.generated.h"

class UVOblivionToAltarFaceMorphsConversionMap;

UCLASS(Blueprintable)
class ALTAR_API UVCharacterFaceMorphsSource : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVOblivionToAltarFaceMorphsConversionMap* OblivionFaceMorphsConversionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterFaceMorphAxis> MorphAxisMap;
    
    UVCharacterFaceMorphsSource();

};

