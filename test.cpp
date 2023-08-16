#include "queue.hpp" 
#include <iostream>

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Push some elements onto the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Check front and back elements
    std::cout << "Front: " << myQueue.front() << std::endl; // Should print 10
    std::cout << "Back: " << myQueue.back() << std::endl;   // Should print 30

    // Pop an element
    myQueue.pop();

    // Check updated front and back elements
    std::cout << "Front after pop: " << myQueue.front() << std::endl; // Should print 20
    std::cout << "Back after pop: " << myQueue.back() << std::endl;   // Should print 30

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty. Size: " << myQueue.size() << std::endl;
    }

    // Push more elements
    myQueue.push(40);
    myQueue.push(50);

    // Print the size of the queue
    std::cout << "Size after pushes: " << myQueue.size() << std::endl;

    // Swap two queues
    queue<int> anotherQueue;
    anotherQueue.push(100);
    anotherQueue.push(200);
    anotherQueue.push(300);

    myQueue.swap(anotherQueue);

    std::cout << "Size of myQueue after swap: " << myQueue.size() << std::endl;
    std::cout << "Size of anotherQueue after swap: " << anotherQueue.size() << std::endl;

    return 0;
}
