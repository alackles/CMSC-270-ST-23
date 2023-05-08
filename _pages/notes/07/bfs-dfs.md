---
title: Breadth-First and Depth-First Search
permalink: /notes/07/bfs-dfs/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Breadth-first and deapth-first search, often called **BFS** and **DFS**, are common algorithms used to reach every node on a binary tree. BFS and DFS can be generalized to work on _any_ connected graph, but for now we will start with the notion of BFS and DFS on binary trees where we begin at the root. 

Rather than directly showing you the algorithm(s) for these processes, you will go through the experience of creating them yourself. 

## Step 1: Exploration

Start by drawing yourself an example binary search tree on the board. You can choose any arbitrary tree; just make sure it has at least 3 full layers (parent, children, grandchildren). 

Come up with a systematic way to visit _every_ node in this tree. Remember that as the computer, you can only see the connections between nodes, not the whole tree at once. Draw arrows along those connections to indicate your traversal through the tree. You can choose how you accomplish this. 

You do not need to do two different ways of traversing the tree; just one will do. 

## Step 2: Pseudocode

Turn your systematic arrows into a series of steps a computer could follow. That is, _write the pseudocode_ for your traversla through the tree. Try to use as little C++ notation as possible; you should explain your algorithm such that anyone who is familiar with a Java-like or C++-like language would be able to read and understand the steps. 

## Step 3: Implementation

Implement your pseudocode in C++ code. You won't be able to test the code out yet, since you haven't created a binary tree with add and remove functionality, but you will be able to test it on your homework. If you manage to get started on it today with your groups, all the better for you! 