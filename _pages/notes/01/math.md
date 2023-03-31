---
title: Mathematical Background
permalink: /notes/01/math/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Lecture Notes

## Logarithms

Exponentiation, square roots, and logarithms are all part of a trio of operations. 

Exponentiation:

$$a^b = x$$

Square roots:

$$x^a = b$$
$$\sqrt[a]{x^a} = \sqrt[a]{b}$$
$$x = \sqrt[a]{b}$$

Logarithms:

$$a^x = b$$
$$\log_a{a^x} = \log_a{b}$$
$$x = \log_a{b}$$

### Log Bases

Logs can have different bases For example, you might have log base 2, or a logarithm where the exponentiation version has 2 as the thing being raised to a power. 

$$2^x = 8$$
$$\log_2{8} = x$$

Or you could have a log base 3:

$$\log_3{27} = ?$$

Or even a log with a partial base:

$$\log_{1.5}{124} = ?$$

**Question:** Could you have a a log base 0? A log base 1? Discuss.

### Log Base 2

In this class we almost always want to talk about _log base 2_. If ever in this class we write `log` without a base, we mean base 2. 

There are two reasons for this:

1. The most common place for logarithms to show up is when we are partitioning a task into some component pieces. The most even way to do this task partitioning is to split it in half repeatedly. This corresponds to a logarithm with base 2 -- how many times do I have to split this thing in half before it is 1 or less than 1? 
2. Sometimes, it's because we're interested in bits -- 1s and 0s -- and having a logarithm of base 2 allows us to express numerical values in bits. Sometimes we're working one bit at a time. 

These are **not the same reason**. Be careful not to mix them up -- don't assume that just because we are taking log base 2 that we are working with bits. 

### Properties of Logs 

Logarithms have some properties that you may want to take advantage of.

Product Property:

$$\log_b{x} + \log_b{y} = \log_b{xy}$$

Quotient Property:

$$\log_b{x} - \log_b{y} = \log_b{\frac{x}{y}}$$

Power Property:

$$log_b{x^k} = k\log_b{x}$$

Change of Base:

$$log_b{x} = \frac{\log_a{x}}{\log_a{b}}$$

## Big-Oh Notation

**Question:** Give an intuitive definition of the following.

Which function is larger here if $x=2$? If $x=1000$? If $x \to \infty$?

$$x^3$$

$$x^2 + 7$$

It's clear that somewhere between 2 and infinity, these functions cross over each other. But where? And will they stay like that forever? In other words, is one of these functions larger _past a certain point_?

Defining that "certain point" is what Big-Oh notation is about. 

### Big-Oh Notation

Formally, big-Oh notation is defined as follows. 

**Definition.** 

$$O(f(n)) = {g(n) : \exists c > 0, n_0\  s.t.\ g(n) \leq cf(n)\ \forall\ n \geq n_0}$$

**Definition (again).**

$O(f(n)) = g(n)$ if ther exists some number $c > 0$ and some number $n_0$ such that, for all $n \geq n_0$, it is possible to find some $c$ that allows $g(n) \leq cf(n)$. 

**Not a definition, but an explanation.**

$O(f(n)) = g(n)$ if $f(n)$ is larger than or about the same magnitude as $g(n)$ after you get past a certain size input. 

This matters because it tells us how functions grow when the input gets very large, which is often what we are really interested in when it comes to analyzing the performance of different types of algorithms on different data structures. 

# Exercises

Choose the corresponding exercise for your group. For each one:

1. Determine whether $O(f(n)) = g(n)$
2. Justify your answer in some way

Be careful to pay attention to which function is $f(n)$ and which is $g(n)$. 

## Exercise 1

$$f(n) = x^3 + 6$$
$$g(n) = x^4 + x^3$$

## Exercise 2

$$f(n) = n^2$$
$$g(n) = 6n^2$$

## Exercise 3

$$f(n) = 6n^2$$
$$g(n) = n^2$$

## Exercise 4

$$f(n) = \log(n)$$
$$g(n) = \log(n^2)$$

## Exercise 5

$$f(n) = \log(n)$$
$$g(n) = \log(nm)$$