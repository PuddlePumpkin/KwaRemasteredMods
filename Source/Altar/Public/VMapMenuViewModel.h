#pragma once
#include "CoreMinimal.h"
#include "ELegacyMapMenuPage.h"
#include "EVFadeTransitionType.h"
#include "InputText.h"
#include "LegacyMapMenuQuestProperties.h"
#include "LegacyMapMenuTitleProperties.h"
#include "VViewModelBase.h"
#include "VMapMenuViewModel.generated.h"

class UVMapPageViewModel;

UCLASS(Blueprintable)
class ALTAR_API UVMapMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELegacyMapMenuPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMapMenuTitleProperties TitleProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMapMenuQuestProperties> Quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLegacyMapMenuQuestProperties> QuestHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyMapMenuQuestProperties ActiveQuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMapPageViewModel* LocalMapMenuViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVMapPageViewModel* WorldMapMenuViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FInputText> IconSelectionMap;
    
public:
    UVMapMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetTitleProperties(const FLegacyMapMenuTitleProperties& NewTitleProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetQuests(const TArray<FLegacyMapMenuQuestProperties>& NewQuests);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestHistory(const TArray<FLegacyMapMenuQuestProperties>& NewQuestHistory);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(const ELegacyMapMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveQuestData(const FLegacyMapMenuQuestProperties& NewActiveQuestData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCurrentPageUpdatedHandler(const ELegacyMapMenuPage NewPage);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedQuestCompleted(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedQuest(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedMap();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedDetailedQuest(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCurrentQuestHistory(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedBack();
    
    UFUNCTION(BlueprintCallable)
    void HideMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVMapPageViewModel* GetWorldMapMenuViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuTitleProperties GetTitleProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMapMenuQuestProperties> GetQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FLegacyMapMenuQuestProperties> GetQuestHistory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVMapPageViewModel* GetLocalMapMenuViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELegacyMapMenuPage GetCurrentPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyMapMenuQuestProperties GetActiveQuestData() const;
    
    UFUNCTION()
    void DelayFastTravelRequestUntilFadeEnd(EVFadeTransitionType InFadeTransitionType);
    
};

