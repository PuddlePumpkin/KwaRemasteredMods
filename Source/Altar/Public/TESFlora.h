#pragma once
#include "CoreMinimal.h"
#include "TESObjectACTI.h"
#include "TESFlora.generated.h"

class UStreamableRenderAsset;

UCLASS(Blueprintable)
class ALTAR_API UTESFlora : public UTESObjectACTI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> NewMesh;
    
    UTESFlora();

};

