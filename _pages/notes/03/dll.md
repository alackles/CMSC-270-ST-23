---
title: Doubly-Linked Lists
permalink: /notes/03/dll/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Doubly-linked lists are data strctures consisting of _nodes_, which hold a data value and two pointers. One pointer points to the 'next' element of the data structure, and the other points to the 'previous' element. 

To efficiently deal with the idea of next/previous, doubly linked lists also contain a 'dummy' node, which is a node that represents the start/end of this circular structure. 

This image might help you in your understanding of doubly-linked lists:

![A pictoral representation of a DLL](https://i.stack.imgur.com/nlX1F.png).

In this class we'll use a 'dummy node' instead of using 'null' to mark list ends. 

Your task for this class is to **implement a doubly-linked list** in C++. To help you along with this task, the function declarations and member variables for a DLL have been implemented [here](https://github.com/alackles/CMSC-270-ST-23/blob/main/datastructs/DLList.h); you should implement the definitions based on the pseudocode in your book. 