#pragma once
#include "CoreMinimal.h"
#include "LegacyQuickKeysActionBinding.h"
#include "VAltarMenu.h"
#include "VLegacyQuickKeysMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyQuickKeysMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyQuickKeysActionBinding> ActionBindings;
    
public:
    UVLegacyQuickKeysMenu();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PressedButton(int32 Index);
    
};

