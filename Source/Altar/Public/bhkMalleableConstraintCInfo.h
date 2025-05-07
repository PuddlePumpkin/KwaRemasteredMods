#pragma once
#include "CoreMinimal.h"
#include "EBHKConstraintType.h"
#include "NifType.h"
#include "bhkMalleableConstraintCInfo.generated.h"

class UbhkBallAndSocketConstraintCInfo;
class UbhkConstraintCInfo;
class UbhkHingeConstraintCInfo;
class UbhkLimitedHingeConstraintCInfo;
class UbhkPrismaticConstraintCInfo;
class UbhkRagdollConstraintCInfo;
class UbhkStiffSpringConstraintCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkMalleableConstraintCInfo : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBHKConstraintType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkConstraintCInfo* ConstraintInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkBallAndSocketConstraintCInfo* BallAndSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkHingeConstraintCInfo* Hinge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkLimitedHingeConstraintCInfo* LimitedHinge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkPrismaticConstraintCInfo* Prismatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkRagdollConstraintCInfo* Ragdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkStiffSpringConstraintCInfo* StiffSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tau;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UbhkMalleableConstraintCInfo();

};

