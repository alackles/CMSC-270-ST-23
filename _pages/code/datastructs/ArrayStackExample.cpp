#include <iostream>

#include "ArrayStack.h"

int main() {
    ArrayStack<int> stack(10);
    
    std::cout << "Initial Stack" << "\n";
    stack.display();
    
    stack.push(20);
    
    std::cout << "Push 20 " << "\n";
    stack.display();
    
    stack.push(15);
    
    std::cout << "Push 15 " << "\n";
    stack.display();

    stack.pop();
    
    std::cout << "Pop (notice the resize: why?)" << "\n";
    stack.display();

    stack.push(7);
    
    std::cout << "Push 7 " << "\n";
    stack.display();

    stack.push(11);
    
    std::cout << "Push 11 (notice the resize: why?)" << "\n";
    stack.display();

    stack.pop();
    
    std::cout << "Pop " << "\n";
    stack.display();
}