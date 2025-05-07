#pragma once
#include "CoreMinimal.h"
#include "LegacyScrollbarValueProperties.h"
#include "VViewModelBase.h"
#include "VQuantityMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVQuantityMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyScrollbarValueProperties ScrollbarProperties;
    
public:
    UVQuantityMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSelectedValue(float NewSelectedValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarProperties(const FLegacyScrollbarValueProperties& NewScrollbarProperties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOnOkay(float Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedOnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSelectedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyScrollbarValueProperties GetScrollbarProperties() const;
    
};

