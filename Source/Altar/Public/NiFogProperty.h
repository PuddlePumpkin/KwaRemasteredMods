#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FogFlags.h"
#include "NiProperty.h"
#include "NiFogProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiFogProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFogFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fog_Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Fog_Color;
    
    UNiFogProperty();

};

