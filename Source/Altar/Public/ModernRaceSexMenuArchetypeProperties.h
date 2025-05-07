#pragma once
#include "CoreMinimal.h"
#include "ModernRaceSexMenuArchetypeProperties.generated.h"

USTRUCT(BlueprintType)
struct FModernRaceSexMenuArchetypeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ArchetypesPros;
    
    ALTAR_API FModernRaceSexMenuArchetypeProperties();
};

