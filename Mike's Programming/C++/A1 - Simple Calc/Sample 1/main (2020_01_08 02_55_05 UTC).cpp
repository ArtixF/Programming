#include <cstdlib>
#include <iostream>

using namespace std;



int main()  {
    // Initialize rand number sequence
    srand(4711);

    char c;
    do {
	// Generate a random number in the interval [1,6] and print it
	int diceVal = rand() % 6 + 1;
	cout << "The dice shows: " << diceVal << '\n';

	// Ask the user whether (s)he wants to continue
	cout << "Try again? ";
	cin >> c;
    } while (!cin.fail()  && c != 'n' && c != 'N'); // End on error, 'n' or 'N'.
}
