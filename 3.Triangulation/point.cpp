#include "point.h"
#include <fstream>
#include <iomanip>

Point::Point() : x(0), y(0), z(0) {}

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {}

void Point::print(std::ofstream& outFile) const {
    outFile << std::fixed << std::setprecision(6)
            << x << " " << y << " " << z << std::endl;
}
