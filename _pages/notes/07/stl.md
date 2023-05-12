---
title: STL Containers
permalink: /notes/07/stl/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

We are looking today at _containers_ in the standard template library--that is, built-in ways to store data in C++. So far we have looked at _arrays_ and _pointers_, which are fundamental features of the language, and used them to implement lists and binary search trees. Now we will be looking at already-implemented additional features to think about whether they too can implement lists, binary search trees, and balanced binary trees.

This will be an investigative class; you will be randomly assigned a container and complete the following steps with your container. 

## Container

You will be assigned one of the following:

- `std::set()`
- `std::vector()`

## Documentation

Find the documentation for the container you have been assigned. This documentation can be found [here](https://en.cppreference.com/w/cpp/container). In general, `cppreference.com` is a good place to look for features of the C++ language. Keep this open as reference while you work on the 'exploration' part of this problem. 

Pay special attention to whatever additional `#include` statements you might need to make in order to include your collection. At the very top of the page, it will say "Defined in header `<something>`"; that something is what you will need to `#include`, just like `#include <iostream>`. 

## Exploration

Create a `main.cpp` file where you do the following in order to practice the operations of addition, removal, and accession:

- Use your container to store the names of everybody in your group, plus one additional person not in your group
- Print the elements of your container
- Remove the name of the person who is not in your grup
- Print the elements of your container again
- Try to add a duplicate name
- Try to add an integer instead of a name
- Print the size of your container

Feel free to perform additional operations and explorations, but you should at least complete these.
  
## Explanation

For the last 10 to 15 minutes of class, each group will get 3 minutes to explain what they've learned about their STL container to the rest of the class. You should answer the following questions:

1. How is this container implemented? Give a very brief, high-level idea here; is the memory contiguous? Distributed? Is it dynamic? Static? 
2. How do you add to this container?
3. How do you remove from this container?
4. Are duplicates allowed?
5. Which data structures which we have talked about (list, queue, stack, deque, binary tree, balanced binary tree) can this container represent? 