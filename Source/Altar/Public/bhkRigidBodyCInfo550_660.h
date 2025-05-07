#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "hkDeactivatorType.h"
#include "hkMotionType.h"
#include "hkQualityType.h"
#include "hkResponseType.h"
#include "hkSolverDeactivation.h"
#include "bhkRigidBodyCInfo550_660.generated.h"

class UHavokFilter;
class UMatrix3;
class UhkQuaternion;

UCLASS(Blueprintable)
class ALTAR_API UbhkRigidBodyCInfo550_660 : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokFilter* Filter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkResponseType CollisionResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProcessContactCallbackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UhkQuaternion* Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatrix3* InertiaTensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Friction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Restitution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Penetration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkMotionType MotionSystem;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkDeactivatorType DeactivatorType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkSolverDeactivation SloverDeactivation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    hkQualityType QualityType;
    
    UbhkRigidBodyCInfo550_660();

};

