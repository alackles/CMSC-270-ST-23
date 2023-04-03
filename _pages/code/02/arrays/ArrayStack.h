#include <array>

#include "utils.h"

template<class T>               // Allows this data structure to use any given type as long as it fits the operations
class ArrayStack {
    protected:                  // Can only be accessed by 'friend' classes; will see more about this soon 
        int _n;
        T *_a;
        void resize();
    public:
        // Constructor
        ArrayStack(int n);

        // Destructor
        ~ArrayStack();

        // Size of array
        int size();

        // Get & Set operations
        T get(int i);
        T set(int i, T x);

        // Add at specified place, add at top of stack
        void add(int i, T x);
        void add(T x) { add(size(), x); }

        // Remove at specified place 
        T remove(int i);

        // Empty the stack 
        void clear();
};

// 
template<class T>
ArrayStack<T>::ArrayStack(int n) {
    _a = new T[n];
}

template<class T>
ArrayStack<T>::~ArrayStack() {}
