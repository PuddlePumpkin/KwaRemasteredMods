#pragma once
#include "CoreMinimal.h"
#include "LegacyBookStylizedText.h"
#include "Templates/SubclassOf.h"
#include "VAltarMenu.h"
#include "VLegacyBookMenu.generated.h"

class UDataTable;
class UPanelWidget;
class UVLegacyMenuBookLine;

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyBookMenu : public UVAltarMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVLegacyMenuBookLine> BookLineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVLegacyMenuBookLine*> AllTextLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPanelWidget*> PageList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NbLinesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDisplayedPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BookImageDataTable;
    
public:
    UVLegacyBookMenu();

    UFUNCTION(BlueprintCallable)
    void SplitTextIntoTextLines(const TArray<FLegacyBookStylizedText>& Texts);
    
    UFUNCTION(BlueprintCallable)
    void ResetContainers(bool bEmptyContainers);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmptyLinesBeforePageBreaks();
    
    UFUNCTION(BlueprintCallable)
    void RemoveEmptyLinesAtTheEndOfTheList();
    
    UFUNCTION(BlueprintCallable)
    void ComputeNbLinePerPages();
    
};

