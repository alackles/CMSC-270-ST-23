---
title: Group Exam 2 Solutions
permalink: /exams/groupexam2-solutions/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

The most appropriate data structure for this question is a **set**, or, if you'd like to preserve duplicates, a **multiset**. Here is the code: [code](https://github.com/alackles/CMSC-270-ST-23/blob/main/_pages/exams/groupexam2-solution/kaplan.cpp). Try to implement with a set first!

All of the required operations are `O(log(n))`, and sets give you sorting "for free" (that is, in displaying the elements from an `std::set`, displaying them in order by default gives you a sorted version.

In fact, it is a little better than that: the _find_ operation is `O(log(n))`, so if we consider the cost of addition and removal after we find the element, addition and removal are constant time `O(1)`. 

Meanwhile, in a vector (for example), finding an element is `O(n)`, and addition and removal are `O(log(n))` even without finding. 