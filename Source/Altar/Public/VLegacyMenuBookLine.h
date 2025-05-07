#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ELegacyBookStylizedTextAlignment.h"
#include "LegacyBookStylizedText.h"
#include "VLegacyMenuBookLine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ALTAR_API UVLegacyMenuBookLine : public UUserWidget {
    GENERATED_BODY()
public:
    UVLegacyMenuBookLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRichText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D SetLineText(const FText& Text, const FLegacyBookStylizedText& TextStyle, bool bForceLayoutPrepass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFontFamily(const FString& FontValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAlignement(ELegacyBookStylizedTextAlignment Alignement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetRichText() const;
    
};

