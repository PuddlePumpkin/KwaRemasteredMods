#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QMPUIBPLibrary.generated.h"

class UButton;
class UCommonButtonBase;
class UUserWidget;

UCLASS(Blueprintable)
class QMPLINK_API UQMPUIBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQMPUIBPLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void QMPSendSpecialGamepadUIEventCommonUI(UCommonButtonBase* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    static void QMPSendSpecialGamepadUIEvent(UButton* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    static void QMPReleaseUIEvent(UUserWidget* WidgetPtr);
    
    UFUNCTION(BlueprintCallable)
    static void QMPReleaseDynamicButton(const FString& ButtonKey);
    
    UFUNCTION(BlueprintCallable)
    static void QMPLinkDynamicCommonButton(UCommonButtonBase* NewWidget, const FString& ButtonKey);
    
    UFUNCTION(BlueprintCallable)
    static void QMPLinkDynamicButton(UButton* NewWidget, const FString& ButtonKey);
    
    UFUNCTION(BlueprintCallable)
    static void QMPBindUIEvent(UUserWidget* WidgetPtr);
    
};

