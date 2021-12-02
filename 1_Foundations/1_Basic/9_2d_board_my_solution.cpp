#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// TODO: Add PrintBoard function here.
 void PrintBoard( vector<vector<int>> a){  
   
   for(auto v : a) {
     for(int i : v) {
       cout << i << " ";
       }
     cout << "\n";
    }
   return;
 }


int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);

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
