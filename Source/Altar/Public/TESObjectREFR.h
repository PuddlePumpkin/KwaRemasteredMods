#pragma once
#include "CoreMinimal.h"
#include "OBJ_REFR.h"
#include "TESForm.h"
#include "TESObjectREFR.generated.h"

class UTESCell;

UCLASS(Blueprintable)
class ALTAR_API UTESObjectREFR : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOBJ_REFR Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESCell* ParentCell;
    
    UTESObjectREFR();

};

