#pragma once
#include "CoreMinimal.h"
#include "VDoorNavigationTestingActorGroup.generated.h"

class AVDoor;

USTRUCT(BlueprintType)
struct FVDoorNavigationTestingActorGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AVDoor>> StartTestingDoorsIncluded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<AVDoor>> StartTestingDoorsExcluded;
    
    ALTAR_API FVDoorNavigationTestingActorGroup();
};

