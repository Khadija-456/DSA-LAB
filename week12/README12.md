README – Graph Traversal and Dijkstra’s Algorithm (Exercise 11.1 & 11.2)
Exercise 11.1 – BFS and DFS Traversals
This part of the project implements a graph using an adjacency matrix.

The Graph class dynamically allocates memory for the matrix and initializes all values to -1 (indicating no edge).

You can add edges with weights, and choose whether the graph is directed or undirected.

The print function shows the adjacency matrix in a clean format.

The program includes a Breadth-First Search (BFS) implementation using a queue.

It also includes a Depth-First Search (DFS) using recursion.

The main function demonstrates graph creation, edge insertion, and both traversals starting from node 0.

Exercise 11.2 – Dijkstra’s Shortest Path Algorithm
This part of the project extends the graph implementation with Dijkstra's algorithm for finding shortest paths.

The graph is still implemented using an adjacency matrix, but all values are initialized to 0.

The addEdge function allows weighted edge insertion and supports both directed and undirected edges.

The dijkstra function finds the shortest path from a given source vertex to all other vertices.

It uses a distance array and a boolean array to track visited nodes (similar to the Dijkstra algorithm pseudocode).

The output shows the shortest distances from the source to each vertex in the graph.

Key Concepts Covered
Graph representation using adjacency matrices

Breadth-First Search (BFS)

Depth-First Search (DFS)

Dijkstra’s shortest path algorithm

Dynamic memory allocation and deallocation in C++

Usage
Compile and run the program in any C++ compiler.

The main function of Exercise 11.1 shows graph creation and traversal.

The main function of Exercise 11.2 demonstrates shortest path calculation using Dijkstra's algorithm.

