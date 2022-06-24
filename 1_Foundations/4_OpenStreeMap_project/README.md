## Lesson Outline

**Build an OpenStreetMap Route Planner**

![image](https://user-images.githubusercontent.com/20908007/175277900-3e1d9439-49c5-46ec-80e3-5c0e8b63a263.png)

 Nodes, ways, and relations are some of the fundamental building blocks of OSM data files. 

 * Nodes : Each node indicates a single point with an identifier id, latitude lat, and longitude lon.
 * Ways : An ordered list of nodes : feature could be a road, or a boundary of a park, or some other feature in the map.
 * Relation : data structure which documents a relationship between other data elements
 
 The code to parse the OSM data and the data structures which are used to store the data : 
 
 * https://github.com/cpp-io2d/P0267_RefImpl/tree/master/P0267_RefImpl/Samples/maps
 
-----------------------------------------------------------------------------------------------

**Building and Running**

The repo contains the starter code for the Route Planning project.
 * https://github.com/udacity/CppND-Route-Planning-Project


## Compiling and Running

### Compiling
To compile the project, first, create a `build` directory and change to that directory:
```
mkdir build && cd build
```
From within the `build` directory, then run `cmake` and `make` as follows:
```
cmake ..
make
```
### Running
The executable will be placed in the `build` directory. From within `build`, you can run the project as follows:
```
./OSM_A_star_search
```
Or to specify a map file:
```
./OSM_A_star_search -f ../<your_osm_file.osm>
```

-----------------------------------------------------------------------------------------------
## Project Code Overview

![image](https://user-images.githubusercontent.com/20908007/175560923-3fbb859d-a353-4ddd-87bb-0bbc3f4f058b.png)



