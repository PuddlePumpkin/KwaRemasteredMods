#pragma once
#include "CoreMinimal.h"
#include "LEVELED_OBJECT.h"
#include "TESBaseFormComponent.h"
#include "TESLeveledList.generated.h"

UCLASS(Blueprintable, Transient)
class ALTAR_API UTESLeveledList : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLEVELED_OBJECT> LeveledItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UTESLeveledList();

};

