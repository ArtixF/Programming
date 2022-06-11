
#include <iostream>

using namespace std;


int userInput(){
    // this function will collect a single integer value from the user and return it

    int numsort = 0;

    do{// ensurs that the integer entered by the user is less than the maximum number of elements in the array
        cout << "Please enter the number of elements you want to sort: "; //asking for the equation from the user
        cin >> numsort;
    }while (numsort > 100);

    return numsort;
}


void arrayOutput(int numArray[], int numSort){
    //this function takes in an integer array and the number of how many
    //of its elements that are to be displayed and displays them to the consol

    cout << "\n";
    for (int i = 0; i < numSort; ++i){

       cout << numArray[i] << " ";
    }
}




string backwardPass(int numArray[], int numSort){

    string updated = ""; //creating a string that will be filled
    //with the elements of the array since you cannot return an array from a function

    for (int i = numSort - 2; i > 0; --i){//searches through all but the first element from back to front

        if (numArray[i] > numArray[i+1]){ //tests if the first element is greater then the second element and if so switches their values

            int temp = numArray[i];
            numArray[i] = numArray[i+1];
            numArray[i+1] = temp;

            arrayOutput(numArray, numSort); // after a switch occures the array is printed to the screen

        }
    }

    for (int i = 0; i < numSort; ++i){// the every element of the array is added to a string and returned

        updated += numArray[i];

    }

    return updated;

}

string forwardPass(int numArray[], int numSort){

    int temp = 0; //temp is used to hold an integer when switching values
    bool switched = false; // a test for the loop to see if elements where switched
    string backpass = ""; // a string that temporaraly holds the output of backwardPass
    string sorted = ""; //a string that will hold the sorted arrays elements

    do{

        for (int i = 0; i < numSort - 2; ++i){ //searches through all but the last element from front to back

            if (numArray[i] > numArray[i+1]){ //tests if the first element is greater then the second element and if so switches their values and sets switched to true

                temp = numArray[i];
                numArray[i] = numArray[i+1];
                numArray[i+1] = temp;
                switched = true;

                arrayOutput(numArray, numSort);

            }

        }

        backpass = backwardPass(numArray, numSort); //calls the backwardPass function and stores it in a string

        for (int i = 0; i < numSort; ++i){ //assigns the output from the backwardPass function to each element of numArray

            numArray[i] = backpass.at(i);

        }
    }while (switched == true);// loop will end when no switches occur


    for (int i = 0; i < numSort; ++i){// when the array is sorted it gets converted back into a string and returned

        sorted += numArray[i] + " ";

    }

    return sorted;

}


int main()
{
    int numArray[100]; // creating an array of size 100

    int userIn = 0; // a variable to hold the users input

    for (int i = 0; i < 100; ++i){ // filling the array with random integers from 1-100

        numArray[i] = (rand() % 100) + 1;

    }

    userIn = userInput(); // collecting the user input and storing it in userIn

    cout << "\n";

    arrayOutput(numArray, userIn); // displaying the unsorted array

    cout << "\n";

    cout << forwardPass(numArray, userIn); // calling the forwardPass function once will sort the whole array and then display the sorted array

    return 0;
}
