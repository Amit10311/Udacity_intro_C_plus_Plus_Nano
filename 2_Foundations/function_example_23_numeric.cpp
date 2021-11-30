#include <iostream>
#include <vector>
#include <numeric>  // std::accumulate

using std::cout;
using std::vector;


int AdditionFunction(const vector<int> &v)
{
    return std::accumulate(v.begin(), v.end(), 0);
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    cout << AdditionFunction(v) << "\n";
}
