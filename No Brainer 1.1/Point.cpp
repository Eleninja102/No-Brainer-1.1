//
//  Point.cpp
//  No Brainer 1.1
//
//  Created by Coleton Watt on 1/10/22.
//

#include "Point.hpp"


Point Point::operator+(const Point &toAdd){
    Point thirdPoint(x + toAdd.x, y + toAdd.y);
    
    return thirdPoint;
}
Point Point::operator+=(const Point &toAdd){
    x += toAdd.x;
    y += toAdd.y;
    
    return *this;
}

Point Point::operator-(const Point &toSubtract){
    Point thirdPoint(x - toSubtract.x, y - toSubtract.y);
    
    return thirdPoint;
}
Point Point::operator-=(const Point &toSubtract){
    x -= toSubtract.x;
    y -= toSubtract.y;
    
    return *this;
}

ostream& operator << (ostream &out, const Point &toPrint){
    out << "(" << toPrint.x << ", " << toPrint.y << ")" << endl;
    
    return out;
}

istream& operator >> (istream &in, Point &toInsert){
    cout << "Enter x and y cord" << endl;
    in >> toInsert.x >> toInsert.y;
    
    return in;
}
