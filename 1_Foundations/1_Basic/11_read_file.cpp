#include <fstream>   // object to handle input file streams
#include <iostream>
#include <string>

int main()
{
    std::ifstream my_file;            // declared var
    my_file.open("files/1.board");   // initialized var 
    // std::ifstream my_file(path);
    
    if (my_file) {                   // Evaluate the  object as a bool
      std::cout << "The file stream has been created!" << "\n";
    }    
}
  
  /*  OUTPUT
  
  The file stream has been created!
  
  */ 
