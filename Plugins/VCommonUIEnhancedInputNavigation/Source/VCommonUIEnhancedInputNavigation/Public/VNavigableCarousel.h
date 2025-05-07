#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VNavigableActivatableWidgetBase.h"
#include "VNavigableCarousel.generated.h"

class UCommonWidgetCarousel;
class UPanelSlot;
class UUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VCOMMONUIENHANCEDINPUTNAVIGATION_API UVNavigableCarousel : public UVNavigableActivatableWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCyclic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveLeftDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LeftDecoratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveRightDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> RightDecoratorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetCarousel* Carousel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* LeftDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RightDecorator;
    
public:
    UVNavigableCarousel();

    UFUNCTION(BlueprintCallable)
    void NavigateToStart();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToPrevElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToNextElement();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToEnd();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToElement(UWidget* ItemToNavigateTo);
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* InsertChild(UWidget* ChildToAdd, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex(UWidget* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetItemAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetCurrentItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonWidgetCarousel* GetCarousel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesContaintItem(UWidget* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UWidget* ChildToAdd);
    
};

