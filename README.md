#  Queue Implementation in C++

### Aim  
To implement a **basic queue data structure in C++** using a fixed-size array, supporting insertion (enqueue), deletion (dequeue), and displaying queue elements.

***

### Theory  

A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. This means the element inserted **first** is removed **first**.  

#### Key Operations of Queue
| Operation | Description | Example |
|-----------|-------------|---------|
| **Enqueue** | Inserts an element at the *rear* of the queue | If queue = , `enqueue(30)` →  |
| **Dequeue** | Removes an element from the *front* of the queue | If queue = ,30], `dequeue()` →  |
| **Display** | Prints all elements in order from front to rear | If queue = , output → "20 30 40" |
| **Overflow** | When the queue is full and no more insertions are possible | Rear reaches maximum index |
| **Underflow** | When the queue is empty and deletion is attempted | Front > Rear or Front = -1 |

#### Queue Representation in Array
- Front: Points to the **first element** in the queue.  
- Rear: Points to the **last element** in the queue.  

| Initial State         | After Enqueue(10,20,30) | After Dequeue() | After Enqueue(40) |
|-----------------------|--------------------------|------------------|--------------------|
| front = -1, rear = -1 | front = 0, rear = 2 →  | front = 1, rear = 2 →  | front = 1, rear = 3 →  |

This representation uses an **array of fixed size (5)**. If `rear == 4`, the queue is full and no more insertions can be done.

***

### Algorithm  

- **Initialization:**  
  - Set `front = -1` and `rear = -1`.  

- **Enqueue(x):**  
  - Check if `rear == max_size - 1`. If yes, print "Queue is full".  
  - If `front == -1`, set `front = 0`.  
  - Increment `rear` and assign `arr[rear] = x`.  
  - Print that the element was enqueued.  

- **Dequeue():**  
  - If `front == -1 or front > rear`, print "Queue is empty".  
  - Otherwise, print `arr[front]` as dequeued.  
  - Increment `front`. If `front > rear`, reset `front = rear = -1`.  

- **Display():**  
  - If the queue is empty (`front == -1`), print "Queue is empty".  
  - Otherwise, traverse from `front` to `rear` and print all elements.  

- **Main Function:**  
  - Create a `Queue` object.  
  - Perform enqueue, dequeue, and display operations to demonstrate queue behaviour.  

***

### Conclusion  

This program successfully demonstrates the **array implementation of a queue** in C++. The operations strictly follow the **FIFO principle**, where elements are added at the rear and removed from the front. The handling of special cases like **overflow** and **underflow** ensures robustness of the implementation. Though this is a static queue, it provides a fundamental understanding that can be extended further using **dynamic memory** or **circular queue concepts**.  

--- 
