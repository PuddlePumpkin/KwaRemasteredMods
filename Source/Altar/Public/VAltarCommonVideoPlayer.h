#pragma once
#include "CoreMinimal.h"
#include "CommonVideoPlayer.h"
#include "AltarOnMediaOpenedDelegate.h"
#include "AltarOnPlaybackCompleteDelegate.h"
#include "VAltarCommonVideoPlayer.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarCommonVideoPlayer : public UCommonVideoPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarOnMediaOpened AltarOnMediaOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarOnPlaybackComplete AltarOnPlaybackComplete;
    
    UVAltarCommonVideoPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMediaOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLooping(bool bShouldLoopPlayback);
    
    UFUNCTION(BlueprintCallable)
    void BP_Seek(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    void BP_PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_Play();
    
    UFUNCTION(BlueprintCallable)
    void BP_Pause();
    
    UFUNCTION(BlueprintCallable)
    void BP_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_Close();
    
};

