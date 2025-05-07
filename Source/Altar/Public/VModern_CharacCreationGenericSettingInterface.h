#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LegacyRaceSexMenuTableRow.h"
#include "VModern_CharacCreationGenericSettingInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVModern_CharacCreationGenericSettingInterface : public UInterface {
    GENERATED_BODY()
};

class IVModern_CharacCreationGenericSettingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual FLegacyRaceSexMenuTableRow GetRow() const PURE_VIRTUAL(GetRow, return FLegacyRaceSexMenuTableRow{};);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteLastIfLastItemActionLogic();
    
};

