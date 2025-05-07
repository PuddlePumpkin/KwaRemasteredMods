#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "AltarBinkMediaPlayerOnVideoCompletedDelegate.h"
#include "AltarBinkMediaPlayerOnVideoOpennedDelegate.h"
#include "VAltarBinkMediaPlayer.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UImage;
class UMaterial;
class UVAltarBinkVideoTimestampTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ALTAR_API UVAltarBinkMediaPlayer : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarBinkMediaPlayerOnVideoOpenned OnVideoOpenned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAltarBinkMediaPlayerOnVideoCompleted OnVideoCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBinkMediaTexture> Soft_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBinkMediaPlayer> Soft_MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> Soft_MediaTextureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BaseVideoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesHaveSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVAltarBinkVideoTimestampTable* SubtitleData;
    
public:
    UVAltarBinkMediaPlayer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSubtitleFadeOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartNextSubtitle();
    
public:
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
    bool OpenUrl(const FString& NewUrl);
    
    UFUNCTION(BlueprintCallable)
    bool Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopCurrentSubtitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartNextSubtitle(const FText& SubtitleText);
    
private:
    UFUNCTION(BlueprintCallable)
    void ManageSubtitle();
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Internal_OnVideoOpenned(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void Internal_OnVideoCompleted();
    
    UFUNCTION(BlueprintCallable)
    bool HaveReachedNextStartTimer() const;
    
    UFUNCTION(BlueprintCallable)
    bool HaveReachedNextEndTimer() const;
    
    UFUNCTION(BlueprintCallable)
    bool HaveReachedFadeOutTimer() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentPath() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EndCurrentSubtitle();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

