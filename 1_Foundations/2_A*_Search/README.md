
# Lesson Outline

![image](https://user-images.githubusercontent.com/20908007/145122181-1c86fb59-d564-497f-a7de-58a5314ef2f8.png)

# Lesson Goal 

![image](https://user-images.githubusercontent.com/20908007/145122225-2b74f565-9977-4cab-ad45-5d791ae6bdbf.png)

**`A* Overview`**

**Search**( _grid, initial_point, goal_point_ ) :

1. Initialize an empty list of open nodes.

2. Initialize a starting node with the following:
   * x and y values given by initial_point.
   * g = 0, where g is the cost for each move.
   * h given by the heuristic function (a function of the current coordinates and the goal).

3. Add the new node to the list of open nodes.

4. **while** the list of open nodes is nonempty:

 1. Sort the open list by f-value
 2. Pop the optimal cell (called the current cell).
 3. Mark the cell's coordinates in the grid as part of the path.
 4. **if** the current cell is the goal cell:
    * return the grid.
    
 5. **else**, expand the search to the current node's neighbors. This includes the following steps:
     * Check each neighbor cell in the grid to ensure that the cell is empty: it hasn't been closed and is not an obstacle.
     * If the cell is empty, compute the cost (g value) and the heuristic, and add to the list of open nodes.
     * Mark the cell as closed.
5. If you exit the while loop because the list of open nodes is empty, you have run out of new nodes to explore and haven't found a path.
