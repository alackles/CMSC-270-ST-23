---
title: Homework 0
permalink: /homework/hwk0
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Overview

This is a homework assignment to assess your mathematical and computational background leading into the course. This homework contains the basic background knowledge you will need to be successful in the course. You do not need to know how to solve or answer every problem instantly, but you should be able to work through all of them.

**If you need to use outside resources**, like a math textbook, visual resources, an online tutorial etc., that is okay as long as you **cite your source**. This can just be a link or a title and page number. 

**If this homework is very challenging for you**, we should meet as soon as possible to discuss what you might need to do to get on track to be successful for the rest of this course. It doesn't mean you can't succeed; just that you might be missing some of the foundations.

# Instructions

Turn in your homework on Canvas. If you need an extension, leave a comment on the assignment on Canvas instead. 

# Topics

- Polynomial equations
- Logarithms
- Object-oriented programming
- Classes 

# Questions

## Q1: Polynomials

Which of the following polynomials _grows faster_? That is, as the limit of _x_ goes to infinity -- as _x_ gets larger and larger -- which polynomial will be larger? For parts a-c, select 1 or 2 and justify your answer. 

### (a)

1. $$f(x) = x^3 + 2x$$
2. $$f(x) = 7x^2 - 5x + 3$$

### (b)

1. $$f(x) = x^7 - x^5 - x^3 - x$$
2. $$f(x) = x^6 + 2844x^5 - x^4 + 273x^3$$

### (c)

1. $$f(x) = x^4$$
2. $$f(x) = 4x^4 + x^3$$

## Q2: Logarithms

Solve for _x_ in the following equations. 

### (a) 

$$log_2(x) = 8$$

### (b)

$$log_5(x) = log_5(2) + 25$$

### (c)

$$x = log_4(32)$$

## Q3: Working with Objects 

Consider the following program. 

```java
class Hello {
    public static void change(String[] greet) {
        greet[0] = "Howdy";
    }
    public static void main(String[] args) {
        String[] greetings = {"Hi", "Hello", "Hey"};
        change(greetings); 
        // * ? * //
    }
}
```

What is the value of each of the elements of the array `greetings` at the line indicated by `* ? *`? Why? 
 
## Q4: Working with Classes 

Write a Java program that simulates rolling an _n_-sided die via the use of a Dice class. The Dice class should have a default constructor that initializes the dice with 6 sides, as well as a value constructor that initializes the dice with _n_ sides where _n_ is taken as an integer argument to the constructor. It should also have an instance method `roll()` that randomly selects a number from 1 to _n_ and returns that value. Roll the same dice object 3 times and print the results to `System.out`.  