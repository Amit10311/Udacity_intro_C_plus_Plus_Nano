#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Vector v is declared and initialized to {1, 2, 3}
    vector<int> v {1, 2, 3};
    
    // Declare and initialize a pointer to the address of v here:
    vector<int> *pointer_to_v = &v;

    // The following loops over each int a in the vector v and prints.
    // Note that this uses a "range-based" for loop: https://www.geeksforgeeks.org/range-based-loop-c/
    for (int a: v) {
        cout << a << "\n";
    }
    
    cout<< "\n";

    // Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
    cout << "The first element of v is: " << (*pointer_to_v)[0] << "\n";
}


  /*  Pointers to Other Object Types
  
1
2
3

The first element of v is: 1

  */
