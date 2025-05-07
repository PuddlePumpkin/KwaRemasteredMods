#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedDelegate.h"
#include "VAltarWidget.h"
#include "VModernMessageMenuSpecific.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernMessageMenuSpecific : public UVAltarWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClicked OnButtonClicked;
    
    UVModernMessageMenuSpecific();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTitle(const FText& InNewTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMessage(const FText& InNewMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtons(const TArray<FText>& InNewButtonData);
    
};

