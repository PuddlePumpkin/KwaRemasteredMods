#include "SteeringBehaviorsBlueprintFunctionLibrary.h"

USteeringBehaviorsBlueprintFunctionLibrary::USteeringBehaviorsBlueprintFunctionLibrary() {
}

double USteeringBehaviorsBlueprintFunctionLibrary::GetParallelPathMaxOffset2D(const TArray<FVector>& Path, const bool bLeftSide) {
    return 0.0;
}

void USteeringBehaviorsBlueprintFunctionLibrary::DrawDebugPolyline(const UObject* WorldContextObject, const TArray<FVector>& Polyline, const FLinearColor PolylineColor, const float Duration, const float Thickness) {
}

TArray<FVector> USteeringBehaviorsBlueprintFunctionLibrary::BuildParallelPath(const TArray<FVector>& Path, const double Offset2D, const double LayerHeight) {
    return TArray<FVector>();
}


