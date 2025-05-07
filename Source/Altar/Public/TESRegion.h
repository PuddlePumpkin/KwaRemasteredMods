#pragma once
#include "CoreMinimal.h"
#include "TESForm.h"
#include "TESRegionPointList.h"
#include "TESRegion.generated.h"

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESRegion : public UTESForm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTESRegionPointList> PointLists;
    
    UTESRegion();

};

