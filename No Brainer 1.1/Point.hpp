//
//  Point.hpp
//  No Brainer 1.1
//
//  Created by Coleton Watt on 1/10/22.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>

using namespace std;

class Point{
private:
    int x;
    int y;

public:
    Point(){x=0; y=0;}
    Point(int x, int y): x(x), y(y){}
    Point operator+(const Point &);
    Point operator+=(const Point &);
    
    Point operator-(const Point &);
    Point operator-=(const Point &);
    
    friend ostream& operator << (ostream &, const Point &);
    friend istream& operator >> (istream &, Point &);


};


#endif /* Point_hpp */
