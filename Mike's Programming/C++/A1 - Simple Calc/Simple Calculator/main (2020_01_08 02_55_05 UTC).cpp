#include <iostream>
using namespace std;

enum class Operations{
    PLUS='+', MINUS='-', MULTIPLY='*',DEVIDE='/' //creating an enum class that will help to test the symbol entered by the user
    };

int main()
{
    double firstNum = 0; // holds the first number in the equation
    char symbolTest = ' '; // holds the operational symbol in the equation
    double secondNum = 0; // holds the second number in the equation
    double total = 0; //holds the answer to the equation

    cout << "Please enter the equation: "; //asking for the equation from the user
    cin >> firstNum >> symbolTest >> secondNum; //collecting the equation from the user on a single line

    switch (static_cast<Operations>(symbolTest)){

        case Operations::PLUS:
            total = firstNum + secondNum;
            break;

        case Operations::MINUS:
            total = firstNum - secondNum;
            break;

        case Operations::MULTIPLY:
            total = firstNum * secondNum;
            break;

        case Operations::DEVIDE:
            if (secondNum == 0){
                cout << "ERROR: you cannot devide by zero";
                break;
            }
            total = firstNum / secondNum;
            break;
        }

        cout << total; //displays the answer to the equation

    return 0;
}
