
![image](https://user-images.githubusercontent.com/20908007/145121630-16f3456c-eeb7-42da-9007-3ace502c6bb8.png)


```
 $ g++ program_name.cpp  
 # run ./a.out 
```

## DEBUGGING
```
C / C++ : g++ build and debug active file
```

## USING C++ in google colab
```
%%writefile main.cpp

#include <iostream>
using std::cout;

int main() {
    // TODO: Add your code here:
    cout << "Hello!" << "\n";   
}
```
```
%%script bash
g++ main.cpp -std=c++11
./a.out
```
