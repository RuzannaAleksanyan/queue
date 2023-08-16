# Queue
This repository contains a C++ implementation of a queue data structure. A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle, where elements are added to the back and removed from the front. This implementation provides basic functionality for managing and manipulating a queue of elements.

## Features
- Basic Operations: The queue supports fundamental operations such as pushing elements to the back, popping elements from the front, and accessing the front and back elements.
- Dynamic Resizing: The implementation automatically resizes the underlying array to accommodate more elements when needed, providing efficient memory usage.
- Move Semantics: The implementation supports move semantics for efficient resource management when copying and assigning queues.
- Exception Handling: The implementation includes basic exception handling for checking if the queue is empty before performing certain operations.
- Swap Operation: The queue provides a swap operation for efficiently exchanging the contents of two queues.

## Usage
To use the queue implementation in your C++ project, follow these steps:
- Include the queue.hpp header file in your source code.
- Create a queue object, specifying the data type for the queue elements.
- Use the available methods to perform operations on the queue, such as pushing, popping, or accessing elements.
- Handle exceptions that may be thrown by the methods, such as checking if the queue is empty before calling front or pop.
