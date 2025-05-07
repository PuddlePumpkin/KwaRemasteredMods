#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkSurfacePoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSurfaceReflectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAkSurfacePoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDiffraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDiffractionOnBoundaryEdges;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    AActor* AssociatedRoom;
    
    UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
};

