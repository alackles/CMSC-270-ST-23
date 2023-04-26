---
title: Searching & Sorting
permalink: /notes/05/searchsort/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The purpose of today's class is to use the data structures we have worked with so far to understand different patterns of _searching_ on data structures and _sorting_ of data structures. We'll look at the time complexities of these

# Search

In searching, we usually want to find an element of the data structure _x_ and return its index. 

[Here is a visualization](https://www.cs.usfca.edu/~galles/visualization/Search.html) of searching in an array-based structure. 

**Discuss:** 

- What is the _time complexity_ of each of these methods of search (on an array)?
- Is it possible to perform linear search on a linked list? What about binary search?

# Sorting

In sorting, we want to order the elements of a data structure in some way. 

There are many different ways to do this; the visualization you watched before class showed a few of these. We'll talk about three today, in brief, and you'll work with them tomorrow and for your homework on Monday.

## Insertion Sort

Insertion sort basically goes through a list in order and slots the next element into the correct spot in the list. It is a lot like holding a hand of cards and scanning along to choose the right one. Here's the pseudocode for such an algorithm:

```
insertion_sort(array A)
    int currentPlace
    int valueToInsert

    for i = 1 to length(A) do
        valueToInsert = A[i]
        currentPlace = i

        while currentPlace > 0 and A[currentPlace-1] > valueToInsert do
            A[currentPlace] = A[currentPlace-1]
            currentPlace = currentPlace -1
        end while

        A[currentPlace] = valueToInsert
    end for
end
```

What do you think is the time complexity of this algorithm? 

## Merge Sort

Merge sort breaks a problem into many smaller problems until the sort is as simple as possible: just two elements. 

```
mergesort(array A)
    if (A.length == 1) 
        return A
    end if

    array Left = a[0..n/2]
    array Right = a[n/2 + 1..n]

    Left = mergesort(Left)
    Right = mergesort(Right)
    return merge(Left, Right)
end
```

The "merge" operation puts the left and right arrays into a single array in the correct order. We'll see how this exactly is implemented next class.

## `std::sort`

Of course, for most practical purposes, you can just use the built-in sort that C++ comes with. 

It takes two mandatory arguments, which are pointers[^1] to the start and end of the range you want to sort. It takes a third optional argument, which is a function pointer or function object (essentially, a function name) that tells the algorithm how to compare two elements. 

```cpp
#include <algorithm>

int main() {

    int myArray[10] = {5, 48 ,3, 38, 4, 5, 6920, 384, 5, 1};
    std::sort(myArray.begin(), myArray.end());

}
```


**Discuss:**

- If we want to search for an item in an unsorted array, should we sort it first and do binary search, or just do linear search? What will be faster? 


There is one additional wrinkle with sorting: if we have objects we have defined, we'll also have to define exactly how we want these elements to be ordered. For most types built in to C++, there is already some internal ordering. For classes we build ourselves, we can define how we want sorting to happen by providing the class with an _operator override_; we define what it means for one element to be "less than" another. 

 ```cpp
template <class T>
struct Node {
    T _x;
    Node* _next;
    Node* _prev;

    bool operator<(const Node & other) {
        return _x < other._x;
    }
}
 ```


[^1]: Okay, they're not pointers. They're [random access iterators](https://cplusplus.com/reference/iterator/RandomAccessIterator/), which are a more general form of pointers. All pointers are random access iterators, but not all random access iterators are pointers. The important thing to know is that they represent a starting position and an offset, respectively.