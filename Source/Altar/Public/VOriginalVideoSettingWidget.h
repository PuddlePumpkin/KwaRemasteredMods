#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OriginalVideoOption.h"
#include "VAltarWidget.h"
#include "VOriginalVideoSettingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVOriginalVideoSettingWidget : public UVAltarWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalVideoOption> Options;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ExtremalValue;
    
public:
    UVOriginalVideoSettingWidget();

    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FOriginalVideoOption>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetExtremalValue(const FFloatInterval& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalVideoOption> GetOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLabel() const;
    
    UFUNCTION(BlueprintPure)
    FFloatInterval GetExtremalValue() const;
    
};

