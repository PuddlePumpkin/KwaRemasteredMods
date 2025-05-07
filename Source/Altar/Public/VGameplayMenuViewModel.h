#pragma once
#include "CoreMinimal.h"
#include "ELegacyGameplayMenuIDs.h"
#include "VViewModelBase.h"
#include "VGameplayMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVGameplayMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GeneralSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DialogSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Crosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveOnRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveOnWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveOnTravel;
    
public:
    UVGameplayMenuViewModel();

    UFUNCTION(BlueprintCallable)
    void SetSaveOnWait(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveOnTravel(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveOnRest(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGeneralSubtitles(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogSubtitles(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCrosshair(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickedButton(ELegacyGameplayMenuIDs InButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveOnWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveOnTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveOnRest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGeneralSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDialogSubtitles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrosshair() const;
    
};

