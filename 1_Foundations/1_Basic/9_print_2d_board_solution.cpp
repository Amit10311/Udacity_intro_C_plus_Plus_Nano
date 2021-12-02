#include <iostream>
#include <vector>
using std::cout;
using std::vector;

   // TODO: Add void PrintBoard function here
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  
     // TODO: Call PrintBoard function here.
  PrintBoard(board);
  
  cout <<"Length of board rows : "<<board.size()<<"\n"; 
  cout <<"Length of board coloumns : "<<board[0].size()<<"\n";  
}

/*  OUTPUT

0 1 0 0 0 0 
0 1 0 0 0 0 
0 1 0 0 0 0 
0 1 0 0 0 0 
0 0 0 0 1 0

Length of board rows : 5
Length of board coloumns : 6

*/ 
