🌳 Binary Search Tree Template (C++) - Example 9.1
📘 Description
This project implements a generic Binary Search Tree (BST) using C++ templates. The tree supports operations such as insertion, deletion, search (retrieve), and traversal (in-order printing). It is designed to handle any data type such as int, string, etc.

📁 File Overview
main.cpp
Includes the full implementation of:

The TreeType class template.

All required BST functions.

A demonstration (main()) showing how to use the tree with int and string data types.

✅ Features
Template-based BST for any data type.

InsertItem – Adds elements to the tree.

DeleteItem – Removes elements from the tree.

RetrieveItem – Searches for an element.

IsEmpty – Checks if the tree is empty.

IsFull – (Logic implemented, but return missing. Needs fix.)

PrintTree – Saves tree contents in sorted order to out.txt.

DestroyHelper – Recursively deletes all nodes upon destruction.

GetMin – Finds the minimum value in a subtree.

🔍 Example Execution
Part 1: Integer Tree (Search Demo)
cpp
Copy
Edit
TreeType<int> tree;
int item = 1;
bool flag = false;
tree.RetrieveItem(item, flag);
cout << flag << endl;
Output:

css
Copy
Edit
 sorry ! doesnot exist :( 
0
 Succesfullly DESTROYED ;)
Part 2: String Tree (Insert + Print to File)
cpp
Copy
Edit
TreeType<string> tree;
string arrayofstring[10] = { "Its","Okay","To Not ","Be","Okay" };
for (int i = 0; i < 5; i++) {
    tree.InsertItem(arrayofstring[i]);
}

ofstream outfile("out.txt");
tree.PrintTree(outfile);
outfile.close();
The file out.txt will contain the strings in sorted (in-order) order:

output:
Be        Its        Okay        Okay        To Not 