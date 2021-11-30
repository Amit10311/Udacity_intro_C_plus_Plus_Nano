#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for(int i = 0; i < v.size(); ++i)
        sum += v[i];          // change here 
    return sum;
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}
