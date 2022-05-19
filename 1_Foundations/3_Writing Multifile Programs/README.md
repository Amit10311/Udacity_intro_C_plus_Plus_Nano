## Lesson Outline

![image](https://user-images.githubusercontent.com/20908007/167433863-e0d81e54-6937-4320-91ac-dabd913d2098.png)


## Lesson Goal 

**Compile command:**

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




