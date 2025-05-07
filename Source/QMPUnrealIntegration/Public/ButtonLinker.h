#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ButtonLinker.generated.h"

class UButton;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API UButtonLinker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* LinkedButton;
    
public:
    UButtonLinker();

    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

