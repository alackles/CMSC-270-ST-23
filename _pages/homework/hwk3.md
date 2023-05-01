---
title: Homework 3
permalink: /homework/hwk3
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Overview

This is a homework assignment to refine your understanding of searching and sorting in C++. It is intended to be a little shorter than previous homeworks to allow you some time to catch up with all of your work for this and other classes over reading period. 

**If you need to use outside resources**, that is okay as long as you **cite your source**. This can just be a link or a title and page number. 

Feel free to reference and use as much of the [data structure implementations](https://github.com/alackles/CMSC-270-ST-23/tree/main/datastructs) from class as you wish. Components and ideas from these implementations can be used without citation.

## Turn-In

Your homework is due **Wednesday, May 8, before class (1:50 PM)** on Canvas. If you get stuck, it is better to turn in your incomplete homework for feedback and guidance than to try to work on it a bit longer to make it "perfect". Perfect is the enemy of done!

# Question

## Question 1: Search & Sort 

Implement a working version of `InsertionSort` and a working version of `BinarySearch` in the `searchsort.cpp` file for the [Search & Sort competition](https://alackles.github.io/CMSC-270-ST-23/notes/05/searchsortcomp/). 

## Question 2: MergeSort

Implementing MergeSort can be difficult in C++ because you are not allowed to directly return an array. Discuss (but do not worry about implementing) how you might approach designing a version of MergeSort that does not require returning an array. (**Hint:** In C++, arrays are passed by reference when given as function arguments.)

## Question 3: Runtime

If you have an unsorted list, is it more efficient to sort the list and then use binary search to find an element in the list, or to use linear search on the unsorted list? If your answer is "it depends", give some examples of when one might be better than the other.

## BONUS: Recursive Binary Search

_If you would like an opportunity to show 'above and beyond' type work, you may also complete this problem._

The algorithm given to you for binary search in the pseudocode is an _iterative_ binary search algorithm. It is also possible to create a _recursive_ binary search algorithm. Here is some brief (very brief) pseudocode:

```
BinarySearch(array A, element x int low, int high):
    if low > high
        return False
    else
        mid = (low + high) / 2
        return if the element at mid matches x
        else if x is larger than mid, call BinarySearch with mid+1 as the new low
        else if x is smaller than mid, call BinarySearch with mid-1 as the new high
```

Turn this description into working code, and compare with the linear version. Can you see any connections?

