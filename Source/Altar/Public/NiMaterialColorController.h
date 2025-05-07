#pragma once
#include "CoreMinimal.h"
#include "EMaterialColor.h"
#include "NiPoint3InterpController.h"
#include "NiMaterialColorController.generated.h"

class UNiPosData;

UCLASS(Blueprintable)
class ALTAR_API UNiMaterialColorController : public UNiPoint3InterpController {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialColor TargetColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiPosData* Data;
    
    UNiMaterialColorController();

};

