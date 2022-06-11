//Michael Masters 0343427
#ifndef PLAYER_H
#define PLAYER_H
#include "string"
#include "Board.h"

using namespace std;

class Player
{
    public:

        string name;

        Piece p;// first or second ?

        Player(const string&, Piece);

        Piece getPiece() const;

        virtual void makeMove(Board&)const =0;

        string getName()const;

    private:
};

#endif // PLAYER_H
