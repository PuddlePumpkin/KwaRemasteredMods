#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "BasicUINavigation.h"
#include "NavigationUIElement.h"
#include "NavigationButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UNavigationButton : public UCommonButtonBase, public INavigationUIElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicUINavigation BasicUINavigation;
    
public:
    UNavigationButton();


    // Fix for true pure virtual functions not being implemented
};

