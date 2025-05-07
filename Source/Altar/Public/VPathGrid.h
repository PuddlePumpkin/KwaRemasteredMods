#pragma once
#include "CoreMinimal.h"
#include "VActor.h"
#include "VPathGrid.generated.h"

class UVPathGridComponent;

UCLASS(Blueprintable)
class ALTAR_API AVPathGrid : public AVActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FormID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVPathGridComponent* PathGridComponent;
    
    AVPathGrid(const FObjectInitializer& ObjectInitializer);

};

