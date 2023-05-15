---
title: Group Exam 2
permalink: /exams/groupexam2/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Instructions 

The purpose of this exam is to evaluate your ability to _apply_ the data structures for this course to a practical problem, and to revisit old problems with a new eye. 

## Guidelines

You should use the following for your exam: 

- Your computer
- [cppreference.com](https://en.cppreference.com/w/) for any syntax you have forgotten
- [The STL containers library](https://en.cppreference.com/w/cpp/container)
- [The corresponding starter file](https://github.com/alackles/CMSC-270-ST-23/tree/main/_pages/exams/groupexam2/) for your group
- The collective brain power of your groupmates 

## Turning In 

Your exam should be uploaded by one person to Canvas. In Canvas, your groups are already set behind the scenes, so there is no need to track that yourself. 

Turn in your answer in two parts:

- `written.md`: Your written answers as a `.md` file. You can make a `.md` file in VSCode by making a new file and naming it with the extension `.md`. You can work with it as normal text. 
- `kaplan.cpp`: The edited code for the order board.

# Exam Question

Recall the [kaplan order board](https://alackles.github.io/CMSC-270-ST-23/exams/groupexam1/#exam-question) from the last group exam. You did a good job of implementing its needs when all you had to work with were a few specific data structures, but you will now revisit the board with your new understanding of additional data structures and their implementations.


## New Requirements

You also have **two additional requirements** for this version of the order board to make it more like the real board at the cafe:

- Your numbers should always display in **sorted order**
- The customer will get a 7-digit order number, and the `add()` operation, when given this number, should **only consider the last two numbers** to add to the actual board. For example,

```
kaplanBoard.add(2104758)
```

should add `58` to the board and display it as such. 

## Part 1: `written.md`

Choose a container from the C Standard Library to use and **justify your choice**. You should justify your choice by noting the runtime of the following key operations for the board:

- Finding an element in the board
- Adding new elements to the front
- Adding new elements to an arbitrary position
- Removing old elements from the front
- Removing old elements from an arbitrary position

The containers library is [here](https://en.cppreference.com/w/cpp/container).

## Part 2: `kaplan.cpp`

Revise the `kaplan.cpp` file provided to your group so that the backing structure, `boardDisplay`, uses your chosen STL container and follows the original requirements, plus the new requirements. 

Again, **do not change any of the existing function names, arguments, or return types**, only their internal structure. You may add new functions if necessary.