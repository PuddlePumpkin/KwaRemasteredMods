#pragma once
#include "CoreMinimal.h"
#include "EVBloodColor.h"
#include "TESActorBase.h"
#include "TESCreature.generated.h"

class UAnimBlueprint;
class UStreamableRenderAsset;
class UTESModelList;

UCLASS(Blueprintable)
class ALTAR_API UTESCreature : public UTESActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> AnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVBloodColor BloodColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTESModelList* InheritedModelList;
    
    UTESCreature();

};

