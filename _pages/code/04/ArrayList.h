//#ifndef ARRAYLIST_H_            // "HEADER GUARDS"
//#define ARRAYLIST_H_

#include <iostream>
#include "utils.h"

template<class T>               // Allows this data structure to use any given type as long as it fits the operations
class ArrayList {
    protected:                    // Can only be accessed by 'friend' classes; will see more about this soon 
                                // underscores are convention to show that these are member variables
        int _n;                  // number of elements
        T *_a;                   // backing array
        int _size;               // total size of array, NOT number of elements
        void resize();           // protected resize op
    
    public:
        // Constructor
        ArrayList(int n);

        // Destructor
        ~ArrayList();

        // Get & Set operations
        T get(int i);
        T set(int i, T x);

        // Add at specified place, add to end
        void add(int i, T x);

        // Remove at specified place 
        T remove(int i);
        
        // Empty the stack 
        void clear();

        // --- Below this point are some helpful functions ---
        // not necessary parts of the data structure, but helpful for working with the class
        int getSize();
        void display();
};

//  Constructor and Destructor
//      for the constructor, we initialize a new array as the "backing array"
//      these constructors/destructors can be identical for any array-based implementation
template<class T>
ArrayList<T>::ArrayList(int size) {
    _a = new T[size];
    _size = size; 
    _n = 0;
}

// default destructor just trashes everything
template<class T>
ArrayList<T>::~ArrayList() {}

// resize operation creates a new array twice the size of the original (or length 1 if the original array is empty)
// book: 2.1.2
template<class T> 
void ArrayList<T>::resize() {
    T * b = new T[max(1, 2*_n)];
    for (int i = 0; i < _n; i++) {
        b[i] = _a[i];
    }     
    _a = b;
    _size = max(1, 2*_n);
}

// get & set operations
// book: 2.1.1
template<class T>
T ArrayList<T>::get(int i) {
    return _a[i];
}

template<class T>
T ArrayList<T>::set(int i, T x) {
    T y = _a[i];
    _a[i] = x;
    return y;
}

// add operation
// book: 2.1.1
template<class T>
void ArrayList<T>::add(int i, T x) {
    // resize if array is too small to fit 
    if (_n + 1 > _size) {
        resize();
    }
    // shift all elements of the array that were to the right of index i one space to the right to make room for the new element
    for (int j = _n; j > i; j--) {
        _a[j] = _a[j-1];
    }
    // insert the new element 
    _a[i] = x;
    // increase the array element count
    _n++;
}

// remove operation
// book: 2.1.1 
template<class T>
T ArrayList<T>::remove(int i) {
    // get the original element at the index being removed
    T x = _a[i];
    // shift all elements of the array that are to the right of index i one space to the left to overwrite the original element
    for (int j = i; j < _n - 1; j++) {
        _a[j] = _a[j+1];
    }
    // decrease the array element count
    _n--;
    // resize if array is too large for the data 
    if (_size >= 3 * _n) {
        resize();
    }
    // original element in case we want it
    return x;
}

// Clear out the list
template<class T>
void ArrayList<T>::clear() {
    _n = 0;                    // no more elements 
    T *b = new T[1];           // create new, single-element, empty array
    _a = b;                    // overwrite existing array
}


// --- Little helper functions --- 
template<class T>
int ArrayList<T>::getSize() {
    return _size;
}

template<class T>
void ArrayList<T>::display() {
    std::cout << "[";
    for (int i = 0; i < _size; i++) {
        std::cout << " " << _a[i];
    }
    std::cout << " ]" << std::endl;
}


//#endif /* ARRAYLIST_H_ */