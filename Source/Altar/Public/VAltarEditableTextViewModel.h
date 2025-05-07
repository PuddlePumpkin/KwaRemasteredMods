#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUserInputTextValidityCode.h"
#include "UserInputTextPair.h"
#include "VAltarEditableTextViewModel.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UVAltarEditableTextViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserInputTextPair UserInputTextPair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUserInputTextValidityCode UserInputTextValidityCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckIfTextIsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckForInvalidCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckForWhiteSpaceOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckIfTextIsTooLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ValidCharactersStrings;
    
public:
    UVAltarEditableTextViewModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCheckIfTextIsTooLong() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCheckIfTextIsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCheckForWhiteSpaceOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCheckForInvalidCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void SetValidCharacters(const TArray<FString>& NewValidCharacters);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUserInputTextValidityCode(EUserInputTextValidityCode NewValidityCode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUserInputTextPair(const FUserInputTextPair& NewUserInputTextPair);
    
    UFUNCTION(BlueprintCallable)
    void SetUserInputText(const FText& NewUserInputText);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCheckIfTextIsTooLong(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCheckIfTextIsEmpty(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCheckForWhiteSpaceOnly(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCheckForInvalidCharacter(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTextSize(int32 NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetValidCharacters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUserInputTextValidityCode GetUserInputTextValidityCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserInputTextPair GetUserInputTextPair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUserInputText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTextSize() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearData();
    
};

