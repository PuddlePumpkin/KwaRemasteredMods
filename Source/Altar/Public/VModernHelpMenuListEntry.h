#pragma once
#include "CoreMinimal.h"
#include "NavigationListviewEntry.h"
#include "VModernHelpMenuListEntry.generated.h"

class UHelpMenuListEntryData;

UCLASS(Blueprintable, EditInlineNew, Transient)
class ALTAR_API UVModernHelpMenuListEntry : public UNavigationListviewEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHelpMenuListEntryData* EntryData;
    
public:
    UVModernHelpMenuListEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExpanded();
    
};

