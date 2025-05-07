#pragma once
#include "CoreMinimal.h"
#include "VAltarMenu.h"
#include "VFadeWidget.generated.h"

class UImage;
class UVAltarWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVFadeWidget : public UVAltarMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FadeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVAltarWidget* LoadingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeAnimation;
    
    UVFadeWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFadeAnimationBegin();
    
};

