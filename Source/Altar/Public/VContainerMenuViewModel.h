#pragma once
#include "CoreMinimal.h"
#include "ELegacyContainerMenuTab.h"
#include "ELegacyContainerMenuType.h"
#include "ELegacyInventoryMenuPage.h"
#include "EOriginalInventoryMenuSortType.h"
#include "LegacyContainerMenuButtonData.h"
#include "LegacyContainerMenuNpcData.h"
#include "OriginalInventoryMenuItemProperties.h"
#include "VInventoryMenuViewModel.h"
#include "VContainerMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVContainerMenuViewModel : public UVInventoryMenuViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayTransactionSound, const bool, bDoBuy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayOpenAnimation, const bool, bIsDelayed);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayTransactionSound OnPlayTransactionSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayOpenAnimation OnPlayOpenAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuItemProperties> ContainerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyContainerMenuButtonData ButtonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyContainerMenuNpcData NpcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyContainerMenuType MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyContainerMenuTab CurrentTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOriginalInventoryMenuItemProperties> CurrentPageItemsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyInventoryMenuPage CurrentPageContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortTypeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversedContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSimpleContainer;
    
public:
    UVContainerMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSortTypeContainer(const EOriginalInventoryMenuSortType& NewSortTypeContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcData(const FLegacyContainerMenuNpcData& NewNPCData);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuType(ELegacyContainerMenuType NewMenuType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversedContainer(bool bNewIsSortReversedContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSimpleContainer(bool bNewIsSimpleContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTab(ELegacyContainerMenuTab NewMenuTab);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPageContainer(ELegacyInventoryMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void SetContainerItems(const TArray<FOriginalInventoryMenuItemProperties>& NewContainerItems);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonData(const FLegacyContainerMenuButtonData& NewButtonData);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceCurrentPageItemsContainer(const TArray<FOriginalInventoryMenuItemProperties>& NewPageContainer);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendButtonTakeAllHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendButtonSwitchToInventoryHandler(bool ForceSwitch);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendButtonSwitchToContainerHandler(bool ForceSwitch);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendButtonHaggleHandler();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendButtonExitHandler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContainerTab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortTypeContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyContainerMenuNpcData GetNpcData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyContainerMenuType GetMenuType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSortReversedContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSimpleContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyContainerMenuTab GetCurrentTab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuItemProperties> GetCurrentPageItemsContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyInventoryMenuPage GetCurrentPageContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOriginalInventoryMenuItemProperties> GetContainerItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyContainerMenuButtonData GetButtonData() const;
    
};

