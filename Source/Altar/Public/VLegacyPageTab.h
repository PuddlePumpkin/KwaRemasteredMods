#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "OnTabClickedDelegate.h"
#include "VAltarWidget.h"
#include "VLegacyPageTab.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyPageTab : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabClicked OnTabClickedCallback;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSelected;
    
public:
    UVLegacyPageTab();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerTabClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBrush(const FSlateBrush& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsSelectedUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIconUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetIconBrush() const;
    
};

