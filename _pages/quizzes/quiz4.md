---
title: Quiz 4
permalink: /quizzes/quiz4
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

## Question 1

Write out the Java syntax to declare a new array of length 100 to hold strings.

<details><summary>Answer</summary>

<code>
String[] myArray = new String[100];
</code>

</details>

## Question 2

Fix the following code so that it will correctly check whether two strings contain the same characters.

```java
String a = "beep"
String b = "beep"
if (a == b) { // uh oh, this won't work
    System.out.println("Same word.");
}
```

<details><summary>Answer</summary>

<code>
String a = "beep"
String b = "beep"
if (a.equals(b)) { // uh oh, this won't work
    System.out.println("Same word.");
}
</code>

</details>


## Question 3

Explain in a few sentences what a _reference_ is as it relates to arrays. Feel free to draw a diagram or use analogies if that would be helpful (but it's not necessary). 

<details><summary>Answer</summary>

See <a href="https://greenteapress.com/thinkjava7/html/chapter-07.html#sec89">this chapter</a> of your book.

</details>
