#include <iostream>
using std::cout;

int main() {
    int i = 5;
    int j = 6;
    
    // Print the memory addresses of i and j
    cout << "The address of i is: " << &i << "\n";
    cout << "The address of j is: " << &j << "\n";
}


  /*  OUTPUT
  
The address of i is: 0x7ffc9d1886a0
The address of j is: 0x7ffc9d1886a4
  */ 
