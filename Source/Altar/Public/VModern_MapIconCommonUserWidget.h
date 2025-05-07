#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "VModern_MapIconCommonUserWidget.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_MapIconCommonUserWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MapIconSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconBaseSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ZoomFactorsByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingZoomLevelOnWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingZoomLevelOnLocalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoomFactorOnWorldMapSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoomFactorOnWorldMapSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoomFactorOnLocalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIconSizeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIconSizeFactor;
    
    UVModern_MapIconCommonUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetIconStartingSizeOnMapSwitch(const bool bIsWorldMap);
    
    UFUNCTION(BlueprintCallable)
    void SetIconStartingSizeOnMapSetup(const bool bIsWorldMap);
    
    UFUNCTION(BlueprintCallable)
    void SetIconStartingSizeAccordingToMapType(const bool bIsWorldMap);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSizeSmoothlyGivenZoomLevel(const int32 ZoomLevel, const float IconSizeAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSizeGivenZoomLevel(const int32 ZoomLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSizeGivenZoomFactor(const float ZoomFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSize(const float IconSize);
    
    UFUNCTION(BlueprintCallable)
    void SetIconProperties(USizeBox* SizeBox);
    
};

