#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main() 
{
    string a("1 2 3 6");

    istringstream my_stream(a);

    int n;
    
    // Testing to see if the stream was successful and printing results.
 
    while (my_stream) {         //boolean 
        my_stream >> n;
        if (my_stream) {
            cout << "That stream was successful: " << n << "\n";
        }
        else {
            cout << "That stream was NOT successful!" << "\n";  //there wasn't any more of the string to stream          
        }
    }
}


/* OUTPUT

That stream was successful: 1
That stream was successful: 2
That stream was successful: 3
That stream was NOT successful!

*/
