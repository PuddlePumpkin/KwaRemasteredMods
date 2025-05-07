#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "GameFramework/Actor.h"
#include "VAudioPlayable.h"
#include "VMusicPlayer.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;

UCLASS(Blueprintable)
class ALTAR_API AVMusicPlayer : public AActor, public IVAudioPlayable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResumeMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
public:
    AVMusicPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayMainMenuMusic();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMusicSuccessEnded(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadStarted();
    

    // Fix for true pure virtual functions not being implemented
};

