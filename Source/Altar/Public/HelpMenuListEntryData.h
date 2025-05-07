#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModernHelpMenuEntry.h"
#include "HelpMenuListEntryData.generated.h"

class UHelpMenuListEntryData;
class UTexture2D;

UCLASS(Blueprintable, Transient)
class ALTAR_API UHelpMenuListEntryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EntryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHelpMenuListEntryData*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjustedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryId;
    
    UHelpMenuListEntryData();

    UFUNCTION(BlueprintCallable)
    void InitializeHeader(const FText& HeaderString, UTexture2D* CategoryIcon, bool bInIsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void InitializeEntry(const FName& ID, const FModernHelpMenuEntry& DataEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCategory();
    
};

