#include <cstdlib>
#include <iostream>

class Dice {

    int sides;

    public: 
        Dice() {
            sides = 6;
        }
        Dice(int s) {
            sides = s;
        }
        
        ~Dice(){}

        int roll() {
            return (std::rand() % sides) + 1;
        }

};

int main() {
    Dice die(12);
    int result = die.roll();
    std::cout << result << std::endl;
}