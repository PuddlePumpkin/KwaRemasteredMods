#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELegacyMapMenuIcon.h"
#include "Modern_AltarMapIconDesignTableRow.h"
#include "VModern_AltarMapIconDesignTable.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVModern_AltarMapIconDesignTable : public UDataTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELegacyMapMenuIcon, FModern_AltarMapIconDesignTableRow> MapIconDesign;
    
public:
    UVModern_AltarMapIconDesignTable();

};

