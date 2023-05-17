#include <iostream>
#include <string>
#include <set>

class OrderBoard {

    std::set<int> boardDisplay;
    int n;

public: 

    OrderBoard() {
        n = 0;
    }

    ~OrderBoard() {}

    void addOrder(int x) {
        x = x % 100; // takes the final two numbers only
        boardDisplay.insert(x);
        n++;
        display();
    }

    void removeOrder(int x) {
        boardDisplay.erase(x);
        n--;
        display();
    }

    void display() {
        for (auto elem : boardDisplay) {
            std::cout << elem << " ";
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
    kaplanBoard.addOrder(2928420);
    kaplanBoard.addOrder(2991915);
    kaplanBoard.removeOrder(20);

    // add several orders in a row before removing one from the middle
    kaplanBoard.addOrder(2924845);
    kaplanBoard.addOrder(4953100);
    kaplanBoard.addOrder(3048502);
    kaplanBoard.removeOrder(0);

    // add some more orders
    kaplanBoard.addOrder(2949421);
    kaplanBoard.addOrder(5857720);

    // remove another order
    kaplanBoard.removeOrder(21);
    kaplanBoard.removeOrder(2); 
    kaplanBoard.removeOrder(15);


}