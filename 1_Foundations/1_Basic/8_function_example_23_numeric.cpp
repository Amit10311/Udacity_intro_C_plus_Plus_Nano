#include <iostream>
#include <vector>   // std::vector=
#include <numeric>  // std::accumulate

using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// It should return the sum of all the ints in the vector.

int AdditionFunction(const vector<int> &a)
{
    return std::accumulate(a.begin(), a.end(), 0);
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    cout << AdditionFunction(v) << "\n";
}
