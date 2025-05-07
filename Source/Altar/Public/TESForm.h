#pragma once
#include "CoreMinimal.h"
#include "FormID.h"
#include "TESBaseFormComponent.h"
#include "TESForm.generated.h"

class AVActor;
class UBlueprint;
class UClass;

UCLASS(Blueprintable)
class ALTAR_API UTESForm : public UTESBaseFormComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_formID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_formEditorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FormID m_formType;
    
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_formFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlueprint> Blueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AVActor> BlueprintClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeUsedAsPropItem;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BSXFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBlueprint>> BlueprintVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UClass>> BlueprintVariantClasses;
    
    UTESForm();

    UFUNCTION(BlueprintCallable)
    void UpdateBlueprintClassesPostEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTemporary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMaster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHexFormID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormTypeStringFromFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormTypeString() const;
    
    UFUNCTION(BlueprintCallable)
    static FormID GetFormTypeFromFormString(int64 formString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FormID GetFormType() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetFormFlags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFormEditorID() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetFormDetailedString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AVActor> GetEquipableBlueprintClass();
    
    UFUNCTION(BlueprintCallable)
    bool GetDelete();
    
    UFUNCTION(BlueprintCallable)
    UClass* GetComponent();
    
    UFUNCTION(BlueprintPure)
    int64 GetBPFormID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFormBeUsedAsPropItem() const;
    
};

