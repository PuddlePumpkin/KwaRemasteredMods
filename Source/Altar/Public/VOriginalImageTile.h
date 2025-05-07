#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "HoverDelegateDelegate.h"
#include "ImageCorrectionData.h"
#include "MouseEventDelegateDelegate.h"
#include "UnhoverDelegateDelegate.h"
#include "VOriginalImageTile.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVOriginalImageTile : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoverDelegate OnHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnhoverDelegate OnUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseEventDelegate OnMouseButtonDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseEventDelegate OnMouseButtonUpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseEventDelegate OnMouseMoveDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixPowerOfTwoOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OriginalImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesHandledMouseEvent;
    
public:
    UVOriginalImageTile();

    UFUNCTION(BlueprintCallable)
    void SetOriginalImageSize(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFixPowerOfTwoOffsets(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCorrectionData(const FImageCorrectionData& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOriginalImageSizeUpdated(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFixPowerOfTwoOffsetsUpdated(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCorrectionDataUpdated(const FImageCorrectionData& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBrushUpdated(const FSlateBrush& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetFixedOffsetPowerOfTwo(const FImageCorrectionData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FImageCorrectionData GetCorrectionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCeilPowerOfTwo(int32 Value);
    
};

