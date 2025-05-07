#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkGeometryData.h"
#include "AkGeometrySurfaceOverride.h"
#include "AkMeshType.h"
#include "AkGeometryComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGeometryComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeldingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDiffraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableDiffractionOnBoundaryEdges;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    AActor* AssociatedRoom;
    
private:
    UPROPERTY()
    FAkGeometryData GeometryData;
    
    UPROPERTY()
    TMap<int32, double> SurfaceAreas;
    
public:
    UAkGeometryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGeometry();
    
    UFUNCTION(BlueprintCallable)
    void SendGeometry();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometry();
    
    UFUNCTION(BlueprintCallable)
    void ConvertMesh();
    
};

