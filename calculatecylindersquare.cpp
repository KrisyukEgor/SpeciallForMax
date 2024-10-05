#include "calculatecylindersquare.h"

CalculateCylinderSquare::CalculateCylinderSquare(double r, double h) {
    radius = r;
    height = h;
}

double CalculateCylinderSquare::CalculateSquare() {
    double BaseArea = PI * radius * radius; //площадь основания
    double SideArea = 2 * PI * radius * height; //площадь боковой поверхности

    return 2 * BaseArea * SideArea; //площадь полной поверхности
}

QString CalculateCylinderSquare::GetInfo() {

    return("Высота: " + QString::number(height) + ", Радиус: " + QString::number(radius));

}
