/*#include " ArrayTemplate.h"
#include "iostream"

using namespace std;

 ArrayTemplate:: ArrayTemplate(unsigned int s)
{
    arraySize = s;
    Array1 = new t[arraySize];
}

unsigned int ArrayTemplate::getSize(){

    return arraySize;
}

t ArrayTemplate::operator ()(int n){

    if (n < 0 || n > arraySize){

        cout << "invalid input";
        return [0];
    }

    return array1[n-1];
}

t ArrayTemplate::operator ()(int n) const{

    if (n < 0 || n > arraySize){

        cout << "invalid input";
        return [0];
    }

    return array1[n-1];
}*/
