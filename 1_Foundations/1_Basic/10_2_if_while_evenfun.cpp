#include <iostream>
using std::cout;

int main() 
{
    // Write your code here.
    //  remainder ( i % 2 == 0) the number is even.
  
    int i = 1;
    while(i <= 10) {
        if(i % 2 == 0) {
            cout << i << "\n";
        }
        i++;
    }
}

/* OUTPUT : Only even Numbers

2
4
6
8
10

*/ 
