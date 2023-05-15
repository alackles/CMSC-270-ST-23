// Adam Bruce, Gabe Gomes, and Alibek Mamyrbay

#include <iostream>
#include <string>
#include "DLList.h"

class OrderBoard {

    DLList<int> kaplansList;
    int n;

public: 

    OrderBoard() {
        n = 0;
    }

    ~OrderBoard() {
        // TOOK OUT KAPLANLIST DETRUCTOR!
    }

    void addOrder(int x) {
        kaplansList.add(n, x);
        n++;
        display();
    }

    void removeOrder(int x) {
        for(int i = 0; i <= n; i++){
            if(kaplansList.getNode(i)->_x == x){
                kaplansList.remove(i);
            }
        }
        display();
    }

    void display() {
        kaplansList.display();
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