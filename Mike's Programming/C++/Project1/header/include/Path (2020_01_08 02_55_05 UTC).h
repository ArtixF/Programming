#ifndef PATH_H
#define PATH_H
#include "Coor.h"

using namespace std;

class Path{
public:

    int numElements;

    Path (){

       //std::vector<Coor> array1;
       numElements = 0;
    }

    void addPoint(Coor &x);

    const int num_points ();

    const Coor operator [](const int& a)const;
    //Coor& operator [](const int& a)const;

    double length();
};

#endif // PATH_H
