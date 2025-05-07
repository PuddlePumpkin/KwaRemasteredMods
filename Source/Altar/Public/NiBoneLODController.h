#pragma once
#include "CoreMinimal.h"
#include "NiTimeController.h"
#include "NiBoneLODController.generated.h"

class UNodeSet;

UCLASS(Blueprintable)
class ALTAR_API UNiBoneLODController : public UNiTimeController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LOD;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumLODs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumNodeGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNodeSet*> NodeGroups;
    
    UNiBoneLODController();

};

