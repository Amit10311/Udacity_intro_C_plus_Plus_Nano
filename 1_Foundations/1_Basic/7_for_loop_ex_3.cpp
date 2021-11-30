#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for(auto v : b) {
        for(int i : v) {
            cout << i << " ";
        }
        cout << "\n";
    }
    cout <<"Length of b vector rows : "<<b.size()<<"\n"; 
    cout <<"Length of b vector coloumns : "<<b[0].size()<<"\n";  
}

/* ##  **Challenge**

Write a double range-based for loop that prints all of the entries of the 2D vector `b`. 

*/

/* Ouput 
1 2 
3 4 
5 6 
Length of b vector rows : 3
Length of b vector coloumns : 2
*/ 
