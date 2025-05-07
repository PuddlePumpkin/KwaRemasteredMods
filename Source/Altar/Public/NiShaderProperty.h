#pragma once
#include "CoreMinimal.h"
#include "NiProperty.h"
#include "ShaderFlags.h"
#include "NiShaderProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiShaderProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ShaderFlags Flags;
    
    UNiShaderProperty();

};

