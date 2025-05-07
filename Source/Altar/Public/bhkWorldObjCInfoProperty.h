#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "bhkWorldObjCInfoProperty.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UbhkWorldObjCInfoProperty : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Data;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Size;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CapacityAndFlags;
    
    UbhkWorldObjCInfoProperty();

};

