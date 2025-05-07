#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "BasicUINavigation.h"
#include "NavigationUIElement.h"
#include "NavigationScrollbox.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNavigationScrollbox : public UScrollBox, public INavigationUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRememberNavigationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicUINavigation BasicUINavigation;
    
public:
    UNavigationScrollbox();


    // Fix for true pure virtual functions not being implemented
};

