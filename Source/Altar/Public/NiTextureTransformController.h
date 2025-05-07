#pragma once
#include "CoreMinimal.h"
#include "ETexType.h"
#include "ETransformMember.h"
#include "NiFloatInterpController.h"
#include "NiTextureTransformController.generated.h"

class UNiFloatData;

UCLASS(Blueprintable)
class ALTAR_API UNiTextureTransformController : public UNiFloatInterpController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShaderMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETexType TextureSlot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransformMember Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiFloatData* Data;
    
    UNiTextureTransformController();

};

