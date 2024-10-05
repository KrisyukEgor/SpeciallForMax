#include "calculateandreducecylindersquare.h"

CalculateAndReduceCylinderSquare::CalculateAndReduceCylinderSquare(double r, double h, double c) : CalculateCylinderSquare(r,h) {
    this -> c = c;

}

double CalculateAndReduceCylinderSquare::CalculateReducedSquare() {
    double squareBefore = CalculateSquare();

    double result = squareBefore / c;


    return result;
}
