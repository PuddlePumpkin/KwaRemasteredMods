#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VLevelSelectSettings.generated.h"

class AVLevelSelectDoor;

UCLASS(Blueprintable, DefaultConfig, Config=Altar)
class UVLevelSelectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVLevelSelectDoor> DoorActor;
    
    UVLevelSelectSettings();

};

