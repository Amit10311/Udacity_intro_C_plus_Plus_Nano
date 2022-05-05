#include <iostream>
using std::cout;


int MultiplyByTwo(int i) {
    i = 2*i;
    return i;
}

int main() {
    int a = 5;
    cout << "The int a equals: " << a << "\n";
    int b = MultiplyByTwo(a);
    cout << "The int b equals: " << b << "\n";
    cout << "The int a still equals: " << a << "\n";
}

 /*  OUTPUT
 
The int a equals: 5
The int b equals: 10
The int a still equals: 5

  */ 
