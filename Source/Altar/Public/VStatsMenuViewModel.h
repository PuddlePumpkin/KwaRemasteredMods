#pragma once
#include "CoreMinimal.h"
#include "ELegacyStatsMenuPage.h"
#include "ELegacyStatsMenuPage2Items.h"
#include "LegacyStatsMenuFactionProperties.h"
#include "LegacyStatsMenuLevelProgression.h"
#include "LegacyStatsMenuMiscItemProperties.h"
#include "LegacyStatsMenuPlayerInfo.h"
#include "LegacyStatsMenuPopupContent.h"
#include "LegacyStatsMenuPrimaryAttributeValues.h"
#include "LegacyStatsMenuSecondaryAttribute.h"
#include "LegacyStatsMenuSkillItemProperties.h"
#include "LegacyStatsMenuSkillItemUpdatableProperties.h"
#include "VViewModelBase.h"
#include "VStatsMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVStatsMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuPlayerInfo PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyStatsMenuPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuPopupContent PopupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyStatsMenuMiscItemProperties> MiscItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyStatsMenuFactionProperties> Factions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuLevelProgression LevelProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuSkillItemUpdatableProperties SkillItemUpdatableProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyStatsMenuSkillItemProperties> SkillItemProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute> SecondaryAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuPrimaryAttributeValues Fatigue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuPrimaryAttributeValues Magicka;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyStatsMenuPrimaryAttributeValues Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreDetailsDisplayed;
    
public:
    UVStatsMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateOneSkillItemProperties(const int32 Index, const FLegacyStatsMenuSkillItemUpdatableProperties& NewSkillItemProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillItemUpdatableProperties(const FLegacyStatsMenuSkillItemUpdatableProperties& NewSkillItemUpdatableProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillItemProperties(const TArray<FLegacyStatsMenuSkillItemProperties>& NewSkillItemProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryAttributes(const TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute>& NewAttributes);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryAttribute(const ELegacyStatsMenuPage2Items Item, const FLegacyStatsMenuSecondaryAttribute& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPopupContent(const FLegacyStatsMenuPopupContent& NewPopUpContent);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInfo(const FLegacyStatsMenuPlayerInfo& NewPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetMiscItems(const TArray<FLegacyStatsMenuMiscItemProperties>& NewMiscItems);
    
    UFUNCTION(BlueprintCallable)
    void SetMagicka(const FLegacyStatsMenuPrimaryAttributeValues& NewMagicka);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelProgression(const FLegacyStatsMenuLevelProgression& NewLevelProgression);
    
    UFUNCTION(BlueprintCallable)
    void SetHealth(const FLegacyStatsMenuPrimaryAttributeValues& NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void SetFatigue(const FLegacyStatsMenuPrimaryAttributeValues& NewFatigue);
    
    UFUNCTION(BlueprintCallable)
    void SetFactions(const TArray<FLegacyStatsMenuFactionProperties>& NewFactions);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(const ELegacyStatsMenuPage& NewCurrentPage);
    
    UFUNCTION(BlueprintCallable)
    void SetAreDetailsDisplayed(bool NewAreDetailsDisplayed);
    
    UFUNCTION(BlueprintCallable)
    void ResetHoverData();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendHoverOnItemHandler(ELegacyStatsMenuPage Page, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuSkillItemUpdatableProperties GetSkillItemUpdatableProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyStatsMenuSkillItemProperties> GetSkillItemProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ELegacyStatsMenuPage2Items, FLegacyStatsMenuSecondaryAttribute> GetSecondaryAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuPopupContent GetPopUpContent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuPlayerInfo GetPlayerInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyStatsMenuMiscItemProperties> GetMiscItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuPrimaryAttributeValues GetMagicka() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuLevelProgression GetLevelProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuPrimaryAttributeValues GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyStatsMenuPrimaryAttributeValues GetFatigue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyStatsMenuFactionProperties> GetFactions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyStatsMenuPage GetCurrentPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreDetailsDisplayed() const;
    
};

