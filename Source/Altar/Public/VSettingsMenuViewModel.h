#pragma once
#include "CoreMinimal.h"
#include "ELegacySettingsMenuIDs.h"
#include "VViewModelBase.h"
#include "VSettingsMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVSettingsMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPageIndex;
    
public:
    UVSettingsMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ThisIsForPluginCompliance() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPageIndex(int32 NewPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendGameplaySaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendGameDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(ELegacySettingsMenuIDs InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBuildInfo() const;
    
};

