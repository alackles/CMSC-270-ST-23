---
title: Group Exam 1 Solutions
permalink: /exams/groupexam1-solutions/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---
## Part 1

The most appropriate data structure for this question is a **doubly-linked list**. 

(I know we have not had much practice with DLLs before now; here's your chance in the revisions!)

Many people's first instinct will be to use either a queue or a deque; either is acceptable (though a deque is preferable), but the array-based queue and array-based deque are _not_ the right implementation for this problem because we want to consider the time it takes to move elements out of the middle of the list. In an array-based list, this is an expensive operation because it takes a lot of time to reposition the elements. 

(While you still have to _traverse_ the structure in a linked list, there are fewer copy/overwrite operations -- it is more efficient to follow a pointer than move items in memory.)

A doubly-linked list can function as a queue or a deque (see pg 64), and has efficient removal from the middle of the list, unlike an array-based list. 

A singly-linked list is not a good choice for this problem, because even though we are only ever adding to the tail, not the head,we frequently want to remove from the tail. Removing from the tail of a singly-linked list is a bit complicated and requires traversal of the entire list, so we don't want to deal with that. 

## Part 2

[solution](https://github.com/alackles/CMSC-270-ST-23/tree/main/_pages/exams/groupexam1-solution)

The code is included in this solution guide as `kaplan.cpp`. A few things to note here:

- The addition of a `find(x)` function, which finds the location of a particular element. You could do this within the `kaplan.cpp` addOrder() function itself if you needed to, but it is probably better to add it in the `DLList.h` file. 
- The difference between `_n`, the internal value for the doubly-linked list, and `n`, the internal value for the order board. You could link these two together with a `getN()` function for the board, or by making the order board a derived class from the doubly linked list (this would probably be the better option, and would be worth doing if you are looking to go above and beyond on your revisions)

## Part 3

In this case, to handle sorting, we would really only need to handle adding in the proper place. Here's some pseudocode to change the add function to include adding at the proper location. 

We can do this by checking if the _next_ element is larger than the one we are trying to add. If there is no "next" element, i.e., if it is the first element added, we just add it to the first position. If we are adding in order, it will always stay in order. 

The only other special case to consider is if the new element we are adding is the largest element so far. We'll just add it to the end in that case, and to make sure we only do that if it's the largest element, we include returns in the other cases. 

```
addOrder(x):
    if n == 0:
        boardDisplay.add(n, x)
        return
    else:
        current <- dummy
        for i from 1 to length(boardDisplay) - 1: 
            if current->next > x: 
                boardDisplay.add(i-1, x)
                return
            current <- current->next
    dummy->prev = x
    n++
    display();
```
