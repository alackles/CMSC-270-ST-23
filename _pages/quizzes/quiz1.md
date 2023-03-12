---
title: Quiz 1
permalink: /quizzes/quiz1
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Quiz 1: Algorithmic Thinking, Variables, and Operators

## Question 1

In your own words, what is an _algorithm_, and how does it differ from a _program_? (2-3 short sentences)

<details><summary>Answer</summary>

<p>An algorithm is is a process, set of rules, or set of instructions which, when followed, produces some specific output. An algorithm <i>can be</i> and <i>is often</i> used by a computer, but this is NOT necessarily the case.</p>

<p>A program, as we use it in this class, is a series of commands which the computer executes. A program can contain an algorithm. </p>

</details>

## Question 2

Imagine you have the following file, called `Greeting.java`.

`Greeting.java`:
```java
class Greeting {
    public static void main(String[] args) {
        System.out.println("Hello students.\nHow are you?");
    }
}
```

**A. What will this program output to the console? Write it down as you would see it displayed.**

<details><summary>Answer</summary>
<p>The "\n" is a linebreak, consisting of an escape character and the character n to show that we mean to put in a linebreak. So the final output is:</p>

<code><pre>
Hello students.
How are you?
</pre>
</code>
</details>
<br>

**B. What commands would you have to input into your terminal to compile and run this program? Write them down in the order you would enter them.** (Assume you are already in the correct directory.)

<details><summary>Answer</summary>
<code><pre>
javac Greeting.java 
java Greeting
</pre>
</code>
</details>

## Question 3

Circle all of the **valid** statements below. 
 
1.  `String message;`  
2.  `String message = "Hello";`
3.  `String value = 123;`
4.  `int 7;`
5.  `int x = "7";`
6.  `double y = 3;`
7.  `double z = 3.0 + 0.4;`

<details><summary>Answer</summary>
<p>1, 2, 6, and 7 are all valid. Note that 6 is bad style, but is perfectly fine.</p>

3 is not valid because it assigns an integer to a string.
4 is not valid because variable names cannot start with numbers.
5 is not valid because it assigns a string to an integer. 
</details>