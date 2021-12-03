#include <fstream>   // object to handle input file streams
#include <iostream>
#include <string>

int main()
{
    std::ifstream my_file;            // declared my_file
    my_file.open("files/1.board");   // initialized my_file 
    // std::ifstream my_file(path);
    
    if (my_file) {                   // check if it open file properly 
      std::cout << "The file stream has been created!" << "\n";
    }    

  
  /*  OUTPUT
  
  The file stream has been created!
  
  */ 
