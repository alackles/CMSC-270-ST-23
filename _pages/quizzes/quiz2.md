---
title: Quiz 2
permalink: /quizzes/quiz2
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Quiz 2: I/O & Methods

## Question 1

Consider the following statement in Java:

```java
Scanner in = new Scanner(System.in)
```

For each of the following, check True (T) or False (F).

| Question | T | F |
| ----- | ---- | ---- |
| The variable 'in' is of type 'Scanner' | | |
| The 'in' in 'System.in' on the righthand side is the same entity as the variable 'in' on the lefthand side. | | |
| 'new' tells Java to import the Scanner class | | |
| 'System.in' is a method in 'Scanner' | | |

<details><summary>Answer</summary>

| Question | T | F |
| ----- | ---- | ---- |
| The variable 'in' is of type 'Scanner' | x | |
| The 'in' in 'System.in' on the righthand side is the same entity as the variable 'in' on the lefthand side. | | x |
| 'new' tells Java to import the Scanner class | | x |
| 'System.in' is a method in 'Scanner' | | x |

'in' on the lefthand side is a variable of type 'Scanner'. 'in' as part of 'System.in' on the righthand side is a method in System.   

'new' tells Java to _create a new instance_ of the Scanner class. The statement 'import java.util.Scanner;' at the top of the file would tell Java to _import_ the Scanner class.  

'System.in' is a method call to the 'in' method in 'System'. It is an argument passed to 'Scanner()'. It is not a method in Scanner.  

</details>

## Question 2

Consider the following small program in Java. 

```java
class Question {
    public static void showAdd(int a, double b) {
        double x = a + b;
        System.out.println(x);
    }
    public static void main(String args[]) {
        int i = 5;
        double j = 0.4;
        showAdd(i, j);
    }
}
```

**A:** What are the _parameters_ of the 'showAdd()' method?

<details><summary>Answer</summary>

'int a' and 'double b'

</details>

**B:** What are the _arguments_ passed to the 'showAdd()' method?

<details><summary>Answer</summary>

i (which is 5) and j (which is 0.4)

There are many ways to answer this part of the question; the important thing is to understand that i and j are the arguments being passed, and that 'int a' and 'double b' are the parameters being assigned. 

</details>

## Question 3

In a sentence or two, explain the difference between what a method _returns_ and what a method _prints_. 

<details><summary>Answer</summary>

A return means that the entire method, when evaluated, will be converted into whatever the return value is. You can save the value that a method returns as a variable, or use it directly.  

A print statement in a method will simply print whatever is asked when the execution of the code reaches that line.  

</details>