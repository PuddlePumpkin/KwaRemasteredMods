#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterLayerLinkTable.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCharacterLayerLinkTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StructName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> LayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimLayerVariableName;
    
    ALTAR_API FCharacterLayerLinkTable();
};

