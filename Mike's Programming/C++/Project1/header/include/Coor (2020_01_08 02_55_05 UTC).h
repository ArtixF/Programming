#ifndef COOR_H
#define COOR_H
#include "Vector.h"

class Coor{
public:

    double x;
    double y;

    Coor () : x{0.}, y{0.}{
        // x = 0.;
        //y = 0.;
    }

    Coor (double x1, double y1) : x{x1}, y{y1}{
        //x = x1;
        //y = y1;
    }

    double X();
    double Y();

    Vector operator -( Coor& a);
};

//const Vector operator -(const Coor& a, const Coor& b)const;



#endif // COOR_H
