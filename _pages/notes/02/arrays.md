---
title: ArrayStack, ArrayQueue, ArrayDeque
permalink: /notes/02/arrays/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

We start our discussion of data structures with some array-based implementations of stacks, queues, and deques. We start here because arrays are simple to implement and simple to understand: they are just a single block of contiguous memory which we can access by index. The key to all these data structures is this _indexing_: fast indexing can make a big difference.

# Questions from the Reading

> Big-Oh notation, again

> Purpose of resizing an array -- when do we know to resize or not? 

> Modular arithmetic and arrays -- why? 

# Basics of Array-Based Structures

## ArrayStack

A _stack_ is a data structure that:

- is **last-in, first-out** (LIFO): the most recent addition to the stack will be the first item removed 
- allows for **easy addition and removal** from a single end (the "top" of the stack)
- is frequently used to check or represent **symmetry** and **recency**


Some stack-specific operations are:

- `push()`, to add to the stack
- `pop()`, to remove from the stack
  
When we implement this with an array, we can implement `push()` as an `add(i, x)` operation and `pop()` as a `remove(i)` operation. Since we always know where we are pushing and popping from, and since add and remove are based on indices, and arrays have easy lookup for indices, pushing and popping are fast and easy with an array-based stack. 

_See the [code](https://github.com/alackles/CMSC-270-ST-23/blob/main/_pages/code/02/arrays/ArrayStack.h) for today's lecture fora  C++ implementation of ArrayStack._

## ArrayQueue

A _queue_ is a data strcture that:

- is **first-in, first out** (FIFO): the first addition to the queue will be the first item removed
- allows for **easy addition to the end** and **easy removal from the front** of the queue
- is frequently used to represent **first-come first-serve** and **linear** sequences of operations/information addition

Like stacks, queues support `push()` and `pop()` which can be implemented respectively as `add` and `remove` operations, and in an array, these are fast. 

Queues are often implemented as "circular"; that is, we act as if the end of the queue loops back around to the front of the queue. This lets us avoid too many resizes.

You will implement an array-based queue for your homework. 

## ArrayDeque

A _deque_ (pronounced "deck") is a data structure that:

- allows for **easy addition and removal** from both the **front and end** of the deque
- is frequently used to represent **back-and-forth** queue-like behavior; i.e. someone leaving and returning to a line, undoing and re-doing operations 

Like queues, deques are often implemented as if they are "circular".

You will implement an array-based deque for your homework.
