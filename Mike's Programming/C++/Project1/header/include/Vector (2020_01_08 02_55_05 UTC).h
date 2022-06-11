#ifndef VECTOR_H
#define VECTOR_H


class Vector{
    public:
    double xLength;
    double yLength;

    Vector () : xLength{0.}, yLength{0.}{

    }

    Vector (double xl, double yl): xLength{xl}, yLength{yl}{

    }

    double getxLength();
    double getyLength();


    Vector operator +( Vector& a);
    Vector operator -(Vector& a);
    Vector operator -();

    double norm (Vector& a);
    double length (Vector& a);
};

#endif // VECTOR_H
