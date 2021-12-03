#include <fstream>   // std::ifstream 
#include <iostream>
#include <string>

int main() { 
    std::ifstream my_file;          // declare var
    my_file.open("files/1.board"); 

    if (my_file) {                  
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {         //  write file lines to a string use getline fun
            std::cout << line << "\n";
        }
    }
}

/*   OUTPUT

The file stream has been created!
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,0,0,0,1,0,

*/
