//Michael Masters 0343427
#ifndef  ARRAYTEMPLATE_H
#define  ARRAYTEMPLATE_H
#include "iostream"

using namespace std;

template < typename T = double> class ArrayTemplate
{
    public:

    //type definitions for unsigned int and T
    typedef unsigned int unint;
    typedef T elementType;

    //creating datafields for the size of the array and the type
    unint arraySize;
    elementType *Array1;

    //constructor for the template setting the size of the array and creating the array
    ArrayTemplate(int s){

        arraySize = s;
        Array1 = new elementType [arraySize];
    }

    //returns the size of the array
    int getSize(){
        return arraySize;
    }

    //overloading the operator so that perenthesis returns the value at the index from 1-arraySize
    elementType operator ()(unint n){

        if (n < 0 || n > arraySize){
            cout << "invalid input";
            return Array1[0];
        }
        return Array1[n-1];
    }

    //overloading the operator for const arrays so that perenthesis returns the value at the index from 1-arraySize
    elementType operator ()(unint n) const{

        if (n < 0 || n > arraySize){
            cout << "invalid input";
            return Array1[0];
        }
        return Array1[n-1];
    }

    //sets the element at index n to value from 1- arraySize
    void setElement(int n, elementType value){

        Array1[n-1] = value;
    }
};

#endif //  ARRAYTEMPLATE_H
