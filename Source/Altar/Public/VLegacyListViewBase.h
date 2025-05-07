#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "LegacyLVOnScrollOffsetOfEndUpdatedDelegate.h"
#include "VLegacyListViewBase.generated.h"

class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class ALTAR_API UVLegacyListViewBase : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyLVOnScrollOffsetOfEndUpdated BP_OnScrollOffsetOfEndChanged;
    
public:
    UVLegacyListViewBase();

    UFUNCTION(BlueprintCallable)
    void RequestScrollOffsetOfEndSync();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnScrollOffsetOfEndChangedInternal(float ScrollOffsetOfEnd);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetOfEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndexOfTopEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetItemFromEntryWidget(const UUserWidget* EntryWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetEntryFromItem(const UObject* Item) const;
    
};

