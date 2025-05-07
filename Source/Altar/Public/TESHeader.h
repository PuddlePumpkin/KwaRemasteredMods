#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TESHeader.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UTESHeader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FormID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Length;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Type;
    
    UTESHeader();

};

