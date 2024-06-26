#include <iostream>
using std::cout;

int* AddOne(int& j) 
{
    // Increment the referenced int and return the
    // address of j.
    j++;
    cout << "The memory address of j : " << &j << "\n";
    return &j;
}

int main() 
{
    int i = 1;
    cout << "The value of i is: " << i << "\n";
    
    // Declare a pointer and initialize to the value
    // returned by AddOne:
    int* my_pointer = AddOne(i);
    cout << "The memory address of i : " << &i << "\n";
    
    cout << "The value of i is now: " << i << "\n";
    cout << "The value of the int pointed to by my_pointer is: " << *my_pointer << "\n";
}


  /*  Returning a Pointer from a Function
  
The value of i is: 1

The memory address of j : 0x7ffe0f26896c
The memory address of i : 0x7ffe0f26896c

The value of i is now: 2
The value of the int pointed to by my_pointer is: 2

  */ 
