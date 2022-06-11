#include "Coor.h"
#include "Vector.h"

double Coor::X(){
    return x;
}

double Coor::Y(){
    return y;
}

Vector Coor::operator-(  Coor& a){

    double xv = X() - a.X();
    double yv = Y() - a.Y();

    Vector v1 = Vector(xv,yv);

    return v1;
}
