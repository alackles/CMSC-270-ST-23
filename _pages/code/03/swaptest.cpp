#include <iostream>

void swap_by_ptr(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
}

void swap_by_ref(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int main() {

    int a = 40, b = 20;

    std::cout << "Before swap (ptr)\n";
    std::cout << "a = " << a << " b = " << b << "\n";

    swap_by_ptr(&a, &b); // why do we use address-of here?

    std::cout << "After swap (ptr)\n";
    std::cout << "a = " << a << " b = " << b << "\n";
    
    std::cout << "Before swap (ref)\n";
    std::cout << "a = " << a << " b = " << b << "\n";

    swap_by_ref(a, b); // why do these get passed in without a dereference?

    std::cout << "After swap (ref)\n";
    std::cout << "a = " << a << " b = " << b << "\n";

}