#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "EVModernRichTextBlockFontSizeChannel.h"
#include "VAltarRichTextBlock.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarRichTextBlock : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVModernRichTextBlockFontSizeChannel FontSizeChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultFontSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFontSizeScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalLargeScaleDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalSmallScaleDelta;
    
public:
    UVAltarRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetWrappedAt(float NewWrappedAt);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float NewLineHeightPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 FontSizeDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFontSize(int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRichTextBlock();
    
    UFUNCTION(BlueprintCallable)
    void DeinitializeRichTextBlock();
    
};

