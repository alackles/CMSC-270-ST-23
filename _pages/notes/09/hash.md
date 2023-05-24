---
title: Hash Functions
permalink: /notes/09/hash/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The purpose of this class is to familiarize yourself with _hash tables_, and particularly with _hash functions_ and choosing a good hash function. 

# Lecture/Live-Code

## Why Hash Tables? 

So far, we've been concerned primarily with storing data that we can access with a few operations:

- Searching for data
- Adding data
- Removing data

What if there was a way to do all of these in **constant time**?

Introducing: hash tables!

## How do Hash Tables Work?

Hash tables take some input and use a hash function to map them to an index in an array. 

That's really all they do. The complexity comes from trying to choose a good hash function; that is, one that performs this mapping in a way that allows us to have constant-time search, addition, and removal. 

## "Good" vs. "Bad" Hashes

All a hash function _must_ do is consistently map the same input to the same output. But not all hash functions are equal. 

A "good" hash function is one that avoids collisions in the data. It should also be _fast_ at doing its hashing; why? 

Think about which of these might be "good" hash functions and which might be "bad" hash functions if we are trying to, for example, create hashes for all of the students at Lawrence University? 

- The student's height in centimeters
- The student's age in years
- The student's age in seconds
- The student's birthday in MMDDYYYY format
- The number of J's in the student's name
- The number of letters in the student's name 

## A Good Hash Function

Come up with a decent hash function for **the names of all the students in this class**. Remember that your hash function should:

- Be fast
- Be reliable
- Avoid collisions when possible 

## Hash Collisions

There will always be collisions in hash tables, so we should have some strategies for dealing with them. A few of these strategies are:

- _Chaining_: Linked lists or trees that hold data at a particular location
- _Linear probing_: If your current spot is taken, find the next spot in line
- _Double-hashing_: If your current spot is taken, find the spot plus some randomly generated hashed value

How do each of these affect the _worst-case_ runtime? The _average case_?