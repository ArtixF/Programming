//Michael Masters 0343427
#ifndef VECTOR_H
#define VECTOR_H

class Vector{
    public:

    //creating datafields to hold the x and y values
    double xLength;
    double yLength;

    //default constructor setting x and y to 0
    Vector () : xLength{0.}, yLength{0.}{
    }

    //constructor that assigns x and y to the proper values
    Vector (double xl, double yl): xLength{xl}, yLength{yl}{
    }

    //x and y accessors
    const double X()const;
    const double Y()const;

    //overloading the negation operator
    Vector operator -();

    //the norm function calculates the nomal of a function and returns it as a double
    const double norm ()const;
};

    //overloading the plus and minus operators as global functions
    Vector operator +( Vector& a, Vector& b);
    Vector operator -(Vector& a, Vector& b);

#endif // VECTOR_H
