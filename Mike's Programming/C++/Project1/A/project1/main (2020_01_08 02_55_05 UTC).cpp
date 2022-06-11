#include <iostream>
#include "Coor.h"
#include "Vector.h"
#include "Path.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    Coor c1 = Coor (4.,2.);
    Coor c2 = Coor (0.,0.);
    Coor c3 = Coor (2.,4.);
    Coor c4 = Coor (0.,0.);

    Path p1 = Path();
    p1.addPoint(c1);
    p1.addPoint(c2);
    p1.addPoint(c3);
    p1.addPoint(c4);


    cout << p1.num_points()<< "\n";

    cout << p1.length();

    return 0;
}
