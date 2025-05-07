#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TESSync.generated.h"

class UTESForm;

UCLASS(Blueprintable)
class ALTAR_API UTESSync : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FString> AllForms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint8> FileCompileIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, uint8> FileRuntimeCompileIndexes;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, UTESForm*> DynamicForms;
    
    UTESSync();

};

