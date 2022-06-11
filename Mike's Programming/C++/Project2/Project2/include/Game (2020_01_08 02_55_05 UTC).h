//Michael Masters 0343427
#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "RandomPlayer.h"

class Game
{
    public:
        Game();
        ~Game();

        //creating players
        Player* p1;
        Player* p2;

        int player1;
        int player2;

        Board b1;

        int counter;

        void selectPlayer();

        Player* nextPlayer() const;

        bool isRunning() const;

        void play();

        void AnnounceWinner();
};

#endif // GAME_H
