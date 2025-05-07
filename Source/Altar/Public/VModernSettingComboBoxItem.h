#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VModernSettingComboBoxItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModernSettingComboBoxItem : public UObject {
    GENERATED_BODY()
public:
    UVModernSettingComboBoxItem();

    UFUNCTION(BlueprintCallable)
    void SetOption(const FText& NewOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetOption() const;
    
};

