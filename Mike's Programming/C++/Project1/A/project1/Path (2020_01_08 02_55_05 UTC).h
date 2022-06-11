//Michael Masters 0343427
#ifndef PATH_H
#define PATH_H
#include "Coor.h"
#include <vector>

using namespace std;

class Path{
public:

    //creating a dynamic array that holds Coors
    std::vector<Coor> CoorArray;

    //this function adds an element to the array of Coors
    void addPoint(Coor &x);

    //this function returns the number of elements in the array
    const int num_points ();

    //overloading the subscript operator for constant objects that returns the K-th Coor
    const Coor operator [](const int& a)const;

    //overloading the subscript operator returns the K-th  referance Coor
    Coor& operator [](int a);

    //returns the total length of the path
    double length();
};
#endif // PATH_H
