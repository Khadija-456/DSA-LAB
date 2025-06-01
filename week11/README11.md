README – Graph Representations in C++ (Exercise 10.1)
Overview
This project implements two ways of representing a weighted directed graph in C++:

Adjacency Matrix

Adjacency List

Both approaches demonstrate how to create and manipulate graphs, including adding edges with weights and displaying the graph structure.

Adjacency Matrix
The graph is represented using a 2D array of fixed size (10x10).

The value -1 indicates no edge between two vertices.

Edges can be added using the addEdge function.

The graph is displayed in matrix form using the print function.

Additional functions are provided:

hasedge(u, v) to check if an edge exists.

removeedge(u, v) to delete an edge.

getweight(u, v) to return the weight of a specific edge.

Adjacency List
The graph is represented using linked lists, with one list per vertex.

Each node in a list stores the destination vertex and the edge weight.

This method is more memory-efficient for sparse graphs.

Edges are added using the addEdge function.

The structure is displayed using the print function.

A destructor is included to free dynamically allocated memory.

Purpose
The goal of this exercise is to understand the differences between matrix and list-based representations of graphs in terms of structure, memory usage, and performance. This project gives hands-on practice with graph fundamentals in C++.

