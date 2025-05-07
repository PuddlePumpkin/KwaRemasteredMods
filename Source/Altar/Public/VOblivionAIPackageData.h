#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVOblivionAIPackageType.h"
#include "VOblivionAIPackageData.generated.h"

class UVTESObjectRefComponent;

USTRUCT(BlueprintType)
struct FVOblivionAIPackageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 PackageFormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    EVOblivionAIPackageType PackageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SkipSerialization, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVTESObjectRefComponent> TargetRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FVector TargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SkipSerialization, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVTESObjectRefComponent> LocationRefComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FVector LocationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bAlwaysRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    float Radius;
    
    ALTAR_API FVOblivionAIPackageData();
};

