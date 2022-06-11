//Michael Masters 0343427
#include "Game.h"
#include "Board.h"
#include "Player.h"
#include "iostream"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "RandomPlayer.h"

using namespace std;


Game::Game()
{

    p1 = nullptr;
    p2 = nullptr;
    player1 = 0;
    player2 = 0;
    counter = 0;
}


void Game::selectPlayer(){

    string nameOfPLayer = "";

    cout << "Is player1 human(1) or computer(2)?: ";
    cin >> player1;

    if (player1 == 1){

        cout << "What is the name of this human player?: ";
        cin >> nameOfPLayer;

        p1 = new HumanPlayer(nameOfPLayer, Piece::first);
    }

    else {

        p1 = new RandomPlayer(Piece::first);
    }

    cout << "Is player1 human(1) or computer(2)?: ";
    cin >> player2;

    if (player2 == 1){

        cout << "What is the name of this human player?: ";
        cin >> nameOfPLayer;

        p2 = new HumanPlayer(nameOfPLayer, Piece::second);
    }

    else {

        p2 = new RandomPlayer(Piece::second);
    }
}


Player* Game::nextPlayer() const{

    if (counter%2 == 0){

        return p2;
    }

    else{

        return p1;
    }
}


bool Game::isRunning() const{

    if (b1.isFull() || b1.isWinner(Piece::first)
        || b1.isWinner(Piece::second)){

        return false;
    }

    else {

        return true;
    }
}


void Game::play(){

     if(isRunning()){

        counter++;

        nextPlayer()->makeMove(b1);

        b1.display();
     }
}


void Game::AnnounceWinner(){

    if(b1.isWinner(Piece::first)){

        cout << p1->getName() <<" wins!!!!";
    }

    else if(b1.isWinner(Piece::second)){

        cout << p2->getName() <<" wins!!!!";
    }

    else{

        cout << "its a tie!!!!";
    }
}


Game::~Game()
{

    delete p1;
    delete p2;
}
