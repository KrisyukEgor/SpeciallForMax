#ifndef CALCULATEANDREDUCECYLINDERSQUARE_H
#define CALCULATEANDREDUCECYLINDERSQUARE_H

#include "calculatecylindersquare.h"

class CalculateAndReduceCylinderSquare : CalculateCylinderSquare
{
private:
    double c;

public:
    CalculateAndReduceCylinderSquare(double r, double h, double c);
    double CalculateReducedSquare();
};

#endif // CALCULATEANDREDUCECYLINDERSQUARE_H
