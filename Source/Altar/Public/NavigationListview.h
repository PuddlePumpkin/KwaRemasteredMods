#pragma once
#include "CoreMinimal.h"
#include "BasicUINavigation.h"
#include "NavigationUIElement.h"
#include "VLegacyListViewBase.h"
#include "NavigationListview.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class ALTAR_API UNavigationListview : public UVLegacyListViewBase, public INavigationUIElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicUINavigation BasicUINavigation;
    
public:
    UNavigationListview();

    UFUNCTION(BlueprintCallable)
    void OnEntryClicked(UObject* Item);
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<INavigationUIElement> NavigateToItemIndex(int32 SelectedChildIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildIndexFromWidget(UWidget* NavigatableWidget) const;
    

    // Fix for true pure virtual functions not being implemented
};

