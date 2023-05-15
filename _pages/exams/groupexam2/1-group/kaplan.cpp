#include <iostream>
#include <string>
#include "DLList.h"
class OrderBoard{

    DLList<int> boardDisplay;

public: 


    //we didn't need a constructor because we were just using the DLList boardDisplay. Didn't need to use n here because we were using _n from boardDisplay
    void addOrder(int x) {
        
        boardDisplay.add(0, x);
        display();
    }

    void removeOrder(int x) {
        boardDisplay.remove(boardDisplay.find(x));
        display();
    }

    void display() {
        boardDisplay.print();
    }

    int getN() {
        return boardDisplay.getN();
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