#pragma once
#include "CoreMinimal.h"
#include "CharacterFaceMorphAxis.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FCharacterFaceMorphAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NegativeMorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PositiveMorphTargetName;
    
    FCharacterFaceMorphAxis();
};

