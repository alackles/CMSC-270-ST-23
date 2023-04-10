---
title: Pointers
permalink: /notes/03/pointers/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

[Week 3 Code](https://github.com/alackles/CMSC-270-ST-23/tree/main/_pages/code/03/)

It's time to talk about pointers!

Pointers are kind of notorious in C++, not because they are particularly difficult to _understand_...

![wojack meme of a guy labeled "int *" pointing at the word "int"](https://i.redd.it/kh726uczjnq71.png)

... but because they are easy to trip yourself up on. 

![meme where a small, hopeful novice C++ programmer gets walloped with memory leaks, segmentation faults, and crashes once they try using pointers](https://preview.redd.it/fzqra9lm4um71.jpg?auto=webp&s=13d9e8e9028f643c98a63d8ac164a142cc431c1f)

The problem is that we really can't avoid them if we want to do things efficiently in C++. If we want to be able to jump around memory without needing it all to be directly contiguous, we need pointers. If we want to be able to move the order we access things without physically moving the information in memory, we need pointers. 

Like many things in C++, grasping pointers and references takes practice and actual implementation, not just a lecture. So I'll give you some examples here, but the real explanation of how pointers and why pointers will come when we implement _linked lists_ the rest of the week. 

# Lecture/Live-Code

## Address-Of Operator

Every variable you create has some address in memory. We can access that address using the operator `&`.

```cpp
double example = 4.1;
std::cout << "Value: " << example << "\n";
std::cout << "Address: " << &example << std::endl;
```

But what type is this address? If we try to save it as an int or a double, we'll get an error. 

```cpp
double example = 4.1;
double value = example; // this is fine
double address = &example; // this won't work at all 
```

## Declaring a Pointer Type

It is a _pointer type_, which is a "compound type". To get the address, we need to declare a _pointer_ to a double, not just a double. 

```cpp
double example = 4.1;
double value = example; // this is fine
double * address = &example; // there we go!
```

This is similar to in Java when we want to declare an array and we need to use `[]`, even though it seems like it should be 'obvious' that it is an array.

```java
int[] arr = new int[20]; // declaring an array of integers in java
```

```cpp
int i = 20;
int * ip = &i; // declaring a pointer to an address, in this case the address of i
```

## Dereference Operator

The confusing thing for many people here is that `*` is both used to declare a type and used to dereference a pointer. But it becomes a little easier if you just remember that `*` can be either a _dereference operator_ or part of a _type declaration_, just like the double brackets `[]` can be either an _index operator_ or a _type declaration_. 

In the above example, we could do something like this. 

```cpp
double example = 4.1;
double value = example; // this is fine
double * address = &example; 
double addrvalue = *address; // note that neither * or & appears on the left, because the value's type is double
```

The dereference operator can be read as "the value pointed to by", just like the address-of operator can be read as "the address of".

# Exercises
## Operator Precedence

Order the following operations by precedence. Do this by playing around in a C++ program! Try different operation test cases by assigning different values to your variables and see what the result is by printing.

- `++` as a prefix (`++p`)
- `++` as a postfix (`p++`)
- `*` as a dereference operator (`*p`)
- `*` as a multiplication operator (`a * b`)

As a final test of your understanding, explain what happens in the following line of code step-by-step and what the final value is. Add parentheses as appropriate to make the final value

```cpp
int a = 2;
int b = 5;
int * pa = &a;
int * pb = &b;
auto finalval = *pa++*++*pb++ // this is terrible. don't ever do this. but you can.
```

**Hint:** Break this down so you are just doing one operation at a time. For example, what does `finalval = ++p` set `finalval` to? Print it to the console to check. What about `finalval = *++p`?

## Answer

The final line is equivalent to this parenthesized version:

```cpp
auto finalval = (*(pa++))*(++(*(pb++)));
```

## Extension

The following C++ program produces the output

```
12
78
```

Why doesn't it produce 12 twice? And where does the 78 come from?

```cpp
#include <iostream>

int main() {
    int a = 2;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    auto finalval = *pa++*++*pb++;
    std::cout << finalval << "\n";
    std::cout << *pa++*++*pb++ << std::endl;
}
```