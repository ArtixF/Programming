//Michael Masters 0343427
#ifndef COOR_H
#define COOR_H
#include "Vector.h"

class Coor{
public:

    //creating datafields to hold the x and y values
    double x;
    double y;

    //default constructor setting x and y to 0
    Coor () : x{0.}, y{0.}{
    }

    //constructor that assigns x and y to the proper values
    Coor (double x1, double y1) : x{x1}, y{y1}{
    }

    //x and y accessors
    const double X()const;
    const double Y()const;

    //operator overloading using 2 Coor and returning a Vector
    Vector operator -( Coor& a);
};
#endif // COOR_H
