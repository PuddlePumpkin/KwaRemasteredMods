#include "TESPathGrid.h"
#include "FormID.h"

UTESPathGrid::UTESPathGrid() {
    this->m_formType = FormID::PGRD_ID;
    this->ParentCell = NULL;
    this->NumGridDataPoints = 0;
}


