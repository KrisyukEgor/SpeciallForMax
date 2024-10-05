#ifndef CALCULATECYLINDERSQUARE_H
#define CALCULATECYLINDERSQUARE_H

#include <QString>


class CalculateCylinderSquare
{
protected:
    double radius;
    double height;

    const double PI = 3.14159265358979323846264338327;

public:
    CalculateCylinderSquare(double r, double h);
    double CalculateSquare();
    QString GetInfo();

};

#endif // CALCULATECYLINDERSQUARE_H
