#pragma once
#include "CoreMinimal.h"
#include "ELegacyInventoryMenuPage.h"
#include "EOriginalInventoryMenuSortType.h"
#include "LegacyInventoryMenuExtraData.h"
#include "OriginalInventoryMenuItemProperties.h"
#include "VViewModelBase.h"
#include "VInventoryMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVInventoryMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractWithItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractWithItem OnInteractWithItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyInventoryMenuExtraData ExtraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortTypeInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuItemProperties> CurrentPageItemsInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuItemProperties> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyInventoryMenuPage CurrentPageInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsListViewHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockBackAction;
    
public:
    UVInventoryMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSortTypeInventory(const EOriginalInventoryMenuSortType& NewSortTypeInventory);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversedInventory(bool bNewIsSortReversedInventory);
    
    UFUNCTION(BlueprintCallable)
    void SetIsListViewHovered(bool bNewIsListViewHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetInventory(const TArray<FOriginalInventoryMenuItemProperties>& InventoryItems);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraData(const FLegacyInventoryMenuExtraData& NewExtraData);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPageInventory(ELegacyInventoryMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockBackAction(bool bNewBlockBackAction);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentPageItemsInventory(const TArray<FOriginalInventoryMenuItemProperties>& NewPageInventory);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendItemHoverHandler(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendDropItemHandler(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendDropAndHoldItemHandler(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendDropAllItemHandler(int32 ItemIndex, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnItemHandler(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortTypeInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSortReversedInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsListViewHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuItemProperties> GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyInventoryMenuExtraData GetExtraData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuItemProperties> GetCurrentPageItemsInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyInventoryMenuPage GetCurrentPageInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBlockBackAction() const;
    
};

