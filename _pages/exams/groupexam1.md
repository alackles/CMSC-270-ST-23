---
title: Group Exam 1
permalink: /exams/groupexam1/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Instructions 

The purpose of this exam is to evaluate your ability to _apply_ the data structures for this course to a practical problem.

## Guidelines

You should use **only** the following for your exam: 

- Your computer
- [cppreference.com](https://en.cppreference.com/w/) for any syntax you have forgotten
- Code from the class data structures folder, or that you have written for Homework 1 or Homework 2
- The collective brain power of your groupmates 

## Turning In 

Your exam should be uploaded by one person to Canvas. In Canvas, your groups are already set behind the scenes, so there is no need to track that yourself. 

Turn in your answer in two parts:

- `written.md`: Your written answers as a `.md` file. You can make a `.md` file in VSCode by making a new file and naming it with the extension `.md`. You can work with it as normal text. 
- `kaplan.cpp`: The edited code for the order board.

# Exam Question

You find yourself at Kaplan's Cafe in the Warch Commons waiting for a bagel when one of the kitchen staff approaches you. 

"Hello!" they say. "Aren't you in that Data Structures class?"

"Yes," you tell them. "I am an expert at doing smart things with lots of numbers. How can I help you?"

"Great," they say. "We need someone to fix our **order number system** here at the cafe."

Kaplan's Cafe has a number-based ordering system. When you place an order, it is assigned a number. The order sent back to the kitchen, and when the kitchen is done with it, they click a button to display your order number on the big screen. When you pick up the order, your number is removed from the screen. 

Usually, this is a sequential process. Order 85 is taken and prepared before order 86, and it is also picked up before order 86. The system should assume this is the most common way of taking and distributing orders.

It's also common for an item to 'sit' at the front of the list if the person who ordered it forgets to pick it up. In that case, it's more common for the most recently ordered item to be picked up, as that person is attentive and waiting.

However, if the kitchen is very backed up, they could take a lot of orders at once, and then put them up in random order. Furthermore, if someone isn't paying attention, the person behind them in line on the screen could take their order first.

They'd like to fix the code they currently use for this so that it's able to handle both of those scenarios: the 'intended' flow of orders, and the possibility for orders to be taken out of the middle of the list. 

Like the real board at Kaplan, however, the integers are _sorted_; if order 23 is added while 22 and 24 are on the board, it will go in between them. 

"Cool," you say, "but you don't seem to get a very high volume of orders, so using the 'right' data structure doesn't really matter here, does it?"

"That's true," says the kitchen staff member, "but this is a Data Structures exam, so you have to figure it out anyway. Here's the code we have right now; good luck!"

[Here is the C++ code for the Kaplan Cafe ordering system in this problem.](https://github.com/alackles/CMSC-270-ST-23/blob/main/_pages/exams/kaplan.cpp) Save it to an empty folder, (probably called `groupexam1`), and then add in whatever data structures `.h` files you need or want.

[Here is a link to some data structures implemented thus far.](https://github.com/alackles/CMSC-270-ST-23/tree/main/datastructs)

## Part 1

Which data structure is your group going to choose for this problem? Which implementation of that data structure are you using? Justify your answer in a few sentences.

## Part 2

Alter the given code to make use of the data structure you chose in Part 1. **Do not change any of the interface (function names, arguments, or returns) in `kaplan.cpp`.** Only change the _implementation_ of those functions. (Hint: A function implementation can be just a call to another function.) You can also change the **member variables** as needed.

You _can_ change the implementation in whatever data structure you use, if you need to. You can also add new functions in that `.h` file, if they would be helpful.  

## Part 3

What if, like the real board at Kaplan's, the numbers had to be _added in sorted order_? That is, if orders 12 and 14 are already on the board, order 13 should be added in the second position, not the last position. 

Write some pseudocode for an `addOrder()` function that takes into account proper numbering.
