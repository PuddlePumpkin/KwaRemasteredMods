#pragma once
#include "CoreMinimal.h"
#include "NiPSysModifier.h"
#include "NiPSysGrowFadeModifier.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysGrowFadeModifier : public UNiPSysModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseScale;
    
    UNiPSysGrowFadeModifier();

};

