//Michael Masters 0343427
#include "Vector.h"
#include <cmath>

//x value accessors
const double Vector::X()const{

    return xLength;
}

//y value accessor
const double Vector::Y()const{

    return yLength;
}

//overloading the negation operator
Vector Vector::operator -(){

    double xv = -X();
    double yv = -Y();

    Vector v1 = Vector(xv,yv);

    return v1;
}

//the norm function calculates the nomal of a function and returns it as a double
const double Vector::norm ()const{

    double Norm = sqrt(pow(X(),2) + pow(Y(),2));

    return Norm;
}

//overloading the plus as global functions
Vector operator +( Vector& a, Vector& b){

    double xv = a.X() + b.X();
    double yv = a.Y() + b.Y();

    Vector v1 = Vector(xv,yv);

    return v1;
}

//overloading the minus operators as global functions
Vector operator -(Vector& a, Vector& b){

    double xv = a.X() - b.X();
    double yv = a.Y() - b.Y();

    Vector v1 = Vector(xv,yv);

    return v1;
}
