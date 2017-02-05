#include <iostream>
#include <vectors>
#include <strings>

CONST int WIN_NUM = 4;
CONST int BOARD_SIZE = 7;

class Piece{
  Private:
    char state;
  Public:
    bool checkState(char);
    bool setState(char);
    char getState() const {return state;}
    Piece(char);
};


Piece::Piece(char move){
  if (setState(move) == true)
    return;
  else
    state = 'e';
}

bool Piece::checkState(char move){ //returns true if move is by player 1 or 2. Otherwise returns false
  if( move == '1')
    return true;
  else if(move == '2')
    return true;
  else
    return false;
}

bool Piece::setState(char move){ //sets state to the move if the value is approved by checkState(). Does not set state otherwise
  if (checkState(move) == true){
    state = move;
    return true;
    }
  else
    return false;
}
