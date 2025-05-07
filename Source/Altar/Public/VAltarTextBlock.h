#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "EVModernTextBlockFontSizeChannel.h"
#include "VAltarTextBlock.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarTextBlock : public UCommonTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVModernTextBlockFontSizeChannel FontSizeChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFontSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFontSizeScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalLargeScaleDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalSmallScaleDelta;
    
public:
    UVAltarTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 FontSizeDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(float NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFontSizeDelta();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTextBlock();
    
    UFUNCTION(BlueprintCallable)
    void DeinitializeTextBlock();
    
};

