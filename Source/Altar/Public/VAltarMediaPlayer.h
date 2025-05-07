#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AltarMediaPlayerOnVideoCompletedDelegate.h"
#include "AltarMediaPlayerOnVideoOpennedDelegate.h"
#include "VAltarMediaPlayer.generated.h"

class UImage;
class UMaterial;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVAltarMediaPlayer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarMediaPlayerOnVideoOpenned OnVideoOpenned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarMediaPlayerOnVideoCompleted OnVideoCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaTexture> Soft_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaPlayer> Soft_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> Soft_MediaTextureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> Soft_MediaSource;
    
public:
    UVAltarMediaPlayer();

    UFUNCTION(BlueprintCallable)
    bool Seek(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    bool Prepare();
    
    UFUNCTION(BlueprintCallable)
    bool PlayFromTimeStamp(float Timestamp);
    
    UFUNCTION(BlueprintCallable)
    bool PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool Open();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenned();
    
private:
    UFUNCTION(BlueprintCallable)
    void Internal_OnVideoOpenned(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnVideoCompleted();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

