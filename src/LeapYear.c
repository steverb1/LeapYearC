#include <stdbool.h>
#include "LeapYear.h"

bool isLeapYear(int year)
{
    // return (year % 400 == 0 || year % 100 != 0 && year % 4 == 0);
    if (year % 400 == 0)
    {
        return true;
    }

    if (year % 100 == 0)
    {
        return false;
    }

    return year % 4 == 0;
}
