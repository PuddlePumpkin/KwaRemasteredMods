#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "OblivionLayer.h"
#include "HavokFilter.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UHavokFilter : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    OblivionLayer Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UHavokFilter();

};

