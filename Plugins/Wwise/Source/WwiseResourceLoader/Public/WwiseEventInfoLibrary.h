#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWwiseEventDestroyOptions.h"
#include "EWwiseEventSwitchContainerLoading.h"
#include "WwiseEventInfo.h"
#include "WwiseEventInfoLibrary.generated.h"

UCLASS(BlueprintType)
class WWISERESOURCELOADER_API UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseEventInfoLibrary();

    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetWwiseShortId(const FWwiseEventInfo& Ref, int32 WwiseShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetWwiseName(const FWwiseEventInfo& Ref, const FString& WwiseName);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetWwiseGuid(const FWwiseEventInfo& Ref, const FGuid& WwiseGuid);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetSwitchContainerLoading(const FWwiseEventInfo& Ref, const EWwiseEventSwitchContainerLoading& SwitchContainerLoading);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo SetDestroyOptions(const FWwiseEventInfo& Ref, const EWwiseEventDestroyOptions& DestroyOptions);
    
    UFUNCTION(BlueprintPure)
    static FWwiseEventInfo MakeStruct(const FGuid& WwiseGuid, int32 WwiseShortId, const FString& WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32 HardCodedSoundBankShortId);
    
    UFUNCTION(BlueprintPure)
    static int32 GetWwiseShortID(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FString GetWwiseName(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static FGuid GetWwiseGuid(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static int32 GetHardCodedSoundBankShortId(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static EWwiseEventDestroyOptions GetDestroyOptions(const FWwiseEventInfo& Ref);
    
    UFUNCTION(BlueprintPure)
    static void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32& OutHardCodedSoundBankShortId);
    
};

