#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class AActor;
class UAkAcousticTextureSetComponent;
class UAkAudioEvent;
class UAkRoomComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkBeginOverlapAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AkEndOverlapAudioEvent;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreVolumeExtensionCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AuxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableReverbZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ParentRoomActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ParentRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransitionRegionWidth;
    
private:
    UPROPERTY(Instanced, Transient)
    UAkAcousticTextureSetComponent* GeometryComponent;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UAkRoomComponent> ParentRoom;
    
public:
    UAkRoomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTransitionRegionWidth(float InTransitionRegionWidth);
    
    UFUNCTION(BlueprintCallable)
    void UpdateParentRoomActor(AActor* InParentRoomActor);
    
    UFUNCTION(BlueprintCallable)
    void SetTransmissionLoss(float InTransmissionLoss);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbZone(const UAkRoomComponent* InParentRoom, float InTransitionRegionWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableReverbZone(bool bInEnableReverbZone);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamic(bool bInDynamic);
    
    UFUNCTION(BlueprintCallable)
    void SetAuxSendLevel(float InAuxSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReverbZone();
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetPrimitiveParent() const;
    
};

