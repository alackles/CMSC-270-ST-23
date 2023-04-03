#include <iostream>

#include "ArrayStack.h"

int main() {
    ArrayStack<int> stack(10);
    stack.set(4, 5);
    int i = stack.get(4);
    std::cout << i << std::endl;
}