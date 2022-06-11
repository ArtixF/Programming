//Michael Masters 0343427
#include "Board.h"
#include "iostream"

using namespace std;

//construct a clear board
Board::Board()
{
    clear();
}

//clears the board
void Board::clear(){

    for (int i = 0; i < 9; ++i){

        array1[i] = Piece::empty;
    }
}

//prints the board to the screen
void Board::display(){

    cout << "+-----------+\n";
    cout << "| " << getPieceType(array1[0]) << " | " << getPieceType(array1[1]) << " | " << getPieceType(array1[2]) << " |\n";
    cout << "+-----------+\n";
    cout << "| " << getPieceType(array1[3]) << " | " << getPieceType(array1[4]) << " | " << getPieceType(array1[5]) << " |\n";
    cout << "+-----------+\n";
    cout << "| " << getPieceType(array1[6]) << " | " << getPieceType(array1[7]) << " | " << getPieceType(array1[8]) << " |\n";
    cout << "+-----------+\n";
}

//returns the piece type as char
char Board::getPieceType(Piece p){

    char out;

    switch (static_cast<Piece>(p)){

        case Piece::empty:

            out = ' ';
            break;

        case Piece::first:

            out = 'X';
            break;

        case Piece::second:

            out = 'O';
            break;
        }
    return out;
}

//makes a move on the board
void Board::makeMove(Piece p, int n){

    if (isLegal(p, n)){

        array1[n] = p;
    }

    else {

        cout << " illigal move\n";
    }
}

//takes away the move at index n
void Board::undoMove(int n){

    array1[n] = Piece::empty;
}

//checks to see if the piece p can go in index n
bool Board::isLegal(Piece p, int n){

    if (n > -1 && n < 9 && array1[n] == Piece::empty){

        return true;
    }

    else{

        return false;
    }
}

//tests to see if pice p is in a winning position
bool Board::isWinner(Piece p)const{

    if ((array1[0] == p && array1[1] == p && array1[2] == p) ||
        (array1[3] == p && array1[4] == p && array1[5] == p) ||
        (array1[6] == p && array1[7] == p && array1[8] == p) ||

        (array1[0] == p && array1[3] == p && array1[6] == p) ||
        (array1[1] == p && array1[4] == p && array1[7] == p) ||
        (array1[2] == p && array1[5] == p && array1[8] == p) ||

        (array1[0] == p && array1[4] == p && array1[8] == p) ||
        (array1[2] == p && array1[4] == p && array1[6] == p)){

            return true;
        }

    else{

        return false;
    }
}

//checks to see if the board is full
bool Board::isFull()const{

    if (array1[0] != Piece::empty && array1[1] != Piece::empty && array1[2] != Piece::empty && array1[3] != Piece::empty && array1[4] != Piece::empty && array1[5] != Piece::empty && array1[6] != Piece::empty && array1[7] != Piece::empty && array1[8] != Piece::empty){

        return true;
    }

    else {

        return false;
    }
}
