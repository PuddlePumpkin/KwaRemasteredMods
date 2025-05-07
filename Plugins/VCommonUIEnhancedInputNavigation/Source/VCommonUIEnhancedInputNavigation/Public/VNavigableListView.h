#pragma once
#include "CoreMinimal.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableListView.generated.h"

class UCommonListView;
class UObject;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableListView : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemHovered, UObject*, HoveredItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickReleased, UObject*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClicked, UObject*, SelectedItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemHovered OnItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClicked OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClickReleased OnItemClickReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesAllowLoopingNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavigateOnHover;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* HoveredItem;
    
public:
    UVNavigableListView();

    UFUNCTION(BlueprintCallable)
    void StopAutomaticElementNavigation();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToPrevElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToNextElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToElement(UObject* ItemToNavigateTo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ListViewIsVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetWidgetFromItem(UObject* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonListView* GetListView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetItemAt(int32 ItemIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetFocusedElement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentElementIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* ItemToAdd);
    
};

