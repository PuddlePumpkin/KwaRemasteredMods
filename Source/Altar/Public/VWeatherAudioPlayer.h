#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VAudioPlayable.h"
#include "WeatherSlice.h"
#include "WeatherTextureUpdatedDelegate.h"
#include "VWeatherAudioPlayer.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWeatherAudioPlayer : public AActor, public IVAudioPlayable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice OblivionStormSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice RainCitySlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice RainFoliageSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice RainOpenSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice SnowSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice ThunderstormSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice WindFoliageSlice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherSlice WindOpenSlice;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherTextureUpdated WeatherTextureUpdatedEvent;
    
    AVWeatherAudioPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWindIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetThunderstormIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetRainIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetOblivionStormIntensity(float Intensity);
    

    // Fix for true pure virtual functions not being implemented
};

