#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main () {
    string a("1 2 3 88");

    istringstream my_stream(a);
    
    int n;
    
    while (my_stream >> n) {             // move string into integer 
      cout << "That stream was successful: " << n << "\n";
    }
    cout << "The stream has failed." << "\n";
    
}
