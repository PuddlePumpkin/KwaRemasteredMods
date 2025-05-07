#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerClassItemProperties.h"
#include "VClassItemObject.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVClassItemObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerClassItemProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
public:
    UVClassItemObject();

    UFUNCTION(BlueprintCallable)
    void SetProperties(const FPlayerClassItemProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool bNewSelectionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerClassItemProperties GetProperties() const;
    
};

