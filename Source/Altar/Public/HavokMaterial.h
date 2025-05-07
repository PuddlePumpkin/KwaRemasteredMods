#pragma once
#include "CoreMinimal.h"
#include "NifType.h"
#include "OblivionHavokMaterial.h"
#include "HavokMaterial.generated.h"

UCLASS(Blueprintable)
class ALTAR_API UHavokMaterial : public UNifType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Padding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    OblivionHavokMaterial Material;
    
    UHavokMaterial();

};

