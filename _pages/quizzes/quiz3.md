---
title: Quiz 3
permalink: /quizzes/quiz3
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Quiz 3: If/Else and Loops

## Question 1

Write a method definition in Java syntax that defines a method called _larger_ of type `int` that takes in two integers, `a`, and `b`, and returns the larger one.

<details><summary>Answer</summary>

Either of the following:

```java
public static int larger(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
```

```java
public static int larger(int a, int b) {
    if (a > b) {
        return a;
    }
     else {
        return b;
     }
}
```

</details>

<br>

## Question 2

In a sentence or two, explain how these two pieces of code are different, and identify which one accurately reflects the behavior you would expect based on the print statements. 

```java
if (x) {
    System.out.println("x is true");
}
System.out.println("x is false");
```

```java
if (x) {
    System.out.println("x is true");
} else { 
    System.out.println("x is false");
}
```

<details><summary>Answer</summary>

In the first case, `x is false` prints regardless of the truth value of `x`, while in the second case, it will only print if `x` is false. Therefore, the second case better represents the expected behavior. 

</details>

<br>

## Question 3

What will the following loop output?

```java
for (int i = 0; i < 5; i++) {
    System.out.println(i + " : " + i+2)
}
```

<details><summary>Answer</summary>

```
0 : 2
1 : 3
2 : 4
3 : 5
4 : 6
```

Note that adding 2 to `i` in the print statement does not actually modify the value of `i` because it is not being assigned back to `i`. 

</details>
<br>