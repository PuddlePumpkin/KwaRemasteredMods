#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVFadeTransitionType.h"
#include "FadeOutExtraDurationBeginDelegate.h"
#include "FadeToBlackBeginDelegate.h"
#include "FadeToBlackEndDelegate.h"
#include "FadeToGameBeginDelegate.h"
#include "FadeToGameEndDelegate.h"
#include "PostSeamlessTravelDelegate.h"
#include "VLevelChangeData.generated.h"

class AActor;
class UVAssociatedAltarCellToPrePlacedActors;
class UVLevelChangeData;
class UVLevelStreaming;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API UVLevelChangeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeToBlackBegin OnFadeToBlackBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeToBlackEnd OnFadeToBlackEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeToGameBegin OnFadeToGameBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeToGameEnd OnFadeToGameEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeOutExtraDurationBegin OnFadeOutExtraDurationBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> PersistentTravelActors;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostSeamlessTravel OnPostSeamlessTravelEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFastTravelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSeamlessTravelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UVAssociatedAltarCellToPrePlacedActors*> AltarCellToPrePlacedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVLevelStreaming> CurrentSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentSubLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* PersistentLevel;
    
    UVLevelChangeData();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateWeatherAudioTexture();
    
    UFUNCTION(BlueprintCallable)
    void ReloadSaveAfterFadeToBlack();
    
    UFUNCTION(BlueprintCallable)
    void QuickLoadSaveAfterFadeToBlack();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToGameEndEventReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToGameBeginEventReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToGameAnimationOver();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackThroughDoorOver();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackOverBeforeFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackInPlace();
    
    UFUNCTION()
    void OnFadeToBlackEndEventReceived(EVFadeTransitionType InType);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackBeginEventReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackAnimationOverSeamless();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeToBlackAnimationOverAttach();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOfFadeToBlackInPlace();
    
    UFUNCTION(BlueprintCallable)
    void GoToMainMenuAfterFadeToBlack();
    
public:
    UFUNCTION(BlueprintCallable)
    static UVLevelChangeData* GetLevelChangeData(const UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void CompleteShadowCacheRefresh() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AfterFadeToBlackFromMoveTo();
    
};

