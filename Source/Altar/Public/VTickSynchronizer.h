#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "VTickSynchronizer.generated.h"

class UVLevelChangeData;

UCLASS(Blueprintable)
class AVTickSynchronizer : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVLevelChangeData* LevelData;
    
public:
    AVTickSynchronizer(const FObjectInitializer& ObjectInitializer);

};

