//Michael Masters 0343427
#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "Player.h"

class ComputerPlayer : public Player{
    public:

        string name = "computer";

        int nameint = 0;

        ComputerPlayer(Piece p) : Player(name, p){nameint++;};
};

#endif // COMPUTERPLAYER_H
