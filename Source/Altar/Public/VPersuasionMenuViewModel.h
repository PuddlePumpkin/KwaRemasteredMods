#pragma once
#include "CoreMinimal.h"
#include "BribeData.h"
#include "EPersuasionMiniGamePlayState.h"
#include "EReaction.h"
#include "NpcDisposition.h"
#include "VViewModelBase.h"
#include "WheelInitializingData.h"
#include "VPersuasionMenuViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVPersuasionMenuViewModel : public UVViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBribeSoundTrigger);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBribeSoundTrigger OnSucessBribeSoundTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWheelInitializingData WheelInitializingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNpcDisposition Disposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBribeData BribeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPersuade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRotateWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPersuasionMiniGamePlayState GamePlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBribe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerGold;
    
public:
    UVPersuasionMenuViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasSpeakerAlreadyPersuaded() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWheelInitializingData(const FWheelInitializingData& NewWheelInitializingData);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerGold(int32 InNewPlayerGold);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCName(const FText& NewNpcName);
    
    UFUNCTION(BlueprintCallable)
    void SetHasGameStarted(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePlayState(EPersuasionMiniGamePlayState NewGamePlayState);
    
    UFUNCTION(BlueprintCallable)
    void SetDisposition(const FNpcDisposition& NewDisposition);
    
    UFUNCTION(BlueprintCallable)
    void SetCanRotateWheel(bool bNewCanRotateWheelValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanPersuade(bool bCanPersuadeNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBribe(bool bNewCanBribeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBribeData(FBribeData NewBirbeData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendWheelUnHovered();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendQuadrantHovered(EReaction ReactionValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSendClickOnQuandrant(int32 NewQuadrantClickedID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterClickOnStartButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterClickOnRotateButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterClickOnDoneButton();
    
    UFUNCTION(BlueprintCallable)
    void RegisterClickOnBribeButton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWheelInitializingData GetWheelInitializingData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerGold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNPCName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPersuasionMiniGamePlayState GetGamePlayState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNpcDisposition GetDisposition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBribeData GetBribeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GameHasStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRotateWheel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPersuade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBribe() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToPersuadedCharacters();
    
};

