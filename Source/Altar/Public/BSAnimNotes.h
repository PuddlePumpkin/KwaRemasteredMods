#pragma once
#include "CoreMinimal.h"
#include "NiObject.h"
#include "BSAnimNotes.generated.h"

class UBSAnimNote;

UCLASS(Blueprintable)
class ALTAR_API UBSAnimNotes : public UNiObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAnimNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBSAnimNote*> AnimNotes;
    
    UBSAnimNotes();

};

