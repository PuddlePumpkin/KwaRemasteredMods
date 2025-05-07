#pragma once
#include "CoreMinimal.h"
#include "VAltarWidget.h"
#include "VLegacyValueSwitcher.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyValueSwitcher : public UVAltarWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
public:
    UVLegacyValueSwitcher();

private:
    UFUNCTION(BlueprintCallable)
    void SwitchToPreviousOption();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToNextOption();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FText>& Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedValueUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSelectedValue();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetOptions();
    
};

