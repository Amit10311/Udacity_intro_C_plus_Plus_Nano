#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    map<string, int> my_map;

    my_map.insert(pair<string, int>("Ab", 1));
    my_map.insert(pair<string, int>("Abb", 2));
    my_map.insert(pair<string, int>("Abc", 3));
    my_map.insert(pair<string, int>("Abd", 4));
    my_map.insert(pair<string, int>("Ac", 5));
    my_map.insert(pair<string, int>("Ad", 5));

    cout<<my_map.lower_bound("Abb")->second<<endl;
    cout<<my_map.upper_bound("Ab")->second<<endl;
    return 0;
}

  /*  Pointers Continued
 2
 2 
  */
