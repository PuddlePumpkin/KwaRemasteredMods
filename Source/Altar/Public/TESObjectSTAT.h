#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESObjectSTAT.generated.h"

class UAnimBlueprint;
class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectSTAT : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> PosePairingAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESObjectSTAT();

};

