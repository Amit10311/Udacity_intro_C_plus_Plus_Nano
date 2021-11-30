#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(const vector<int> &v)  // refrence and constant variable 
{
    int sum = 0;
    for(const int &i : v)                   // reading variable 
        sum += i;
    return sum;
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}
