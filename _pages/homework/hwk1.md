---
title: Homework 1
permalink: /homework/hwk1
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Overview

This is a homework assignment to get used to implementing data structures in C++. 

**If you need to use outside resources**, that is okay as long as you **cite your source**. This can just be a link or a title and page number. 

Feel free to reference and use as much of the [ArrayStack implementation](https://github.com/alackles/CMSC-270-ST-23/tree/main/_pages/code/datastructs) from class as you wish. Components and ideas from the ArrayStack implementation can be used without citation.

## Q1: ArrayQueue

Implement an array-based queue in C++. Your implementation should be based on Section 2.3 of the textbook. In particular, your ArrayQueue should implement the following operations for an array of **generic type**:

- `add()`
- `remove()`
- `enqueue()`, implemented as a specific case  of `add()`
- `dequeue()`, implemented as a specific case of `remove()`
- `resize()`

## Q2: ArrayDeque

Implement an array-based deque in C++. Your implementation should be based on section 2.4 of the textbook. In particular, your ArrayDeque should implement the following operations for an array of **generic type**.

- `get(i)`
- `set(i, x)`
- `add(i, x)`
- `remove(i)`
- `resize()`

## Q3: Stacks vs. Queues vs. Deques

For each of the following scenarios, decide whether it would make sense to use a stack, queue, or deque to represent the problem computationally. Justify your answer in about a sentence. 

1. A waiting list for a college course where students are removed from the waitlist and added to the course in the same order that they join the list.
2. An animal shelter's list of potential adoptees that is first-come, first-serve
3. A turn-based card game where the most recent card put down on the table is the first card that is played on your turn
4. A taxi line system where taxis can take passengers and drop off passengers from either end of the line, but not the middle
5. A word processor's 'backspace' functionality (assume that you can't skip around in the document by selecting a location; you can only add text and backspace text)