#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "VAltarCameraActor.generated.h"

class UMaterial;
class UMaterialInstanceDynamic;
class UVCharacterFadeInOutComponent;

UCLASS(Blueprintable)
class AVAltarCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* ImageCalibrationMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ImageCalibrationMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* SepiaToneMenuBackgroundMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SepiaToneMenuBackgroundMID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVCharacterFadeInOutComponent* CharacterFadeInOutComponent;
    
    AVAltarCameraActor(const FObjectInitializer& ObjectInitializer);

};

