README – Search Comparison: Sequential vs Binary Search
Overview
This program compares the performance of Sequential Search and Binary Search algorithms by measuring the number of comparisons made during:

A successful search (key is present in the array)

An unsuccessful search (key is not present)

It performs the comparison over different array sizes to highlight the difference in efficiency.

Features
Sequential Search: Iterates through the array from the beginning to end.

Binary Search: Operates on a sorted array and repeatedly divides the search interval in half.

Random Array Generation: Arrays are filled with random values between 0 and 2 * N.

Performance Metrics: Number of comparisons are recorded for both successful and unsuccessful cases.

Array Sizes Tested
The following array sizes are used:

yaml
Copy
Edit
10, 100, 1000, 5000, 10000, 20000, 50000
Output Format
perl
Copy
Edit
N       Seq(S)   Seq(U)   Bin(S)   Bin(U)
N: Size of the array

Seq(S): Comparisons in sequential search (successful)

Seq(U): Comparisons in sequential search (unsuccessful)

Bin(S): Comparisons in binary search (successful)

Bin(U): Comparisons in binary search (unsuccessful)

How It Works
For each array size:

Generate a random array.

Select a random value from the array for successful search.

Choose a large key (not in the array) for unsuccessful search.

Perform Sequential Search and Binary Search.

Record and print the number of comparisons.

Clean up dynamically allocated memory.

Requirements
C++ compiler (e.g., g++, MSVC)

Standard libraries only (no external dependencies)

