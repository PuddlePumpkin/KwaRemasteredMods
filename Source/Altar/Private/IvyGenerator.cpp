#include "IvyGenerator.h"

AIvyGenerator::AIvyGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBaked = false;
    this->BakedInfoText = FText::FromString(TEXT("Ivy Spline is currently baked to a Static Mesh\nTo edit this Ivy Spline:\n -> RightClick\n -> Scripted Actor Actions\n -> Ivy Generator\n -> Edit Mode"));
    this->EditInfoText = FText::FromString(TEXT("Ivy Spline is currently in Edit Mode\nTo Bake this Ivy to a Static Mesh:\n -> RightClick\n -> Scripted Actor Actions\n -> Ivy Generator\n -> Convert to Mesh"));
    this->bUpdateSpline = false;
    this->bAutoUpdate = true;
    this->bAllowClimbingOnCeiling = true;
    this->bFallingMode = false;
    this->bRandomizeAfterFalling = true;
    this->NumberOfPoints = 50;
    this->bSpawnChildBranches = true;
    this->NumberOfBranches = 4;
    this->BranchSeparationDegree = 45.00f;
    this->BranchDistance = 40.00f;
    this->Curliness = 60.00f;
    this->WillingnessToClimb = 10.00f;
    this->WillingnessToTwirl = 20.00f;
    this->AttractorArray.AddDefaulted(1);
    this->AttractorInfluence = 0.00f;
    this->bAttractorAffectsChildBranches = true;
    this->bRandomize = false;
    this->Randomness = 0.00f;
    this->RandomnessSeed = 47;
    this->bGenerateStem = true;
    this->MaxNumberOfStemMeshes = 160;
    this->StemMeshScale = 0.80f;
    this->StemStartDelay = 0;
    this->bGenerateLeaves = true;
    this->NumberOfLeaves = 156;
    this->bUniformLeafDistribution = true;
    this->LeafRandomness = 10.00f;
    this->LeafScale = 2.00f;
    this->LeafScaleRandomness = 20.00f;
    this->MinLeafScale = 0.20f;
    this->MaxLeafScale = 2.50f;
    this->bExportToSM = false;
    this->SplineResolution = 20.00f;
    this->TangentFrequency = 0.25f;
    this->StemMeshSpacing = 15.00f;
    this->DownTraceMultiplier = 1.50f;
    this->LineTraceVis = EDrawDebugTrace::None;
    this->bTraceComplex = true;
    this->bAttractorDebug = false;
    this->bDebugUpVectors = false;
    this->bUseInstancedSplineMesh = true;
    this->InstanceXScale = 0.40f;
}


