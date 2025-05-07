#pragma once
#include "CoreMinimal.h"
#include "VDoorNavLinkCustomComponent.h"
#include "VBlackListNavLinkCustomComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVBlackListNavLinkCustomComponent : public UVDoorNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActorsBlacklist;
    
public:
    UVBlackListNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

