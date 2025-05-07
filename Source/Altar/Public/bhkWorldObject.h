#pragma once
#include "CoreMinimal.h"
#include "bhkSerializable.h"
#include "bhkWorldObject.generated.h"

class UHavokFilter;
class UbhkShape;
class UbhkWorldObjectCInfo;

UCLASS(Blueprintable)
class ALTAR_API UbhkWorldObject : public UbhkSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkShape* Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokFilter* Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UbhkWorldObjectCInfo* WorldObjectInfo;
    
    UbhkWorldObject();

};

