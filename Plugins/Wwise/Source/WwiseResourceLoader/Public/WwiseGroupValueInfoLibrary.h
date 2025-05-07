#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwiseGroupValueInfo.h"
#include "WwiseGroupValueInfoLibrary.generated.h"

UCLASS(BlueprintType)
class WWISERESOURCELOADER_API UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseGroupValueInfoLibrary();

    UFUNCTION(BlueprintPure)
    static FWwiseGroupValueInfo SetWwiseShortId(const FWwiseGroupValueInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseGroupValueInfo SetWwiseName(const FWwiseGroupValueInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintPure)
    static FWwiseGroupValueInfo SetGroupShortId(const FWwiseGroupValueInfo& Ref, int32 GroupShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseGroupValueInfo SetAssetGuid(const FWwiseGroupValueInfo& Ref, const FGuid& AssetGuid);
    
    UFUNCTION(BlueprintPure)
    static FWwiseGroupValueInfo MakeStruct(const FGuid& AssetGuid, int32 GroupShortId, int32 WwiseShortId, const FString& WwiseName);
    
    UFUNCTION(BlueprintPure)
    static int32 GetWwiseShortID(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FString GetWwiseName(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static int32 GetGroupShortId(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetAssetGuid(const FWwiseGroupValueInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32& OutGroupShortId, int32& OutWwiseShortId, FString& OutWwiseName);
    
};

