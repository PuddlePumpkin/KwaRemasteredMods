#pragma once
#include "CoreMinimal.h"
#include "bhkShapePhantom.h"
#include "bhkSimpleShapePhantom.generated.h"

class UMatrix44;

UCLASS(Blueprintable)
class ALTAR_API UbhkSimpleShapePhantom : public UbhkShapePhantom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatrix44* Transform;
    
    UbhkSimpleShapePhantom();

};

