#pragma once
#include "CoreMinimal.h"
#include "TESObject.h"
#include "VPhysicsControlSettings.h"
#include "TESBoundObject.generated.h"

class AVImpactSystemVFXBlueprint;
class AVPropItem;
class UPhysicsAsset;
class UTESModel;
class UVEnchantSaveData;

UCLASS(Blueprintable)
class ALTAR_API UTESBoundObject : public UTESObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVImpactSystemVFXBlueprint> ImpactSystemVFXBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactSystemDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingCustomPhysicsControlSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVPhysicsControlSettings PhysicsControlSettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTESModel* InheritedModel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVPropItem> PropBlueprintClassOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVEnchantSaveData* EnchantSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnchantedObject;
    
    UTESBoundObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetPropBlueprintClass() const;
    
};

