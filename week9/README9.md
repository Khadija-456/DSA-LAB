Binary Tree Implementation in C++
Overview
This project demonstrates two different implementations of a Binary Tree in C++:

Exercise 8.1: Binary Tree using array-based representation.

Exercise 8.2: Binary Tree using linked structure with pointers.

Each implementation supports insertion and traversal operations (inorder, preorder, postorder).

📁 Files
exercise8_1.cpp: Binary tree using array

exercise8_2.cpp: Binary tree using pointers

🔧 Features
Exercise 8.1 (Array-based Binary Tree)
Fixed size array BT[100] used to simulate binary tree nodes

Nodes contain:

info (data)

left, right, and parent (indices)

Functions:

setRoot(value)

insertLeft(parentIndex, value)

insertRight(parentIndex, value)

inorder(index)

preorder(index)

postorder(index)

Exercise 8.2 (Pointer-based Binary Tree)
Dynamic memory allocation using new

Each node has:

info (data)

Pointers to left, right, and parent

Functions:

setRoot(value)

setLeft(parentPointer, value)

setRight(parentPointer, value)

pretrav(pointer)

intrav(pointer)

posttrav(pointer)

isLeft(pointer) and isRight(pointer)

🧪 Example Output
For both exercises, after building the tree:

makefile
Copy
Edit
Preorder: 10 5 2 7 15
Inorder: 2 5 7 10 15
Postorder: 2 7 5 15 10
