#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESActorBase.generated.h"

class USkeleton;
class UTESActorBaseData;

UCLASS(Abstract, Blueprintable)
class ALTAR_API UTESActorBase : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESActorBaseData* InheritedActorBaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeleton> Skeleton;
    
    UTESActorBase();

};

