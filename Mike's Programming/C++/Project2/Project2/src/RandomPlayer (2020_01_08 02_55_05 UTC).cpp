//Michael Masters 0343427
#include "RandomPlayer.h"
#include "cmath"

void RandomPlayer::makeMove(Board& b1)const{

    int square = 0;

    do{

        square = rand() % 8;

    }while (b1.isLegal(p, square) == false);



    b1.makeMove(getPiece(), square);

}
