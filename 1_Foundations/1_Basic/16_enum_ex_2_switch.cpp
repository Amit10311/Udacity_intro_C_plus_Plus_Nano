#include <iostream>
using std::cout;

int main()
{ 
    // Create the enum Direction with fixed values.
    enum class Direction {kUp, kDown, kLeft, kRight};

    // Create a Direction variable
    Direction a = Direction::kUp;
    
    // Test cases 
    switch (a) {
      case Direction::kUp : cout << "Going up!" << "\n";
        break;
      case Direction::kDown : cout << "Going down!" << "\n";
        break;
      case Direction::kLeft : cout << "Going left!" << "\n";
        break;
      case Direction::kRight : cout << "Going right!" << "\n";
        break;
    }
}

/*  OUTPUT

Going up!

*/ 
