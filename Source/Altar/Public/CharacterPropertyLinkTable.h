#pragma once
#include "CoreMinimal.h"
#include "CharacterPropertyLinkTable.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCharacterPropertyLinkTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimLayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimLayerVariableName;
    
    ALTAR_API FCharacterPropertyLinkTable();
};

