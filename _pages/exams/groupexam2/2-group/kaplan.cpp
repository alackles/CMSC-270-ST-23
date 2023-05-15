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
        boardDisplay.add(n,x);
        n++;
        display();
    }

    void removeOrder(int x) {
        for (int i = 0; i < n; i++) {
            if (boardDisplay.get(i) == x) {
                boardDisplay.remove(i);
                n--;
                display();
                return;
            }
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            std::cout << boardDisplay.get(i) << " ";
        }
        std::cout << std::endl;
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

    // remove another few orders
    kaplanBoard.removeOrder(21);
    kaplanBoard.removeOrder(2); 
    kaplanBoard.removeOrder(15);

}