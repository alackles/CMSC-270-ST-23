---
title: NOTES: Java to C++
permalink: /notes/01/cpp/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

# Lecture Notes

You should have some experience working with Java. Luckily, C++ is a very similar language; both are based on C and share a number of important features and similar syntax. The goal for today's class is to get some exposure to the similarities and differences between the two languages. 

In this class, we will primarily learn C++ by _doing_. We will slowly build up an understanding of C++ over time. The most important thing to remember is **just because the syntax is different, doesn't mean the logic is different.** Going from Java to C++ is not quite like going from Spanish to French; it's more like going from American English to Australian English. Some of the words will be different, some of the features and quirks will be unfamiliar, but it should be possible to at least _read_ and _understand_ simple C++ programs with your current understanding of Java. That is what we are building from. 

## Hello, World

In Java:

```java
// Hello.java
class Hello {   
    public static void main(String[] args) {
        System.out.println("Hello, world!");
    }
}
```

In C++:

```cpp
// hello.cpp, helloworld.cpp, whatever you want to call it - name doesn't matter
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
}
```

Okay, these look pretty different. Maybe I'm lying to you. 

In actuality, it's just the wrapping that's different. Here's the key parts of each of these programs:

```java
System.out.println("Hello, world!");
```

```cpp
std::cout << "Hello, world!" << std::endl;
```

Similarities:
- Some way to indicate where the print is going (System.out vs. std::cout)
- Some way to indicate that the line should end (println vs. std::endl)
- Same notation for strings (double quotes)
- Ending with a semicolon

And this is actually a place where you will see the greatest difference between the two languages: how they handle input and output to the terminal. In reality, `System.out` and `std::cout` are referring to the exact same place. 

## A Simple For Loop 

To show you that these languages really are more similar than different, here's a simple for loop to print the sum of numbers from 1 to 100. 

```java
int sum = 0;
for (int i = 0; i < 100; i++) {
    sum += i;
}
System.out.println(sum);
```

```cpp
int sum = 0;
for (int i = 0; i < 100; i++) {
    sum += i;
}
std::cout << sum << std::endl;
```

You almost can't even tell these are different languages without the print statement. 

## Arrays

How do we create an empty array of size 20?

Java:

```java
int[] myArray = new int[20];
```

C++:

```cpp
int myArray[20];
```

In general, **creating arrays in C++ does not require the use of the `new` keyword like in Java**. 

In fact, **creating objects in C++ does not require the use of the `new` keyword at all.**

This even applies to our own user-defined classes. 

## Class Definitions

In Java:

```java
import java.util.Random;

class Dice {
    int sides;
    Random r = new Random();

    public Dice() {
        this.sides = 6;
    }

    public Dice(int sides) {
        this.sides = sides;
    }

    public int roll() {
        return r.nextInt(sides)+1;
    }

    public static void main(String[] args) {
        Dice die = new Dice(12);
        int result = die.roll();
        System.out.println(result);
    }
}
```

In C++:

```cpp
class Dice {
    int _sides;

    public:

        Dice() {
            _sides = 6;
        }
    
        Dice(int sides) {
            _sides = sides;
        }

        ~Dice(){};

        int roll() {
            return (std::rand() % _sides) + 1
        }

};

int main() {
    Dice die(12);
    int result = die.roll();
    std::cout << result << std::endl;
}
```

Big differences to note:
- No required use of 'this' keyword
- Explicitly must include the partner class 
- `public` is treated like a scope in the class, not like a keyword on individual functions or attributes 
- **`main` is not part of the class**


# Exercises

## Exercise 1

In your groups, write a program in C++ that counts down from 100 to 0 by 7s. Stop before reaching 0. 

## Exercise 2

In your groups, write a `Cube` class in C++. It should have dimensions length, width, and height, and a member function called `getVolume()` that returns the volume. 

If you finish early, consider adding the following functionality:

- Have some notion of 'total available volume' that is the total volume of the cube minus any volume currently being 'used'. Imagine it like a big fish tank that you can fill up and drain out. 
- Add a member function called `add()` that takes a number as an argument and reduces the total available volume by that number (as if you are adding water to the fish tank)
- Add a member function called `remove` that takes a number as an argument and increases the total available volume by that number (as if you are draining water from the fish tank)