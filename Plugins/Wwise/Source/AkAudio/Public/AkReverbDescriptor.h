#pragma once
#include "CoreMinimal.h"
#include "AkReverbDescriptor.generated.h"

class UPrimitiveComponent;

USTRUCT()
struct AKAUDIO_API FAkReverbDescriptor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UPrimitiveComponent* Primitive;
    
public:
    FAkReverbDescriptor();
};

