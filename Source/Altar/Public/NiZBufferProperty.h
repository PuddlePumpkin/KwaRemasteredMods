#pragma once
#include "CoreMinimal.h"
#include "EZBufferTestFunction.h"
#include "NiProperty.h"
#include "NiZBufferProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiZBufferProperty : public UNiProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagZBuffer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EZBufferTestFunction TestFunction;
    
    UNiZBufferProperty();

};

