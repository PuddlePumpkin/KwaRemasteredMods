#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TraversalSnapshot.h"
#include "RecordSnapshots.generated.h"

UCLASS(Blueprintable)
class URecordSnapshots : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTraversalSnapshot> Snapshots;
    
    URecordSnapshots();

};

