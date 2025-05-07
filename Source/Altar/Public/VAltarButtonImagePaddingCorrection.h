#pragma once
#include "CoreMinimal.h"
#include "ButtonCorrectionData.h"
#include "VAltarNavigableButton.h"
#include "VAltarButtonImagePaddingCorrection.generated.h"

class UVOriginalImageTile;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVAltarButtonImagePaddingCorrection : public UVAltarNavigableButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVOriginalImageTile* ButtonImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonCorrectionData CorrectionData;
    
public:
    UVAltarButtonImagePaddingCorrection();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateButtonImageCorrectionData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCorrectionData(const FButtonCorrectionData& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCorrectionDataUpdated(const FButtonCorrectionData& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FButtonCorrectionData GetCorrectionData() const;
    
};

