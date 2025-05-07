#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NiPSysCollider.h"
#include "NiPSysPlanarCollider.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UNiPSysPlanarCollider : public UNiPSysCollider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector XAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector YAxis;
    
    UNiPSysPlanarCollider();

};

