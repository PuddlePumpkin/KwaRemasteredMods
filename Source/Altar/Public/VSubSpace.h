#pragma once
#include "CoreMinimal.h"
#include "VActor.h"
#include "VSubSpace.generated.h"

class UVSubSpaceComponent;
class UVTESObjectRefComponent;

UCLASS(Blueprintable)
class ALTAR_API AVSubSpace : public AVActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVTESObjectRefComponent* TESRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVSubSpaceComponent* SubSpaceComponent;
    
    AVSubSpace(const FObjectInitializer& ObjectInitializer);

};

