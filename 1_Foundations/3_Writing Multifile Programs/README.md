## Lesson Outline

![image](https://user-images.githubusercontent.com/20908007/167433863-e0d81e54-6937-4320-91ac-dabd913d2098.png)


## Lesson Goal 

**Compile command:**


```bash
g++ -std=c++17 ./code/header_example.cpp && ./a.out
```

1. Remember that you will need to include all the files in your compile command:

```bash
g++ -std=c++17 ./code/main.cpp ./code/increment_and_sum.cpp ./code/vect_add_one.cpp
```

 *  followed by

```bash
./a.out
```
2. Object Files

```
:/home/workspace/multiple_files_example# g++ -c *.cpp
:/home/workspace/multiple_files_example# g++ *.o
:/home/workspace/multiple_files_example# ./a.out
```
```
:/home/workspace/multiple_files_example# g++ -c increment_and_sum.cpp vect_add_one.cpp main.cpp
:/home/workspace/multiple_files_example# g++ *.o
:/home/workspace/multiple_files_example# ./a.out
```

3. CMakeLists.txt

```
cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 14)
project(<your_project_name>)
```
or 
```
set(CMAKE_CXX_STANDARD 17)
```

3.1 `add_executable`
```
add_executable(your_executable_name  path_to_file_1  path_to_file_2 ...)
```

```
project(ExampleProject)

add_executable(example_files  src/main.cpp  src/vect_add_one.cpp  src/increment_and_sum.cpp)
```

4. `CMake` project build 
```
:/ home/workspace/cmake_example# mkdir build
:/ home/workspace/cmake_example# cd build
```

```
:/home/workspace/cmake_example/build# cmake ..
:/home/workspace/cmake_example/build# make

[100%] Built target <your_executable_name>
[100%] Built target example_files
```

5. Run your executable
```
:/home/workspace/cmake_example/build# ./your_executable_name
```
```
:/home/workspace/cmake_example/build# ./example_files
```
When edit the file and run the project again, you'll only need to run the `make` command from the build folder, and only that file will be compiled again. 


6. Hash Tables
```
unordered_map <key_type, value_type> variable_name;
```

---------------------------------------------------------------------------

**Classes and Object-Oriented Programming :**

```
class Sedan : public Car {
    // Sedan class declarations/definitions here.
};
```

```
g++ -std=c++17 ./code/car.cpp ./code/car_main.cpp && ./a.out

The distance that the green car 1 has traveled is: 1
The distance that the red car 2 has traveled is: 0
The distance that the blue car 3 has traveled is: 0
```

---------------------------------------------------------------------------
**This Pointer:**

The `IncrementDistance()` method implicitly refers to the current Car instance's distance attribute:

```
// The Car class
class Car {
  public:
    // Method to print data.
    void PrintCarData() {
        cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
    }

    // Method to increment the distance travelled.
    void IncrementDistance() {
        distance++;
    }

    // Class/object attributes
    string color;
    int distance = 0;
    int number;
};
```

C++ by using the `this` pointer: 

```
// The Car class
class Car {
  public:
    // Method to print data.
    void PrintCarData() {
        cout << "The distance that the " << this->color << " car " << this->number << " has traveled is: " << this->distance << "\n";
    }

    // Method to increment the distance travelled.
    void IncrementDistance() {
        this->distance++;
    }

    // Class/object attributes
    string color;
    int distance = 0;
    int number;
};
```



