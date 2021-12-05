#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    string b("1,2,3");

    istringstream my_stream(b);

    char c;
    int n;

    while (my_stream >> n >> c) {                // tried to stream an `int` followed by a `char`
      cout << "That stream was successful:" << n << " " << c << "\n";
    }
    cout << "The stream has failed." << "\n";
}



/* OUTPUT

That stream was successful:1 ,
That stream was successful:2 ,
The stream has failed.

*/ 
