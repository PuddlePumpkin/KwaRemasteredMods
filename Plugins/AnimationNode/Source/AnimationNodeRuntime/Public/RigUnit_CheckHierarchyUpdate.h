#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "RigUnit_CheckHierarchyUpdate.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_CheckHierarchyUpdate : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FRigUnit_CheckHierarchyUpdate();
};

