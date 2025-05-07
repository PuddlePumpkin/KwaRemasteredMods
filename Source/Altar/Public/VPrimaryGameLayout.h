#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "VPrimaryGameLayout.generated.h"

class APlayerController;
class UBackgroundBlur;
class UCommonActivatableWidget;
class UVActivatableWidgetStack;
class UVBackgroundWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVPrimaryGameLayout : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTopmostWidgetUpdated, const FGameplayTag&, LayerTag, UCommonActivatableWidget*, TopMostWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTopmostWidgetUpdated OnTopmostWidgetUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* Blur;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UVActivatableWidgetStack*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> LayersTagStack;
    
public:
    UVPrimaryGameLayout();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FName SuspendInputForPlayer(APlayerController* PlayerController, FName SuspendReason);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResumeInputForPlayer(APlayerController* PlayerController, FName SuspendToken);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UVActivatableWidgetStack* LayerWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayerActive(const FGameplayTag& LayerTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UVBackgroundWidgetBase* GetBackgroundWidget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndLayersRegistration();
    
};

