#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ECharacterSex.h"
#include "EVCharacterPhenotypeDataFilter.h"
#include "EVFacialHairType.h"
#include "VPhenotypeCustomizationSession.generated.h"

class AVPairedCharacter;
class UMaterialInterface;
class USkeletalMesh;
class UTESRace;
class UVCharacterHairPieceBase;
class UVCharacterPhenotypePreset;
class UWorld;

UCLASS(Blueprintable)
class ALTAR_API UVPhenotypeCustomizationSession : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVPairedCharacter* LinkedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVCharacterPhenotypeDataFilter Filter;
    
    UVPhenotypeCustomizationSession();

    UFUNCTION(BlueprintCallable)
    void StartFromScratch(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void StartFromCharacter(AVPairedCharacter* Character, bool DestroyCharacterOnSessionEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinParameter(FName ParameterName, float Value, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinColorParameter(FName ParameterName, FColor Value, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSex(ECharacterSex Sex, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetSenescenceValue(int32 NewValue, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetRace(UTESRace* NewRace, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetHairPiece(EVFacialHairType HairType, UVCharacterHairPieceBase* HairPiece, int32 CustomisationIndex, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceSkinMaterial(FName MaterialSlotName, UMaterialInterface* Material, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceMorphAxisValue(FName Name, float Value, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceBaseMesh(USkeletalMesh* FaceBaseMesh, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeMaterial(UMaterialInterface* Material, int32 CustomisationIndex, bool bShouldRefreshCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterToPreset(const UVCharacterPhenotypePreset* Preset);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacter();
    
    UFUNCTION(BlueprintCallable)
    void EndSession();
    
};

