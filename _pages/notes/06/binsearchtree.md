---
title: Binary Trees
permalink: /notes/06/bintree/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Binary search trees encode the concept of binary search into a tree structure. The difference between a binary tree and a binary search tree is primarily one of **data**. In a binary search tree, the data is arranged such that the left child of each node is less than the node, and the right child is greater. 

# Sets

The book mentions a few times that binary search trees implement a _sorted set_ interface. 

A _sorted set_ supports quick operations for size(), add(x), remove(x), and find(x). Notably, it does _not_ have to support get() or set().

Additionally, unlike a list, a _set_ consists of only unique elements. You cannot have duplicates in a set like you can in a list. 

# Operations

## Find

To find an element in a binary search tree, we implement much the same logic as binary search. If the element we're at is bigger than what we're looking for, discard everything to the right and look left. If it's smaller, discard everything to the left and look right.

The book implementation allows us to return the smallest element greater than or equal to the given value. This is fine, but we are going to modify the code a little bit for a simpler function, `isElement(x)`, which just returns _true_ `x` is in the tree and _false_ if it is not.

```
function isElement(element x)
    currentNode <- root
    while currentNode is not NULL do
        if x < currentNode.x
            currentNode <- currentNode.left
        else if x > currentNode.x
            currentNode <- currentNode.right
        else
            return true
    return false
```

## Add & Remove

Addition to a binary tree is mostly a matter of finding the right place to add the node. We just go to the node that is just before the element would be if it were in the tree, and add it there.

The hardest part of addition is convincing yourself that adding to a binary tree by just finding the proper value at which to insert it does not result in breaking the rules of a binary tree. Think about whether there would ever be a situation where you have a full node and need to add an additional value to it. Would it ever be the last value encountered on your search? Would you ever end up placing the element on the wrong side of the node? 

Removal is trickier: we have a few things to consider. 

- 0 children: just delete the node
- 1 child: Just directly attach to the previous node
- 2 children: replace with the smallest value in the right subtree

Again, convince yourself that the 2-children case will always result in a tree that "follows the rules". 

You will implement addition and removal as part of your homework. 
