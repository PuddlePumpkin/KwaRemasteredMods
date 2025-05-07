#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "NodeSet.generated.h"

class UNiNode;

UCLASS(Blueprintable)
class ALTAR_API UNodeSet : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiNode*> Nodes;
    
    UNodeSet();

};

