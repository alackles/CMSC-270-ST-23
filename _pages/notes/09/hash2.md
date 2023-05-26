---
title: Hash Functions
permalink: /notes/09/hash2/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The purpose of this class is to get used to the 'under the hood' idea of a hash function. You'll first see an example in Python, which should be familiar enough to read if you've been working with the Pseudocode in class. Then, you'll test out the timing of a "good" vs. "bad" hash function using C++'s `std::unordered_map`. 

We'll watch [this video](https://emilydolson.github.io/CSE-830-SS-2021/schedule/03-DataStructures/#testing-the-importance-of-good-hash-functions) as a class, which shows you some good and bad hash functions. 

Then, you'll do the following in your own C++ program.

Your goal is to create the best hash function in the room. 

1. Create your own implementation of a hash function. It can take any type of input you like, but you'll have to test it later, so make it something you think you can generate a lot off quickly.  Create also an array of appropriate size in which to store the hashed values output by your hash function. 
2. Time how long it takes to add 10,000 values to your hash table. Here is [a decent guide](https://www.geeksforgeeks.org/measure-execution-time-function-cpp/) on timing functions in C++. 