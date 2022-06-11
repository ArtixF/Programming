//Michael Masters 0343427
#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    //creating a game
    Game g1;

    //selecting the players of the game
    g1.selectPlayer();

    //displaying the square numbers
    cout << "+-----------+\n";
    cout << "| 0 | 1 | 2 |\n";
    cout << "+-----------+\n";
    cout << "| 3 | 4 | 5 |\n";
    cout << "+-----------+\n";
    cout << "| 6 | 7 | 8 |\n";
    cout << "+-----------+\n";

    //looping so that the game keeps playing until
    //their is a winner or the board is full
    while (g1.isRunning() == true){

        g1.play();
    }

    //the winner or a tie is announced
    g1.AnnounceWinner();

    return 0;
}
