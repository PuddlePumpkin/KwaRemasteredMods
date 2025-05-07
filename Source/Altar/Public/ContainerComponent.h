#pragma once
#include "CoreMinimal.h"
#include "ContainerItem.h"
#include "ContainerComponent.generated.h"

USTRUCT(BlueprintType)
struct ALTAR_API FContainerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FContainerItem> Items;
    
    FContainerComponent();
};

