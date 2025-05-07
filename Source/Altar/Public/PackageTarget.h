#pragma once
#include "CoreMinimal.h"
#include "EPackageObjectType.h"
#include "EPackageTargetType.h"
#include "VFormPtr.h"
#include "PackageTarget.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FPackageTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageTargetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr TargetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVFormPtr TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPackageObjectType TargetObjectType;
    
    FPackageTarget();
};

