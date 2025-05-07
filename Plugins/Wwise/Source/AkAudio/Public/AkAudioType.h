#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkAudioType.generated.h"

UCLASS(Abstract, BlueprintType)
class AKAUDIO_API UAkAudioType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutoLoad;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> UserData;
    
    UAkAudioType();

    UFUNCTION(BlueprintCallable)
    void UnloadData(bool bAsync);
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintPure)
    int32 GetWwiseShortID() const;
    
};

