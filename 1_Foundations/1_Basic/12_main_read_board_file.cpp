#include <iostream>
#include <string>
#include <vector>
#include <fstream>   // std::ifstream 
using std::cout;
using std::string;
using std::vector;
using std::ifstream;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile(string path){
   ifstream my_file;            // declared var
   my_file.open(path);   
  if (my_file) {                  
        cout << "The file stream has been created!" << "\n";
        string line;
        while (getline(my_file, line)) {         //  write file lines to a string.
            cout << line << "\n";
        }
    }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  ReadBoardFile("1.board");

}

/*  OUTPUT

The file stream has been created!
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,0,0,0,1,0,

*/
