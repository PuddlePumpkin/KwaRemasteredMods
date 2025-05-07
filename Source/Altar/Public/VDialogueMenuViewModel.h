#pragma once
#include "CoreMinimal.h"
#include "LegacyDialogMenuButtonVisibility.h"
#include "ResponsesData.h"
#include "VViewModelBase.h"
#include "VDialogueMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVDialogueMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResponsesData> Responses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyDialogMenuButtonVisibility ButtonsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpeakerName;
    
public:
    UVDialogueMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedTrainingIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedSpellBarterIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedSkip();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedResponse(int32 ResponseIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRepairingIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedRechargingIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedPersuasionIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedCloseIcon();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedBarterIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubtitleVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitleVisibilityCVarSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubtitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSpeakerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FResponsesData> GetResponses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLegacyDialogMenuButtonVisibility GetButtonsVisibility() const;
    
};

