#pragma once
#include "CoreMinimal.h"
#include "LegacyRaceSexMenuTableRow.h"
#include "VAltarNavigableTileView.h"
#include "VModern_CharacCreationGenericSettingInterface.h"
#include "VModern_CharacCreationGenericTileView.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVModern_CharacCreationGenericTileView : public UVAltarNavigableTileView, public IVModern_CharacCreationGenericSettingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLegacyRaceSexMenuTableRow Row;
    
public:
    UVModern_CharacCreationGenericTileView();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FLegacyRaceSexMenuTableRow GetRow() const override PURE_VIRTUAL(GetRow, return FLegacyRaceSexMenuTableRow{};);
    
};

