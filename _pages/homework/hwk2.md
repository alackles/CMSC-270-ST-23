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

Your homework is due **Monday, April 17, before class (1:50 PM)** on Canvas. If you get stuck, it is better to turn in your incomplete homework for feedback and guidance than to try to work on it a bit longer to make it "perfect". Perfect is the enemy of done!

# Questions

## Q1: DLList `dllist.h`

Implement a doubly-linked list in C++. Your implementation should be based on section 3.2 of the textbook. In particular, your DLL should at least implement the following interface methods for a linked list of **generic type**:

- `initialize()`
- `get(i)`, implemented as a special case of `get_node(i)`
- `set(i, x)`
- `add(i, x)`, implemented as a special case of `add_before(i, x)`
- `remove(i)`, implemented as a special case of `remove(w)` (note the difference here: _i_ is an index while _w_ is a value)

## Q2: ListStack `ListStack.h`

Implement a linked-list-based stack in C++. Your implementation should have the following interface methods for a stack of **generic type**:


- `add(i, x)`
- `remove(i)`
- `push(x)`, implemented as a special case of `add(i, x)`
- `pop()`, implemented as a special case  of `remove(i)`
- `get(i)`
- `set(i, x)`

You may use either the `sllist.h` or `dllist.h` implementation of linked lists to implement your ListStack, but you should add a **comment** in your code justifying your choice.  

You should also aim to keep your interface consistent with the ArrayStack interface; that is, the arguments and function names should be the same in your `ArrayStack` and `ListStack`. 

## Q3: ListQueue `ListQueue.h`

Implement a linked-list-based queue in C++. Your implementation should have the following interface methods for a queue of **generic type**:


- `add(i, x)`
- `remove(i)`
- `enqueue(x)`, implemented as a specific case  of `add(i, x)`
- `dequeue()`, implemented as a specific case of `remove(i)`
- `get(i)`
- `set(i, x)`

You may use either the `sllist.h` or `dllist.h` implementation of linked lists to implement your ListStack, but you should add a **comment** in your code justifying your choice.  

You should also aim to keep your interface consistent with the ArrayStack interface; that is, the arguments and function names should be the same in your `ArrayStack` and `ListStack`. 