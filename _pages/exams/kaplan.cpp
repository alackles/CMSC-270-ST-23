#include <iostream>
#include <string>

class OrderBoard {

    int boardDisplay[1000];
    int n;

public: 

    OrderBoard() {
        n = 0;
    }

    ~OrderBoard() {}

    void addOrder(int x) {
        boardDisplay[n] = x;
        n++;
        display();
    }

    void removeOrder(int x) {
        for (int i = 0; i < n; i++) {
            if (boardDisplay[i] == x) {
                for (int j = i; j < n; j++) {
                    boardDisplay[j] = boardDisplay[j+1];
                }
                n--;
                display();
                return;
            }
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            std::cout << boardDisplay[i] << " ";
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