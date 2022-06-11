//Michael Masters 0343427
#include <iostream>
#include <vector>

using namespace std;


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

    //Vector vectSub (const Coor& a, const Coor& b);
};


class Vector{

    double head;
    double tail;

    Vector () : head{0.}, tail{0.}{

        //head = 0.;
        //tail = 0.;
    }

    Vector (double head1, double tail1): head{head1}, tail{tail1}{

        //head = head1;
        //tail = tail1;
    }

    const Vector operator +(const Vector& a)const;
    const Vector operator -(const Vector& a)const;
    const Vector operator -()const;

    const double norm (const Vector& a);
    //double length (const Vector& a);
} ;


class Path{
public:

    //std::vector<Coor> array1;

    Path (){

       std::vector<Coor> array1;
    }

    void addPoint(Coor x);

    const int num_points ();

    //const Coor operator [](const int& a)const;
    // Coor& operator [](const int& a)const;

    double length();
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
