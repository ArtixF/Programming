//Michael Masters 0343427
#include "Player.h"
#include "Board.h"
#include "iostream"

using namespace std;

Player::Player(const string& s1, Piece p1)
{
    name = s1;
    p = p1;
}

Piece Player::getPiece() const{

    return p;
}

string Player::getName()const{

    return name;
}
