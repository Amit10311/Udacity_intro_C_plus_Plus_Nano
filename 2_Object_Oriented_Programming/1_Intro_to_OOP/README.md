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








