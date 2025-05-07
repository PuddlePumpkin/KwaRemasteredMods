#pragma once
#include "CoreMinimal.h"
#include "AkPortalComponent.h"
#include "VAltarAkPortalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVAltarAkPortalComponent : public UAkPortalComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOcclusion;
    
    UVAltarAkPortalComponent(const FObjectInitializer& ObjectInitializer);

};

