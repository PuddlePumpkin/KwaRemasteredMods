#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyInputActor.generated.h"

class UButtonLinker;
class UListView;
class USliderLinker;
class USpecificClassUtils;

UCLASS(Blueprintable)
class QMPUNREALINTEGRATION_API AKeyInputActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecificClassUtils* SpecificUtils;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UButtonLinker*> LinkedButtonLinker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USliderLinker*> LinkedSliderLinker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UListView*> LinkedListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PrefabButtonIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PrefabListIdentifier;
    
public:
    AKeyInputActor(const FObjectInitializer& ObjectInitializer);

};

