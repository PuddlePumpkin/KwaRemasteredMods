#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESHeightmapData.h"
#include "TESLandscape.generated.h"

class UTESCell;
class UTESLandTexture;
class UTexture2D;

UCLASS(Blueprintable)
class ALTAR_API UTESLandscape : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESCell* ParentCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TESOriginHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TESMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TESMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTESHeightmapData HeightmapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESLandTexture* TESLandBaseTexture;
    
    UTESLandscape();

    UFUNCTION(BlueprintCallable)
    UTESLandTexture* GetLandBaseTexture();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetHeightmapTexture(bool bFlipYAxis);
    
    UFUNCTION(BlueprintCallable)
    bool CreateHeightmapData(bool bFlipYAxis, bool bKeepSouthWestVertices, float ZScaleMinHeight, float ZScaleMaxHeight, float WorldSpaceOffsetY);
    
};

