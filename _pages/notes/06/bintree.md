---
title: Binary Trees
permalink: /notes/06/bintree/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The purpose of this class is to talk about _binary trees_, and more generally, representations of tree-like structures for computer science. 

Binary trees can be pretty confusing. This is mostly because they are a 2-dimensional structure that we're often trying to visualize one-dimensionally; this is pretty hard to do! Now more than ever, it's important to get used to **drawing** the data structures you are working with. It's also important to be able to translate that into code; at each step of your drawing, how could you represent a structure in a computer? 

## Concept

A binary tree is essentially a way of storing data non-linearly. It creates structure among the data, so that 

In computer science applications, we are almost never using a direct binary tree; we are usually using a binary _search_ tree, which stores some data in each node. While this seems like a silly distinction, it is really a mathematical one: binary trees are mathematical concepts that we can assign properties to, while binary search trees are computational concepts with the mathematical structure of a binary tree. 

## Definition

Binary trees are **graphs** which are:

- Connected
- Undirected
- Finite
- Acyclic
- No vertex of degree greater than 3

For CS, when we build binary-tree-like structures, they are also _rooted_. 

## Properties/Vocabulary

- _leaf_: a node with no (internal) children
- _depth_: The length of the path from a node _u_ to the root _r_
- _height_: The length of the longest path from some leaf node _u_ to the root _r_
- _ancestor_: a node between u and r
- _descendent_: a node after u

## Use Cases

What kind of data might we store in a binary tree?

- Direct ancestries for humans or animals
- Series of decisions or a flow-chart 
- Sports tournaments results

## Mathematical Connections

Binary trees are inherently mathematical structures; they are narrowly defined with certain properties so we can work with them and derive ideas about them in the general case, and not the specific case. Here are some of the ideas to discuss with your group:

1. What is the **maximum height** of a binary tree with _n_ nodes?
2. What is the **minimum height** of a binary tree with _n_ nodes? 
3. What _further restrictions_ could we place upon the idea of a "binary tree" to make sure that a tree we construct ends up closer to its minimum height than its maximum height? 
   

