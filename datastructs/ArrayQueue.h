#ifndef ARRAYQUEUE_H_
#define ARRAYQUEUE_H_

#include "utils.h"

template<class T>               // Allows this data structure to use any given type as long as it fits the operations
class ArrayQueue {
    protected:                    // Can only be accessed by 'friend' classes; will see more about this soon 
        // underscores are convention to show that these are member variables
        int _n;                  // number of elements
        int _j;                  // starting position
        T *_a;                   // backing array
        int _size;               // total size of array, NOT number of elements
        void resize();           // protected resize op
    public:
        // Constructor
        ArrayQueue(int n);

        // Destructor
        ~ArrayQueue();

        // Get & Set operations
        T get(int i);
        T set(int i, T x);

        // Add at specified place
        void add(int i, T x);

        // Remove at specified place 
        T remove(int i);
        
        // enqueue/dequeue operations for queue-like behavior 
        void enqueue(T x);
        T dequeue();

        // Empty the queue
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
ArrayQueue<T>::ArrayQueue(int size) {
    _a = new T[size];
    _size = size; 
    _n = 0;
    _j = 0;
}

// default destructor just trashes everything
template<class T>
ArrayQueue<T>::~ArrayQueue() {}

// resize operation creates a new array twice the size of the original (or length 1 if the original array is empty)
// book: 2.1.2
template<class T>
void ArrayQueue<T>::resize() {
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
T ArrayQueue<T>::get(int i) {
    return _a[i];
}

template<class T>
T ArrayQueue<T>::set(int i, T x) {
    T y = _a[i];
    _a[i] = x;
    return y;
}

// add operation
// book: 2.1.1
template<class T>
void ArrayQueue<T>::add(int i, T x) {
    if (_n + 1 > _size) {
        resize();
    }
    if (i < _n/2) {
        // handle the start of the array
        if (_j == 0) {
            _j = _size - 1 
        } else {
            _j = (_j - 1) % _size
        }  
        // shift elements left one position
		for (int k = 0; k <= i-1; k++)
			a[(_j + k) % _size] = a[(j + k + 1) % _size];
	} else { 
        // shift elements right one position 
		for (int k = n; k > i; k--)
			a[(_j + k) % _size] = a[(j + k - 1) % _size];
	}
	a[( _j + i ) % _size] = x;      // set element to the empty spot
	n++;                            //increment no of elements
}

// remove operation: notice how close to the add op it is
template<class T>
T ArrayQueue<T>::remove(int i) {
    T x = a[(_j + i) % _size];
    if (i < _n/2) { // shift a[0],..,[i-1] right one position
    	for (int k = i; k > 0; k--)
			a[(_j+k)%_size] = a[(_j+k-1)%_size];
		_j = (_j + 1) % _size;
    } else { // shift a[i+1],..,a[n-1] left one position
		for (int k = i; k < _n-1; k++)
			a[(_j+k)%_size] = a[(_j+k+1)%_size];
    }
    _n--;
    if (3*n < _size) {
        resize();
    } 
    return x;
}

// enqueue and dequeue
// these ARE full rewrites of add/remove 
// they make use of constant-time operations instead of O(n)
// (ignoring the resize)
// you COULD implement as add(_n, x) but that would have a lot of calls to unnecessary checks
template<class T>
void ArrayQueue<T>::enqueue(T x) {
	 if (_n + 1 > _size) {
        resize();
     }
	 a[(_j+_n) % _size] = x;
	 _n++;
}

template<class T>
T ArrayQueue<T>::dequeue() {
	T x = a[_j];
	_j = (_j + 1) % _size //don't need to worry about j = 0
	_n--;
	if (_size >= 3*n) {
        resize();
    }
	return x;
}

// Clear out the queue
template<class T>
void ArrayQueue<T>::clear() {
    _n = 0;                    // no more elements 
    T *b = new T[1];           // create new, single-element, empty array
    _a = b;                    // overwrite existing array
}


// --- Little helper functions --- 
template<class T>
int ArrayQueue<T>::getSize() {
    return _size;
}

template<class T>
void ArrayQueue<T>::display() {
    std::cout << "[";
    for (int i = 0; i < _size; i++) {
        if (i == _j) {  // display the start of the circular queue
            std::cout << "*"; 
        }
        std::cout << " " << _a[i];
    }
    std::cout << " ]" << std::endl;
}

#endif /* ARRAYQUEUE_H */