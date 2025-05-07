#pragma once
#include "CoreMinimal.h"
#include "ELegacyRechargeMenuPage.h"
#include "EOriginalInventoryMenuSortType.h"
#include "LegacyRechargeMenuGoldProperties.h"
#include "LegacyRechargeMenuItemProperties.h"
#include "LegacyRechargeMenuSoulProperties.h"
#include "ModernRechargeMenuCharacterData.h"
#include "VViewModelBase.h"
#include "VRechargeMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVRechargeMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRechargeSoundTrigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeSoundTrigger OnSucessRechargeSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeSoundTrigger OnSucessRechargeMerchantSoundTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRechargeSoundTrigger OnSucessRechargeAllSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyRechargeMenuItemProperties> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRechargeMenuGoldProperties RechargeMenuGoldProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRechargeMenuSoulProperties RechargeMenuSoulProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRechargeMenuPage RechargeMenuPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOriginalInventoryMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenedFromQuickWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSortReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRechargeMenuCharacterData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModernRechargeMenuCharacterData MerchantData;
    
public:
    UVRechargeMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSortType(const EOriginalInventoryMenuSortType& NewSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeMenuSoulProperties(const FLegacyRechargeMenuSoulProperties& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeMenuPage(const ELegacyRechargeMenuPage& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRechargeMenuGoldProperties(const FLegacyRechargeMenuGoldProperties& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerGold(int32 NewPlayerGold);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const FModernRechargeMenuCharacterData& NewPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void SetMerchantGold(int32 NewMerchantGold);
    
    UFUNCTION(BlueprintCallable)
    void SetMerchantData(const FModernRechargeMenuCharacterData& NewMerchantData);
    
    UFUNCTION(BlueprintCallable)
    void SetItems(const TArray<FLegacyRechargeMenuItemProperties>& NewItems);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(bool bNewIsSortReversed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpenedFromQuickWheel(bool bNewIsOpenedFromQuickWheel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendHoveredItem(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRechargeAll();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedItem(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedExit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSortReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenedFromQuickWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOriginalInventoryMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRechargeMenuSoulProperties GetRechargeMenuSoulProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyRechargeMenuPage GetRechargeMenuPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRechargeMenuGoldProperties GetRechargeMenuGoldProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernRechargeMenuCharacterData GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModernRechargeMenuCharacterData GetMerchantData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRechargeMenuItemProperties> GetItems() const;
    
};

