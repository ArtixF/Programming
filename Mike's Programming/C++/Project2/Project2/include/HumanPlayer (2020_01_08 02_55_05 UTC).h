//Michael Masters 0343427
#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"


class HumanPlayer : public Player
{
    public:

        HumanPlayer(const string& name, Piece p) : Player(name, p){};

        void makeMove(Board&) const;


    protected:

    private:
};

#endif // HUMANPLAYER_H
