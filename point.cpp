#include "point.h"
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
Point::Point(double x, double y)
:x(x), y(y){};

double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}
Point::Point(const Point &other)
:x(other.x), y(other.y){};


bool Point::equals( Point &other){
    return other.x == x && other.y==y;
}
void Point::flip(){
    x = x*-1;
    y = y*-1;
}
void Point::move(double x1, double y1){
    x=x+x1;
    y=y+y1;
}
std:: string Point::toString(){
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(1);
    oss<<"Point("<<x<<", "<<y<<")";
    return oss.str();
}