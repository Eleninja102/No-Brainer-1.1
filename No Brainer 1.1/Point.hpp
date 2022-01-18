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

template <class Type>
class Point;

template <class Type>
ostream& operator << (ostream &, Point<Type> &);

template <class Type>

istream& operator >> (istream &, Point<Type> &);

template <class Type>
class Point{
private:
    Type x;
    Type y;

public:
    Point(){x=0; y=0;}
    Point(Type x, Type y): x(x), y(y){}
    Point<Type> operator+(const Point<Type> &toAdd);
    Point<Type> operator+=(const Point<Type> &toAdd);
    
    Point<Type> operator-(const Point<Type> &);
    Point<Type> operator-=(const Point<Type> &);
    
    friend ostream& operator << <>(ostream &, Point<Type> &);
    friend istream& operator >> <>(istream &, Point<Type> &);


};
template <class Type>
Point<Type> Point<Type>::operator+(const Point<Type> &toAdd){
    Point<Type> thirdPoint(x + toAdd.x, y + toAdd.y);
    
    return thirdPoint;
}

template <class Type>
Point<Type> Point<Type>::operator+=(const Point<Type> &toAdd){
    x += toAdd.x;
    y += toAdd.y;
    
    return *this;
}

template <class Type>
Point<Type> Point<Type>::operator-(const Point<Type> &toSubtract){
    Point<Type> thirdPoint(x - toSubtract.x, y - toSubtract.y);
    
    return thirdPoint;
}

template <class Type>
Point<Type> Point<Type>::operator-=(const Point<Type> &toSubtract){
    x -= toSubtract.x;
    y -= toSubtract.y;
    
    return *this;
}

template <class Type>
ostream& operator << (ostream &out, Point<Type> &toPrint){
    out << "(" << toPrint.x << ", " << toPrint.y << ")" << endl;
    
    return out;
}

template <class Type>
istream& operator >> (istream &in, Point<Type> &toInsert){
    cout << "Enter x and y cord" << endl;
    in >> toInsert.x >> toInsert.y;
    
    return in;
}


#endif /* Point_hpp */
