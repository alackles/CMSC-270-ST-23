#include <iostream>
#include "SLList.h"

int main() {
    SLList<int> myList;
    myList.add(7);
    std::cout << myList.get(0) << std::endl;
    myList.add(20);
    std::cout << myList.get(1) << std::endl;
}