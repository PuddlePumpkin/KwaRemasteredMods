#include "SkinPartition.h"

USkinPartition::USkinPartition() {
    this->NumVertices = 0;
    this->NumTriangles = 0;
    this->NumBones = 0;
    this->NumStrips = 0;
    this->NumWeightsPerVertex = 0;
    this->HasVertexMap = false;
    this->HasVertexWeights = false;
    this->HasFaces = false;
    this->HasBoneIndices = false;
    this->LODLevel = 0;
    this->GlobalVB = false;
}


