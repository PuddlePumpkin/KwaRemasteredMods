#pragma once
#include "CoreMinimal.h"
#include "TESBoundAnimObject.h"
#include "TESObjectCONT.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectCONT : public UTESBoundAnimObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESObjectCONT();

};

