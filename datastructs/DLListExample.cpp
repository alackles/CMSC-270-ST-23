#include <iostream>
#include "DLList.h"

int main() {
    DLList<int> myList;
    myList.add(0, 15);
    myList.display();
    
    myList.add(1, 20);
    myList.display();
    
    myList.add(2, 17);
    myList.display();
    
    myList.remove(1);
    myList.display();
    
    myList.remove(0);
    myList.display();
}