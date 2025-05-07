#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LandscapeLayerName.h"
#include "LandscapeConfig.generated.h"

class UFoliageType;
class ULandscapeLayerInfoObject;
class UMaterialInstance;

UCLASS(Blueprintable)
class ALTAR_API ULandscapeConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LandscapeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<LandscapeLayerName>, ULandscapeLayerInfoObject*> LandscapeLayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<LandscapeLayerName> DefaultLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TEnumAsByte<LandscapeLayerName>> TextureToLayerNoFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TEnumAsByte<LandscapeLayerName>> TextureToLayerWithFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFoliageType*> TreesFoliage;
    
    ULandscapeConfig();

};

