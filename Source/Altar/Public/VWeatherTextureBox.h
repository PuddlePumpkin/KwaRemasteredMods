#pragma once
#include "CoreMinimal.h"
#include "EVWeatherTexture.h"
#include "VAudioTriggerBox.h"
#include "VWeatherTextureBox.generated.h"

UCLASS(Blueprintable)
class ALTAR_API AVWeatherTextureBox : public AVAudioTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVWeatherTexture WeatherTextureInside;
    
    AVWeatherTextureBox(const FObjectInitializer& ObjectInitializer);

};

