//Michael Masters 0343427
#include "Path.h"
#include "vector"

//this function adds an element to the array of Coors
void Path::addPoint(Coor &x){

    CoorArray.push_back(x);
}

//this function returns the number of elements in the array
const int Path::num_points (){

    return CoorArray.size();
}

//overloading the subscript operator for constant objects that returns the K-th Coor
const Coor Path::operator [](const int& a)const{

    Coor c1 = CoorArray[a];
    return c1;
}

//overloading the subscript operator returns the K-th  referance Coor
Coor& Path::operator [](int a){

    Coor& c1 = CoorArray[a];
    return c1;
}

//returns the total length of the path
double Path::length(){

    double total = 0;

    if (num_points() < 2){

            return 0;
        }

    for (int i = 1; i < num_points(); ++i){

            Vector v1 = Vector(CoorArray[i]-CoorArray[i-1]);
            double temp = v1.norm();
            total = total + temp;
    }

    return total;
}
