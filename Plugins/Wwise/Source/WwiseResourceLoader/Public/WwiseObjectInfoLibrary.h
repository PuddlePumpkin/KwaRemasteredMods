#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwiseObjectInfo.h"
#include "WwiseObjectInfoLibrary.generated.h"

UCLASS(BlueprintType)
class WWISERESOURCELOADER_API UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseObjectInfoLibrary();

    UFUNCTION(BlueprintPure)
    static FWwiseObjectInfo SetWwiseShortId(const FWwiseObjectInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseObjectInfo SetWwiseName(const FWwiseObjectInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintPure)
    static FWwiseObjectInfo SetWwiseGuid(const FWwiseObjectInfo& Ref, const FGuid& WwiseGuid);
    
    UFUNCTION(BlueprintPure)
    static FWwiseObjectInfo SetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseObjectInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintPure)
    static int32 GetWwiseShortID(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FString GetWwiseName(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetWwiseGuid(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHardCodedSoundBankShortId(const FWwiseObjectInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, int32& OutHardCodedSoundBankShortId);
    
};

