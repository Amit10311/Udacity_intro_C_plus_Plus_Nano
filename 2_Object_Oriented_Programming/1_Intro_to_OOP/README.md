# 1. Intro to OOP

### **1. Jupyter with C++**

```
g++ -std=c++17 ./code/filename.cpp 
./a.out
```
or 

```
g++ -std="c++17" ./code/filename.cpp && ./a.out

g++ -std=c++17 ./code/1_main.cpp && ./a.out
```
----------------------------------------------------------------------------
### **2. Structures**

```cpp
struct Rectangle {
  float length;
  float width;
};
```

 2.1 **Types**
 ```cpp
int value;
Rectangle rectangle;
Sphere earth;
```

2.2 **User-Defined Types**
```cpp
struct Date {
  int day;
  int month;
  int year;
};
```

* Initialize these member variables:

```cpp
// Create an instance of the Date structure
Date date;
// Initialize the attributes of Date
date.day = 1;
date.month = 10;
date.year = 2019;
```

2.3 **Member Initialization**
```cpp
struct Date {
  int day{1};
  int month{1};
  int year{0};
};
```


2.4 **Access Specifiers**


* **Private Members**

```cpp
struct Date {
 private:
  int day{1};
  int month{1};
  int year{0};
};
```

* **Accessors And Mutators**

```cpp
struct Date {
 public:
  int Day() { return day; }
  void Day(int day) { this.day = day; }
  int Month() { return month; }
  void Month(int month) { this.month = month; }
  int Year() { return year; }
  void Year(int year) { this.year = year; }

 private:
  int day{1};
  int month{1};
  int year{0};
};
```

* **Avoid Trivial Getters And Setters**
```cpp
 struct Point {   // Good: concise
    int x {0};   // public member variable with a default initializer of 0
    int y {0};   // public member variable with a default initializer of 0
};
```

----------------------------------------------------------------------------

### **3. Classes**

* `Date` Class

```cpp
// Use the keyword “class” to define a Date class:
class Date {
  int day{1};
  int month{1};
  int year{0};
};
```

*  `Date` Accessors And Mutators

```cpp
class Date {
 public:
  int Day() { return day_; }
  void Day(int d) { day_ = d; }

 private:
  int day_{1};
  int month_{1};
  int year_{0};
};
```

* `Date` Invariants

```cpp
class Date {
 public:
  int Day() { return day; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day_ = d;
  }

 private:
  int day_{1};
  int month_{1};
  int year_{0};
};
```

**3.1 Constructors**

Constructors are member functions of a class or struct that initialize an object.

```cpp
class Date {
 public:
  Date(int d, int m, int y) {  // This is a constructor.
    Day(d);
  }
  int Day() { return day; }
  void Day(int d) {
    if (d >= 1 && d <= 31) day = d;
  }
  int Month() { return month; }
  void Month(int m) {
    if (m >= 1 && m <= 12) month = m;
  }
  int Year() { return year_; }
  void Year(int y) { year = y; }

 private:
  int day{1};
  int month{1};
  int year{0};
};
```

**3.2 Scope Resolution**

```cpp
Person::move(); \\ Call the move the function that is a member of the Person class.
std::map m; \\ Initialize the map container from the C++ Standard Library.  
```

**Class**
```cpp
class Date {
 public:
  int Day() const { return day; }
  void Day(int day);  // Declare member function Date::Day().
  int Month() const { return month; }
  void Month(int month) {
    if (month >= 1 && month <= 12) Date::month = month;
  }
  int Year() const { return year; }
  void Year(int year) { Date::year = year; }

 private:
  int day{1};
  int month{1};
  int year{0};
};

// Define member function Date::Day().
void Date::Day(int day) {
  if (day >= 1 && day <= 31) Date::day = day;
}
```

**Namespaces**
```cpp
namespace English {
void Hello() { std::cout << "Hello, World!\n"; }
}  // namespace English

namespace Spanish {
void Hello() { std::cout << "Hola, Mundo!\n"; }
}  // namespace Spanish

int main() {
  English::Hello();
  Spanish::Hello();
}
```

**3.3 Initializer Lists**

```cpp
Date::Date(int day, int month, int year) : year_(y) {
  Day(day);
  Month(month);
}
```

















