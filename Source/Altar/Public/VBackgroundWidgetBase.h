#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "BackgroundChangedDelegateDelegate.h"
#include "VBackgroundWidgetBase.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVBackgroundWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundChangedDelegate OnBackgroundChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundImageBrush;
    
public:
    UVBackgroundWidgetBase();

    UFUNCTION(BlueprintCallable)
    void SetBackgroundImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable)
    void RequestCapture();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnScreenShotcapturedDelegate(int32 InSizeX, int32 InSizeY, const TArray<FColor>& InImageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBackgroundImageBrush() const;
    
};

