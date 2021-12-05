#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    string b("1,2,3p");

    istringstream my_stream(b);

    char c;
    int n;
    
    // stream an `int` followed by a `char`
    while (my_stream >> n >> c) {
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    cout << "The stream has failed." << "\n";
}

/* OUTPUT

That stream was successful:1 ,
That stream was successful:2 ,
That stream was successful:3 p
The stream has failed.

*/ 
