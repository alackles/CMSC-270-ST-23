---
title: Quiz 5
permalink: /quizzes/quiz5
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

## Question 1

Briefly explain the difference between a class and an object.

<details><summary>Answer</summary>
A class is a template and an object is the thing created from that template. 
</details>

<br><br>

## Question 2

Consider the following code.

<code>
public static void movePointA(Point p, int x, int y) {
    p.x = x;
    p.y = y;
}
public static void movePointB(int px, int py, int x, int y) {
    px = x;
    py = y;
}
Point coord = new Point(0, 0);
movePointA(coord, 1, 1);
movePointB(coord.x, coord.y, 7, 7);
</code>


A) Explain the difference between these two methods; in particular, their parameters. 

<details><summary>Answer</summary>

movePointA() takes in a Point object as a parameter while movePointB() only takes in integers. 

Because objects are passed by reference, movePointA() actually changes the object passed in, while movePointB() does not because it passes in primitives.

</details>

<br><br>

B) Draw a visual representation of what the object coord looks like after line 13.

<details><summary>Answer</summary>

The coordinate is at (1,1), because movePointB()does not actually alter the point's values.

</details>