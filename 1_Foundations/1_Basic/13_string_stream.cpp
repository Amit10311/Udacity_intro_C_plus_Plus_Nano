#include <iostream>
#include <sstream>   // std::istringstream
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main () 
{
    string a("199 2 3");

    istringstream my_stream(a);    // initialize

    int n;
    my_stream >> n;  // shifts very first integer 
    cout << n << "\n";
}

/* OUTPUT

199

*/ 
