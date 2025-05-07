#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "VModern_ColorPickerItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModern_ColorPickerItem : public UObject {
    GENERATED_BODY()
public:
    UVModern_ColorPickerItem();

    UFUNCTION(BlueprintCallable)
    void SetIsSelected(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDefaultColor(const bool& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColorOption(const FColor& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColorOption() const;
    
};

