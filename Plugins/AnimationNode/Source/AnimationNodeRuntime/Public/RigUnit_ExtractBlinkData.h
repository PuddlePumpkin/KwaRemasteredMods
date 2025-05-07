#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "UObject/NoExportTypes.h"
#include "ActorBlinkSettings.h"
#include "RigUnit_ExtractBlinkData.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONNODERUNTIME_API FRigUnit_ExtractBlinkData : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBlinkSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PrimaryEyelidBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PrimaryEyelidRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSecondaryEyelids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SecondaryEyelidBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SecondaryEyelidRotation;
    
    FRigUnit_ExtractBlinkData();
};

