#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "VNavModifierComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ALTAR_API UVNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, bool> InitialCanEverAffectNavigation;
    
public:
    UVNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

