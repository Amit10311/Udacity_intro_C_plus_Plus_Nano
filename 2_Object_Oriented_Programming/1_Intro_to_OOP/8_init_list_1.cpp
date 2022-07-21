#include <assert.h>
#include <string>
#include <iostream>

// TODO: Define structure Person
struct Person {
  // TODO: Define a public constructor with an initialization list
  Person(std::string name) : name(name) {}
  // TODO: Define a public member variable: name
  std::string name;  
};

// Test
int main() {
  Person alice("Alice");
  Person bob("Bob");
  assert(alice.name != bob.name);
  std::cout<< alice.name <<"\n";
}

  /*  Initializer Lists
  
Alice

  */ 
