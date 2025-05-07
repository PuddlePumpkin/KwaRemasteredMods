#pragma once
#include "CoreMinimal.h"
#include "ELegacySpellPurchaseMenuSortType.h"
#include "LegacySpellPurchaseMenuItemProperties.h"
#include "LegacySpellPurchaseMenuNPCData.h"
#include "VViewModelBase.h"
#include "VSpellPurchaseMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSpellPurchaseMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacySpellPurchaseMenuItemProperties> SpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacySpellPurchaseMenuSortType SortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSortReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacySpellPurchaseMenuNPCData NpcData;
    
public:
    UVSpellPurchaseMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSortType(const ELegacySpellPurchaseMenuSortType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerName(const FText& NewPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMoney(int32 NewPlayerMoney);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcData(const FLegacySpellPurchaseMenuNPCData& NewNPCData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSortReversed(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendSpellItemClicked(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendItemHoverHandler(int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendHaggleButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacySpellPurchaseMenuItemProperties> GetSpellList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacySpellPurchaseMenuSortType GetSortType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacySpellPurchaseMenuNPCData GetNpcData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSortReversed() const;
    
};

