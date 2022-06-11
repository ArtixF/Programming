//Michael Masters 0343427
#include "HumanPlayer.h"
#include "Player.h"
#include "iostream"

using namespace std;

/*HumanPlayer::HumanPlayer(const string& s1, Piece p1) : Player(const string& s1, Piece p1) name(s1), p(p1)
{
    name = s1;
    p = p1;
}*/ //not needed

void HumanPlayer::makeMove(Board& b1) const{

    int square = 0;

    cout << "Which square do you want to put your piece on ?: ";
    cin >> square;

    b1.makeMove(getPiece(), square);
}
