#include <iostream>
#include <string>

#include "DLList.h"

class OrderBoard {

    DLList<int> boardDisplay;
    int n;

public: 

    OrderBoard() {
        n = 0;
    }

    ~OrderBoard() {}

    void addOrder(int x) {
        boardDisplay.add(n, x);
        n++;
        display();
    }

    void removeOrder(int x) {
        boardDisplay.remove(boardDisplay.find(x));
        n--;
        display();
    }

    void display() {
        boardDisplay.display();
    }

    int getN() {
        return n;
    }

};

int main() {

    OrderBoard kaplanBoard;

    // add and remove an order 
    kaplanBoard.addOrder(20);
    kaplanBoard.addOrder(15);
    kaplanBoard.removeOrder(20);

    // add several orders in a row before removing one from the middle
    kaplanBoard.addOrder(15);
    kaplanBoard.addOrder(100);
    kaplanBoard.addOrder(2);
    kaplanBoard.removeOrder(100);

    // add some more orders
    kaplanBoard.addOrder(21);
    kaplanBoard.addOrder(20);

    // remove another order
    kaplanBoard.removeOrder(21);
    kaplanBoard.removeOrder(2); 
    kaplanBoard.removeOrder(15);


}