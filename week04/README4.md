This project contains various implementations of queues in C++, based on the examples and exercises from Chapter 4 of a typical Data Structures course.It includes static queues, dynamic template queues, and double - ended queues(deques), each demonstrating different queue operations and concepts.

In Example 4.1, a simple static queue is implemented using arrays, with functions for inserting, removing, and checking if the queue is full or empty.Exercise 4.1 extends this by using an array of queues to take and process multiple sets of user input, showcasing the reusability of the queue class.

Example 4.2 introduces template - based queues, allowing the queue to handle different data types dynamically.It uses dynamic memory allocation and includes typical queue operations.Exercise 4.2 uses this template class with strings to store and remove the names of friends, demonstrating how templates make the queue more flexible and reusable.

Exercise 4.3 focuses on implementing a double - ended queue(deque) using a circular array.It allows insertion and deletion from both the front and back, with proper wrap - around logic using the modulo operator. This example adds more functionality to the basic queue and helps understand more complex queue operations.

Lastly, Exercise 4.4 checks whether a given string is a palindrome using a character deque.It pushes characters from both ends and compares them while popping from both the front and back.This example combines logical thinking with queue operations, offering a real - world use case of deques.

Overall, these examples provide a solid foundation for understanding how queues work in different scenarios.They demonstrate the importance of managing indices, handling circular behavior, and making code reusable with templates.




