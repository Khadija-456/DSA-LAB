Doubly Linked List Implementation – Example and Exercise 7.1
This project showcases the use of a templated doubly linked list in C++ that supports efficient insertion and deletion operations from both ends of the list. It demonstrates not only the basic structure of a doubly linked list but also how to apply it to different data types, such as integers and large numbers (using long long).

Overview
The code is organized into two parts:

Example 7.1
This section introduces the double_linked<T> class template, which implements a doubly linked list with the following features:

push_back(): Adds an element to the end of the list.

push_front(): Adds an element to the beginning of the list.

pop_back(): Removes and returns the last element.

pop_front(): Removes and returns the first element.

Constructor with Array: Initializes the list with values from a given array.

Destructor: Frees dynamically allocated memory when the list is destroyed.

A sample list of integers is used to demonstrate these operations, and the values are printed in reverse order by popping from the back.

Exercise 7.1
This part builds on the same class and demonstrates the flexibility of the template by creating a doubly linked list of long long integers. It performs the following:

Initializes the list with an array of large numbers.

Adds elements to both front and back.

Displays the final list by popping values from the front, showing insertion order.

Key Concepts Demonstrated
Templated data structures in C++

Doubly linked list mechanics (bidirectional navigation)

Efficient operations from both ends

Use of constructors for array initialization

Memory management via destructors