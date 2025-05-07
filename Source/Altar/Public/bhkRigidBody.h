#pragma once
#include "CoreMinimal.h"
#include "bhkEntity.h"
#include "bhkRigidBody.generated.h"

class UbhkRigidBodyCInfo2010;
class UbhkRigidBodyCInfo2014;
class UbhkRigidBodyCInfo550_660;
class UbhkSerializable;

UCLASS(Blueprintable)
class ALTAR_API UbhkRigidBody : public UbhkEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkRigidBodyCInfo550_660* RigidBodyInfobhkRigidBodyCInfo550_660;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkRigidBodyCInfo2010* RigidBodyInfobhkRigidBodyCInfo2010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkRigidBodyCInfo2014* RigidBodyInfobhkRigidBodyCInfo2014;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NumConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UbhkSerializable*> Constraints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BodyFlagsUint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BodyFlagsUshort;
    
    UbhkRigidBody();

};

