//Michael Masters 0343427
#ifndef BOARD_H
#define BOARD_H

//piece enum class
enum class Piece{

    empty = ' ', first = 'X', second = 'O'
};


class Board{
    public:

        Piece array1[9];

        Board();

        //clearing the board
        void clear();

        //diaplays the board
        void display();

        //returns he char for each peice type
        char getPieceType(Piece p);

        //makes a move on the board
        void makeMove(Piece , int);

        void undoMove(int);

        //checks to see if the move is legal
        bool isLegal(Piece , int);

        //tests to see if their is a winner
        bool isWinner(Piece)const;

        //tests to see if the board is full
        bool isFull()const;
};

#endif // BOARD_H
