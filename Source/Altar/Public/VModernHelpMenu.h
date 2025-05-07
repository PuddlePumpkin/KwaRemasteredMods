#pragma once
#include "CoreMinimal.h"
#include "HelpEntryCategoryData.h"
#include "VLegacyPlayerSubMenuBase.h"
#include "VModernHelpMenu.generated.h"

class UDataTable;
class UHelpMenuDetailEntryData;
class UHelpMenuListEntryData;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModernHelpMenu : public UVLegacyPlayerSubMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHelpMenuListEntryData*> CategoriesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHelpMenuDetailEntryData* CurrentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataEntryLength;
    
public:
    UVModernHelpMenu();

    UFUNCTION(BlueprintCallable)
    void UpdateListData();
    
    UFUNCTION(BlueprintCallable)
    void ToggleData(UHelpMenuListEntryData* Entry, UDataTable* Tutorials);
    
    UFUNCTION(BlueprintCallable)
    void ToggleCategory(UHelpMenuListEntryData* Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowLess();
    
    UFUNCTION(BlueprintCallable)
    void ProcessTutorials(const UDataTable* Tutorials);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigateEntry(UHelpMenuListEntryData* Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListEntriesUpdated(const TArray<UHelpMenuListEntryData*>& InListData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataSelectionToggled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDetailIndexText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDataAdjustedIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateListData(const TMap<FString, FHelpEntryCategoryData>& DataPerCategory);
    
};

