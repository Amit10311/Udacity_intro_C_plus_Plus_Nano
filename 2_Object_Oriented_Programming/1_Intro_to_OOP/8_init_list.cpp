#include <assert.h>
#include <string>

// 1. TODO: Define class Person
class Person {
public:
  // 3. TODO: Define a public constructor with an initialization list
  Person(std::string name) : name(name) {}
  // 2. TODO: Define a public member variable: name
  std::string name;  
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
}


