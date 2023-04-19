#include <iostream>
#include <string>

template <class T> 
T sum(T a, T b) {
    return a + b;
}

template <class T> 
void print(T input) {
    std::cout << input << std::endl;
}

int main() {
    std::cout << sum<int>(2.0, 4.7) << "\n";
    //std::cout << sum("hi", " everybody") << "\n";
    print<std::string>("hello");
    print(5);
}