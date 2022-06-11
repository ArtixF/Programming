//Michael Masters 0343427
#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H
#include "ComputerPlayer.h"


class RandomPlayer : public ComputerPlayer{
    public:

        RandomPlayer(Piece p) : ComputerPlayer(p){}

        void makeMove(Board&) const;

    protected:

    private:
};

#endif // RANDOMPLAYER_H
