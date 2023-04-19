---
title: Template Types (etc.)
permalink: /notes/04/templates/
toc: true
toc_label: "Table of Contents"
toc_icon: "cog"
---

Templates in C++ allow us to make very flexible functions that can take arguments of a generic type. We've been using these all along in the data structures we create and use. 

The purpose of today's class is to allow us to go back through the data structures we've created so far and break down piece-by-piece what is happening in the C++ code. We'll take a look in particular at the `ArrayList` and `DLList` code, which is available to view [here](https://github.com/alackles/CMSC-270-ST-23/tree/main/_pages/code/04).

## Templates

Templates allow you to declare a function of any generic type (that fits within the function). 

```cpp
template<class T> T sum(T a, T b) {
    return a + b
}

int main() {
    std::cout << sum<int>(2, 4) << "\n";
    std::cout << sum<double>(2.4, 4.1) << "\n" 
    //std::cout << sum<std::string>("hi", " everyone") << "\n"              // not valid
}
```

Notice that we'll sitll have a problem if we pass it a type that doesn't make sense. 

Out of convention we typically put this "template" definition on the line before the function definition so that it's uniform with non-templated functions

```cpp
template<class T>
T sum(T a, T b) {
    return a + b;
}
```

## Namespace, Definition, Declaration

Another feature of the data structures classes we've used so far is _namespaces_. A namespace is basically a user-defined scope. So instead of just global and local scope, you can have scope that encompasses a whole class definition or set of functions. 

Classes by default create their own namespace, which we then have to explicitly identify if we're using or defining functions outside of the class definition or object call. 


```cpp
class Rabbit {
    int xpos;
    int ypos;

    Rabbit() {
        xpos = 0;
        ypos = 0;
    }

    void hopRight();

    void hopUp() {
        ypos++;
    }

    void show() {
        std::cout << "("<< xpos << ", " << ypos << ")" << std::endl;
    }
}

void Rabbit::hopRight() {
    xpos++;
}

void Rabbit::getY() {
    return ypos;
}

int main() {
    Rabbit bunny;
    bunny.show();           // no need to include the namespace because we have an object to work on
    bunny.hopRight();
    bunny.show();
    std::cout << "Example" << std::endl;        // here we include the std namespace because 'cout' and 'endl' don't act on objects
}
```

Namespaces and templates are not actually related to each other inherently; we can use one without the other. In this class we often don't because if we are defining a templated function, it is usually within the context of a class namespace, but they are two different things.

## Header Guards

You probably noticed some stuff added to the beginning and end of files:

```cpp
#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
//....
#endif /* ARRAYLIST_H_ */
```

These are "header guards", which basically tell a compiler to include everything that is included/imported in these files only once, even if it's included/imported in other files later on. It keeps from 'redeclaring' when you are really just using the same code in two different places.
