#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

Point(double xCoord, double yCoord);
    this -> xCoord = xCoord;
    this -> yCoord = yCoord;

    double xCoord;
    double yCoord;
}

double distanceTo(const Point& other) const;
    return std::sqrt(std::pow(other.x - x, 2) + std::pow(other.y - y, 2));
}
}



