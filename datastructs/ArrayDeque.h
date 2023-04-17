#ifndef ARRAYDEQUE_H_
#define ARRAYDEQUE_H_

#include "utils.h"

template<class T>               // Allows this data structure to use any given type as long as it fits the operations
class ArrayDeque {
    protected:                    // Can only be accessed by 'friend' classes; will see more about this soon 
        // underscores are convention to show that these are member variables
        int _n;                  // number of elements
        int _j;                  // starting position
        T *_a;                   // backing array
        int _size;               // total size of array, NOT number of elements
        void resize();           // protected resize op
    public:
        // Constructor
        ArrayDeque(int n);

        // Destructor
        ~ArrayDeque();

        // Get & Set operations
        T get(int i);
        T set(int i, T x);

        // Add at specified place
        void add(int i, T x);

        // Remove at specified place 
        T remove(int i);
        
        // add/remove operations for deque behavior
        void add_front(T x);
        void add_back(T x);
        T remove_front();
        T remove_back();

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
ArrayDeque<T>::ArrayDeque(int size) {
    _a = new T[size];
    _size = size; 
    _n = 0;
    _j = 0;
}

// default destructor just trashes everything
template<class T>
ArrayDeque<T>::~ArrayDeque() {}

// resize operation creates a new array twice the size of the original (or length 1 if the original array is empty)
// book: 2.1.2
template<class T>
void ArrayDeque<T>::resize() {
    T * b = new T[max(1, 2*_n)];
    for (int i = 0; i < _n; i++) {
        b[i] = _a[i];
    }     
    _a = b;
    _size = max(1, 2*_n);
    _j = 0;
}

// get & set operations
// book: 2.1.1
template<class T>
T ArrayDeque<T>::get(int i) {
    return _a[i];
}

template<class T>
T ArrayDeque<T>::set(int i, T x) {
    T y = _a[i];
    _a[i] = x;
    return y;
}

// add operation
// book: 2.1.1
template<class T>
void ArrayDeque<T>::add(int i, T x) {
    if (_n + 1 > _size) {
        resize();
    }
    if (i < _n/2) {
        // handle the start of the array
        if (_j == 0) {
            _j = _size - 1; 
        } else {
            _j = (_j - 1) % _size;
        }  
        // shift elements left one position
		for (int k = 0; k <= i-1; k++)
			_a[(_j + k) % _size] = _a[(_j + k + 1) % _size];
	} else { 
        // shift elements right one position 
		for (int k = _n; k > i; k--)
			_a[(_j + k) % _size] = _a[(_j + k - 1) % _size];
	}
	_a[( _j + i ) % _size] = x;      // set element to the empty spot
	_n++;                            //increment no of elements
}

// remove operation: notice how close to the add op it is
template<class T>
T ArrayDeque<T>::remove(int i) {
    T x = _a[(_j + i) % _size];
    if (i < _n/2) { // shift _a[0],..,[i-1] right one position
    	for (int k = i; k > 0; k--)
			_a[(_j+k)%_size] = _a[(_j+k-1)%_size];
		_j = (_j + 1) % _size;
    } else { // shift _a[i+1],..,_a[n-1] left one position
		for (int k = i; k < _n-1; k++)
			_a[(_j+k)%_size] = _a[(_j+k+1)%_size];
    }
    _n--;
    if (3*_n < _size) {
        resize();
    } 
    return x;
}


// here we mask the original add function because we ARE going to have to do shifts, no matter what
// unlike the regular queue's special add/remove functions where we can directly place it into the spot we want without any shifting
// this is because here we could be shrinking from both ends
template<class T>
void ArrayDeque<T>::add_front(T x) {
	 add(0, x);
}

template<class T>
void ArrayDeque<T>::add_back(T x) {
	 add(_n, x);
}

template<class T>
T ArrayDeque<T>::remove_front() {
	return remove(0);
}

template<class T>
T ArrayDeque<T>::remove_back() {
	return remove(_n);
}

// Clear out the queue
template<class T>
void ArrayDeque<T>::clear() {
    _n = 0;                    // no more elements 
    T *b = new T[1];           // create new, single-element, empty array
    _a = b;                    // overwrite existing array
}


// --- Little helper functions --- 
template<class T>
int ArrayDeque<T>::getSize() {
    return _size;
}

template<class T>
void ArrayDeque<T>::display() {
    std::cout << "[";
    for (int i = 0; i < _size; i++) {
        if (i == _j) {  // display the start of the circular queue
            std::cout << "*"; 
        }
        std::cout << " " << _a[i];
    }
    std::cout << " ]" << std::endl;
}

#endif /* ArrayDeque_H */