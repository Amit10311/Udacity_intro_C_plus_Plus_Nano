## Course Outline

CONCURRENCY (multi-tasking system) means a single system is is performing multiple independent task in parallel rather than sequetially as before. 

Multi-tasking system doesn't require multiple processor or cores but inviting a program execution into many small bits and small pieces and by interleaving them with a bits of pieces of the other programs.


**1. Introduction and Running Threads**
 
 * Learn the difference between processes and threads
 * Write your own concurrent program running multiple threads at the same time
 
 
**2. Passing Data Between Threads**

 * Learn to use promises and futures to create safe communication between threads. 
 * Also learn about tasks as an alternative to threads. 
 * Finally, understand data races and how to avoid them.


**3. Mutexes and Locks**

 * Use mutexes and locks to safely access shared data from various threads.
 
 
**4. Condition Variables and Message Queues**

 * Use condition variables as a basic synchronization tool between threads.
 * Understand and implement a concurrent message queue for flexible inter-thread communication
 
**5. Program a Concurrent Traffic Simulation**
 
 * Build a multithreaded traffic simulator using a real urban map. 
 * Run each vehicle on a separate thread, and
   * manage intersections to facilitate traffic flow and 
   * avoid collisions.
