#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELegacyRaceSexMenuPage.h"
#include "ELegacyRaceSexMenuToggleType.h"
#include "EModernRaceSexPage.h"
#include "EVFadeTransitionType.h"
#include "LegacyRaceSexMenuButtonProperties.h"
#include "LegacyRaceSexMenuRaceProperties.h"
#include "LegacyRaceSexMenuTableRow.h"
#include "LegacyRaceSexMenuToggleProperties.h"
#include "ModernRaceSexMenuArchetypeProperties.h"
#include "ModernRaceSexMenuColorProperties.h"
#include "OnColorPickerChangedDelegate.h"
#include "OnNameSetDelegate.h"
#include "OnResetRequestedDelegate.h"
#include "PlayerNamePair.h"
#include "RaceSexMenuPhenotypeData.h"
#include "VRaceDataRows.h"
#include "VViewModelBase.h"
#include "VRaceSexMenuViewModel.generated.h"

class UMaterialInterface;
class UScrollBox;
class UTESRace;
class UUserWidget;
class UVActorValuesPairingComponent;
class UVCharacterHairPieceBase;
class UVPhenotypeCustomizationSession;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class ALTAR_API UVRaceSexMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColorPickerChanged OnColorPickerChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNameSet OnNameSetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetRequested OnResetRequestedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNameLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVPhenotypeCustomizationSession* PlayerCustomizationSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyRaceSexMenuPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModernRaceSexMenuArchetypeProperties> ArchetypesProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentRace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RaceDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNamePair PlayerNameLocalizationPair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVActorValuesPairingComponent* CurrentActorStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentHairName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSexMenuPhenotypeData PhenotypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaceSexMenuPhenotypeData SyncedPhenotypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyRaceSexMenuTableRow> CommonCharacterModifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyRaceSexMenuRaceProperties> RaceModificationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVRaceDataRows> RaceRowDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELegacyRaceSexMenuPage> PageHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTESRace*> RacesPtrArray;
    
public:
    UVRaceSexMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateWidgetPhenotypeData(bool bHardReset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRaceSexArchetype(FText NewRaceDescription, int32 RaceIndex, int32 SexIndex, int32 ArchetypeIndex, UTESRace* TESRacePtr, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhenotypeValue(const FName& ValueType, float Value, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMorphTarget(FName TargetName, float TargetValue, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHair(const UVCharacterHairPieceBase* HairPiece, int32 CustomisationIndex, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEyeColor(UMaterialInterface* EyeMaterial, int32 CustomisationIndex, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomisationTarget(const FLegacyRaceSexMenuToggleProperties& Property, int32 OptionIndex, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateColorTarget(const FName& ValueType, const FColor& TargetValue, bool bUpdateCharacter);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArchetype(int32 ArchetypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SyncCharacterWithModel();
    
    UFUNCTION(BlueprintCallable)
    void SilentSetCurrentRace(const FString& NewRace);
    
    UFUNCTION(BlueprintCallable)
    void SetSave();
    
    UFUNCTION(BlueprintCallable)
    void SetRaceDescription(const FText& NewRaceDescription);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNameLocalizationPair(const FPlayerNamePair& NewNamePair);
    
    UFUNCTION(BlueprintCallable)
    void SetPhenotypeData(const FRaceSexMenuPhenotypeData& NewPhenotypeData);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSex(const int32& NewSex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRaceWithForceUpdate(const FString& NewRace);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRace(const FString& NewRace);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(ELegacyRaceSexMenuPage NewCurrentPage);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHairName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentArchetype(const int32& NewArchetype);
    
    UFUNCTION(BlueprintCallable)
    void SetArchetypesProperties(const TArray<FModernRaceSexMenuArchetypeProperties>& NewArchetypesProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetActorStatsWrapper();
    
    UFUNCTION(BlueprintCallable)
    void SetActorStats(UVActorValuesPairingComponent* NewCurrentActorStats);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToPreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestQuitDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void RequestColorPicker(bool bShouldShow, UUserWidget* Caller, const FModernRaceSexMenuColorProperties& Properties);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendDoneButtonHandler();
    
    UFUNCTION(BlueprintCallable)
    void Random();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRaceSexMenuToggleProperties ParseToggleProperties(const FLegacyRaceSexMenuToggleProperties& TableProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRaceSexMenuButtonProperties ParseButtonProperties(const FLegacyRaceSexMenuButtonProperties& TableProperties);
    
    UFUNCTION(BlueprintCallable)
    void OnResetRefreshEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericPageScrollboxValid(const FName& CategoryKey, UScrollBox* ScrollBox) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRaceSexMenuTableRow GetToggleTableRowDataFromCommon(ELegacyRaceSexMenuToggleType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRaceSexMenuPhenotypeData GetSyncedPhenotypeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRaceSexMenuTableRow GetSliderTableRowDataFromCommon(const FName& MorphTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRaceSexMenuTableRow> GetRaceTableRows(const FString& RaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyRaceSexMenuRaceProperties GetRaceModificationProperties(const FString& RaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRaceSexMenuTableRow> GetRaceModificationItemsProperties(const FString& RaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRaceId(const FString& RaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRaceDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerNamePair GetPlayerNameLocalizationPair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRaceSexMenuPhenotypeData GetPhenotypeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FText> GetPagesOfCategory(const EModernRaceSexPage& CurrentPageToAnalyse) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyRaceSexMenuPage GetCurrentPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentHairName() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentHairIndex(bool bHardReset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentArchetype() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRaceSexMenuTableRow> GetCommonCharacterModifications() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FModernRaceSexMenuArchetypeProperties> GetArchetypesProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyRaceSexMenuRaceProperties> GetAllRaceModificationProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVActorValuesPairingComponent* GetActorStats() const;
    
    UFUNCTION()
    void CloseMenu(EVFadeTransitionType Type);
    
};

