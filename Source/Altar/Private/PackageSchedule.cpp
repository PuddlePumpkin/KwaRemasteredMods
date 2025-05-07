#include "PackageSchedule.h"

FPackageSchedule::FPackageSchedule() {
    this->DayOfWeek = EPackageScheduleDayOfWeek::SUNDAY;
    this->Month = EPackageScheduleMonth::MORNINGSTAR;
    this->HourOfTheDay = 0;
    this->DayOfTheMonth = 0;
    this->Duration = 0;
}

