//Michael Masters 0343427
#include "Coor.h"
#include "Vector.h"

//x value accessor
const double Coor::X()const{
    return x;
}

//y value accessor
const double Coor::Y()const{
    return y;
}

//operator overloading using 2 Coor and returning a Vector
Vector Coor::operator-(  Coor& a){

    double xv = X() - a.X();
    double yv = Y() - a.Y();

    Vector v1 = Vector(xv,yv);

    return v1;
}
