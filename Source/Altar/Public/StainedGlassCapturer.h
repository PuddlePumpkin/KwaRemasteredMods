#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "StainedGlassElement.h"
#include "StainedGlassCapturer.generated.h"

class UDirectionalLightComponent;
class UMaterialParameterCollection;
class USceneCaptureComponent2D;
class UTexture2DArray;

UCLASS(Blueprintable)
class ALTAR_API AStainedGlassCapturer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDirectionalLightComponent> LightSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LightSourceForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LightSourceUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LightSourceRightVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LightRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStainedGlassElement> GlassObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2DArray* BakedGlassTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextureExportFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CaptureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageBorderOffset;
    
public:
    AStainedGlassCapturer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PrepareMaterialParameterCollection();
    
    UFUNCTION(BlueprintCallable)
    static float FindOrthoWidthForBox(FVector Extents, FRotator Rotator, float Offset);
    
    UFUNCTION(BlueprintCallable)
    void CollectSceneActors();
    
    UFUNCTION(BlueprintCallable)
    void BakeGlassTexture();
    
};

