#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESAmmo.generated.h"

class AVActor;
class AVAmmunition;
class UStaticMesh;
class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESAmmo : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewQuiverMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVActor> EquipableBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVAmmunition> FiredAmmoBlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoMass;
    
    UTESAmmo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UStaticMesh> GetQuiverStaticMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UStaticMesh> GetProjectileStaticMesh();
    
};

