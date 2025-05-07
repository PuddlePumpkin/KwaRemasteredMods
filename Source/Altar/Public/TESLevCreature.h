#pragma once
#include "CoreMinimal.h"
#include "TESBoundObject.h"
#include "TESLevCreature.generated.h"

class UTESLeveledList;

UCLASS(Blueprintable)
class ALTAR_API UTESLevCreature : public UTESBoundObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTESLeveledList* InheritedLeveledList;
    
    UTESLevCreature();

};

