#include "Vector.h"
#include <cmath>

double Vector::getxLength(){

    return xLength;
}

double Vector::getyLength(){

    return yLength;
}

Vector Vector::operator +( Vector& a){

    double xv = getxLength() + a.getxLength();
    double yv = getyLength() + a.getyLength();

    Vector v1 = Vector(xv,yv);

    return v1;
}


Vector Vector::operator -(Vector& a){

    double xv = getxLength() - a.getxLength();
    double yv = getyLength() - a.getyLength();

    Vector v1 = Vector(xv,yv);

    return v1;
}


Vector Vector::operator -(){

    double xv = -getxLength();
    double yv = -getxLength();

    Vector v1 = Vector(xv,yv);

    return v1;
}

double Vector::norm (Vector& a){

   double Norm = sqrt(pow(a.getxLength(),2) + pow(a.getyLength(),2));

    return Norm;
}
