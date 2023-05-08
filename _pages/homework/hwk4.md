---
title: Homework 4
permalink: /homework/hwk4
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Overview

This is a homework assignment to refine your understanding of binary trees and binary search trees in C++, as well as to get you used to testing your own code and checking for yourself whether your code does what you intend it to do. 

**If you need to use outside resources**, that is okay as long as you **cite your source**. This can just be a link or a title and page number. 

Feel free to reference and use as much of the [data structure implementations](https://github.com/alackles/CMSC-270-ST-23/tree/main/datastructs) from class as you wish. Components and ideas from these implementations can be used without citation.

## Turn-In

Your homework is due **Monday, May 15, before class (1:50 PM)** on Canvas. If you get stuck, it is better to turn in your incomplete homework for feedback and guidance than to try to work on it a bit longer to make it "perfect". Perfect is the enemy of done!

# Question

## Question 1: Add and Remove

Implement the `add(x)` and `remove(x)` functions in `BinarySearchTree.h` as described in the book. Also implement `size()`, which keeps track of the size of the tree. 

## Question 2: Working with Binary Search Trees

Recreate the following binary search tree in a `main.cpp` file using your BST implementation. 

![binary search tree with nodes 9, 12, 14, 17, 23, 19, 50, 72, 54, 76, 67](../../assets/bst.png)

To ensure that your implementation is working properly, you should add a `showNode(x)` method that displays a given node's _parent_, _left child_, and _right child_. If there is no parent, left, or right child, `showNode(x)` should print `NULL` in place. 

It is up to you to determine how you want `showNode(x)` to display in the command line.

## Question 3: Searching Binary Search Trees

For class on Monday, you wrote a search algorithm. Use this algorithm to create a function called either `bfs_traverse()` or `dfs_traverse()` which visits every node in the tree and prints the nodes in order of first visit. The name should reflect which search you are actually doing.
