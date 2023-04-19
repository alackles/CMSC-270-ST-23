#include <iostream>
using namespace std;

class Rabbit {
    int xpos;
    int ypos;
    string name;

public:

    Rabbit(string name) {
        xpos = 0;
        ypos = 0;
        name = name;
    }

    void hopRight(){
        xpos++;
    }

    void hopUp();

    void show() {
        cout << "("<< xpos << ", " << ypos << ")" << endl;
    }
};

void Rabbit::hopUp() {
    ypos++;
}

int main() {
    Rabbit bunny("joe");
    bunny.show();
    bunny.hopRight();
    bunny.show();
    bunny.hopUp();
    bunny.show();

}