---
title: Homework 2
permalink: /homework/hwk2
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Overview

This is a homework assignment to refine your understanding of C++ and to get some additional practice implementing data structures. 

**If you need to use outside resources**, that is okay as long as you **cite your source**. This can just be a link or a title and page number. 

Feel free to reference and use as much of the [data structure implementations](https://github.com/alackles/CMSC-270-ST-23/tree/main/datastructs) from class as you wish. Components and ideas from these implementations can be used without citation.

## Turn-In

**Turn in your `.h` files only** for this assignment. Please don't zip them up; it is much easier to grade and view your files if they are submitted as single `.h` files. 

Your homework is due **Wednesday, April 19, before class (1:50 PM)** on Canvas. If you get stuck, it is better to turn in your incomplete homework for feedback and guidance than to try to work on it a bit longer to make it "perfect". Perfect is the enemy of done!

## Helpful Hints

If you need to access a member variable from a pointer, remember you will have to use the `->` notation instead of `.`. That is, `_head->_next`, rather than `_head.next`. However, if you have a real type and like dummy, even if you are trying to _access_ a pointer, use dot notation. (e.g., `dummy._next` rather than `dummy->_next`.)

# Questions

## Q1: DLList -  `dllist.h`

Implement a doubly-linked list in C++. Your implementation should be based on section 3.2 of the textbook. In particular, your DLL should at least implement the following interface methods for a linked list of **generic type**:

- `initialize()`
- `get(i)`
- `set(i, x)`
- `add(i, x)`, 
- `remove(i)`

## Q2: ListStack - `ListStack.h`

Implement a linked-list-based stack in C++. Your implementation should have the following interface methods for a stack of **generic type**:


- `add(i, x)`
- `remove(i)`
- `get(i)`
- `set(i, x)`
- `push(x)`
- `pop()`

You may use either the `sllist.h` or `dllist.h` implementation of linked lists to implement your ListStack, but you should add a **comment** in your code justifying your choice.  

You should also aim to keep your interface consistent with the ArrayStack interface; that is, the arguments and function names should be the same in your `ArrayStack` and `ListStack`. 

## Q3: ListQueue -  `ListQueue.h`

Implement a linked-list-based queue in C++. Your implementation should have the following interface methods for a queue of **generic type**:


- `add(i, x)`
- `remove(i)`
- `get(i)`
- `set(i, x)`
- `enqueue(x)`
- `dequeue()`

You may use either the `sllist.h` or `dllist.h` implementation of linked lists to implement your ListStack, but you should add a **comment** in your code justifying your choice.  
