#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVDetectionLightTag.h"
#include "VDetectionLightingSubsystem.generated.h"

class AActor;
class UCurveFloat;
class ULightComponentBase;
class UVDetectionLightingProfile;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API UVDetectionLightingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkylightIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVDetectionLightingProfile* DefaultLightProfile;
    
public:
    UVDetectionLightingSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnPostWorldCreation(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnLightComponentBeginPlay(const ULightComponentBase* LightComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    static FName GetTagName(const EVDetectionLightTag& LightTag);
    
    UFUNCTION(BlueprintCallable)
    static EVDetectionLightTag GetDetectionLightTag(const AActor* LightActor);
    
};

