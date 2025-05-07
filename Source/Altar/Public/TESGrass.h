#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESGrassData.h"
#include "TESGrass.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESGrass : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTESGrassData Data;
    
    UTESGrass();

};

