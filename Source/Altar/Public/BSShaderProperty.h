#pragma once
#include "CoreMinimal.h"
#include "BSShaderFlags1.h"
#include "BSShaderFlags2.h"
#include "BSShaderType.h"
#include "NiShaderProperty.h"
#include "BSShaderProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UBSShaderProperty : public UNiShaderProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    BSShaderType ShaderType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    BSShaderFlags1 ShaderFlags1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    BSShaderFlags2 ShaderFlags2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentMapScale;
    
    UBSShaderProperty();

};

