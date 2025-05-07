#pragma once
#include "CoreMinimal.h"
#include "LegacyRaceSexMenuTableRow.h"
#include "VAltarWidget.h"
#include "VModern_CharacCreationGenericSettingInterface.h"
#include "VModern_CharacCreationGenericColorPicker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_CharacCreationGenericColorPicker : public UVAltarWidget, public IVModern_CharacCreationGenericSettingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRaceSexMenuTableRow Row;
    
public:
    UVModern_CharacCreationGenericColorPicker();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FLegacyRaceSexMenuTableRow GetRow() const override PURE_VIRTUAL(GetRow, return FLegacyRaceSexMenuTableRow{};);
    
};

