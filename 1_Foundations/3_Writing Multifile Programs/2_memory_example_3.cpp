#include <iostream>
using std::cout;

int main() 
{
    int i = 5;
    // A pointer pointer_to_i is declared and initialized to the address of i.
    int* pointer_to_i = &i;
    
    // Print the memory addresses of i and j
    cout << "The address of i is:          " << &i << "\n";
    cout << "The variable pointer_to_i is: " << pointer_to_i << "\n";
    cout << "The value of the variable pointed to by pointer_to_i is: " << *pointer_to_i << "\n";
}


  /*  Getting an Object Back from a Pointer Address
  
The address of i is:          0x7ffcb02ed40c
The variable pointer_to_i is: 0x7ffcb02ed40c
The value of the variable pointed to by pointer_to_i is: 5
  */ 
