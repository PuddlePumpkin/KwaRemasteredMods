#pragma once
#include "CoreMinimal.h"
#include "SkillsMenuItemProperties.h"
#include "SkillsMenuProperties.h"
#include "VViewModelBase.h"
#include "VSkillsMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSkillsMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillsMenuItemProperties> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillsMenuProperties Properties;
    
public:
    UVSkillsMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateListAfterItemSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemSelection(int32 ItemIndex, bool bNewSelectionState);
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(const FSkillsMenuProperties& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetItems(const TArray<FSkillsMenuItemProperties>& Data);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendMultipleClicksDone(int32 NumberOfClicksToEmulate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendMultipleClicksBack(int32 NumberOfClicksToEmulate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendCustomClassName(const FText& NewClassName);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedItem(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedDone();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSkillsMenuProperties GetProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSkillsMenuItemProperties> GetItems() const;
    
};

