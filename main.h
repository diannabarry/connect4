#include <iostream>
#include <string>

using namespace std;

int const WIN_NUM = 4;
int const BOARD_SIZE = 7;

class Piece{
  private:
    char state;
  public:
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
