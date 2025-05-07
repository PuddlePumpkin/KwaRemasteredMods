#pragma once
#include "CoreMinimal.h"
#include "LightingMode.h"
#include "NiProperty.h"
#include "SourceVertexMode.h"
#include "VertexColorFlags.h"
#include "NiVertexColorProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiVertexColorProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexColorFlags Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    SourceVertexMode VertexMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    LightingMode LightMode;
    
    UNiVertexColorProperty();

};

