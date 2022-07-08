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

```
struct Rectangle {
  float length;
  float width;
};
```

 2.1 **Types**
 ```
int value;
Rectangle rectangle;
Sphere earth;
```

2.2 **User-Defined Types**
```
struct Date {
  int day;
  int month;
  int year;
};
```

* Initialize these member variables:

```
// Create an instance of the Date structure
Date date;
// Initialize the attributes of Date
date.day = 1;
date.month = 10;
date.year = 2019;
```

2.3 **Member Initialization**
```
struct Date {
  int day{1};
  int month{1};
  int year{0};
};
```


2.4 **Access Specifiers**


* **Private Members**

```
struct Date {
 private:
  int day{1};
  int month{1};
  int year{0};
};
```

* **Accessors And Mutators**

```
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
```
 struct Point {   // Good: concise
    int x {0};   // public member variable with a default initializer of 0
    int y {0};   // public member variable with a default initializer of 0
};
```

----------------------------------------------------------------------------

### **3. Classes**

* `Date` Class

```
// Use the keyword “class” to define a Date class:
class Date {
  int day{1};
  int month{1};
  int year{0};
};
```

*  `Date` Accessors And Mutators

```
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

```
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

3.1 **Constructors**






















