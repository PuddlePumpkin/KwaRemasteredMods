#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "VFormIDNavLinkCustomComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVFormIDNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> AllowedFormIDs;
    
public:
    UVFormIDNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer);

};

