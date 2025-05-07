#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VAudioListener.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAudioListener : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCameraOrientation;
    
    UVAudioListener(const FObjectInitializer& ObjectInitializer);

};

