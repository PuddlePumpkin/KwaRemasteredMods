#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VLegacySaveLoadMenuItem.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVLegacySaveLoadMenuItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveGameSlot;
    
public:
    UVLegacySaveLoadMenuItem();

    UFUNCTION(BlueprintCallable)
    void SetText(const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotName(const FString& NewSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSlotName() const;
    
};

