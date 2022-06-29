
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

 **Types**
 ```
int value;
Rectangle rectangle;
Sphere earth;
```

**User-Defined Types**
```
struct Date {
  int day;
  int month;
  int year;
};
```

```
// Create an instance of the Date structure
Date date;
// Initialize the attributes of Date
date.day = 1;
date.month = 10;
date.year = 2019;
```

