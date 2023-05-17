#ifndef HEAPPRIORITYQUEUE_H_               // "header guards"
#define HEAPPRIORITYQUEUE_H_               // prevents double inclusion

#include "utils.h"

template<class T>               // Allows this data structure to use any given type as long as it fits the operations
class HeapPriorityQueue {
    protected:                    // Can only be accessed by 'friend' classes; will see more about this soon 
        // underscores are convention to show that these are member variables
        int _n;                  // number of elements
        T *_a;                   // backing array
        int _size;               // total size of array, NOT number of elements
        void resize();           // protected resize op
    public:
        // Constructor
        HeapPriorityQueue(int n);

        // Destructor
        ~HeapPriorityQueue();

        // Add at specified place
        void add(T x);

        // Remove at specified place 
        T remove();
        
        // helper functions for add/remove
        void bubbleUp(int i);
        void trickleDown(int i);

        // helper functions to find the proper place
        int parent(int i);
        int left(int i);
        int right(int i);

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
HeapPriorityQueue<T>::HeapPriorityQueue(int size) {
    _a = new T[size];
    _size = size; 
    _n = 0;
    _j = 0;
}

// default destructor just trashes everything
template<class T>
HeapPriorityQueue<T>::~HeapPriorityQueue() {}

template<class T>
int HeapPriorityQueue<T>::parent(int i) {
    return (i-1)/2;
}

template<class T>
int HeapPriorityQueue<T>::left(int i) {
    return 2*i + 1
}

template<class T>
int HeapPriorityQueue<T>::right(int i) {
    return 2*i + 2
}

// resize operation creates a new array twice the size of the original (or length 1 if the original array is empty)
// book: 2.1.2
template<class T>
void HeapPriorityQueue<T>::resize() {
    T * b = new T[max(1, 2*_n)];
    for (int i = 0; i < _n; i++) {
        b[i] = _a[i];
    }     
    _a = b;
    _size = max(1, 2*_n);
    _j = 0;
}

// add operation
// book: 2.1.1
template<class T>
void HeapPriorityQueue<T>::add(T x) {
    if (_size < _n+1) {
        resize();
    }
    _a[_n] = x;
    bubbleUp(_n);
    _n++;
}

template<class T>
void HeapPriorityQueue<T>::bubbleUp(int i) {
    int p = parent(i);
    int temp;
    while (i > 0 && _a[i] < _a[p]) {
        temp = _a[p];
        _a[p] = _a[i];
        _a[i] = temp;
        i = p;
        p = parent(i);
    }
}

// remove operation: notice how close to the add op it is
template<class T>
T HeapPriorityQueue<T>::remove() {
    T x = _a[0];
    _a[0] = _a[_n-1];
    _n--;
    trickleDown(0);
    if (3*n < _size) {
        resize();
    }
    return x;
}

template<class T>
void HeapPriorityQueue<T>::trickleDown(int i) {
    int j, r, l;
    while (i >= 0) {

        // Finding the right node to swap with
        int j = -1;
        r = right(i);                   // find the right child
        if (r < _n && _a[r] < _a[i]) {      // if the right child exists and is less than the node
            l = left(i);                // find the left child
            if (_a[l] < a[r]) {             // compare the left vs right child and pick the smaller
                j = l;
            } else {
                j = r;
            }
        } else {                        // if the right child doesn't exist or is too big, get the left child
            l = left(i);
            if (l < _n && _a[l] < _a[i])  { // if left child exists and is less than the node
                j = l;
            }
        }

        // Doing the actual swap
        if (j >= 0) {           
            temp = _a[j];
            _a[j] = _a[i];
            _a[i] = temp;
        }
        i = j;
    }
}

// Clear out the queue
template<class T>
void HeapPriorityQueue<T>::clear() {
    _n = 0;                    // no more elements 
    T *b = new T[1];           // create new, single-element, empty array
    _a = b;                    // overwrite existing array
}


// --- Little helper functions --- 
template<class T>
int HeapPriorityQueue<T>::getSize() {
    return _size;
}

template<class T>
void HeapPriorityQueue<T>::display() {
    std::cout << "[";
    for (int i = 0; i < _size; i++) {
        if (i == _j) {  // display the start of the circular queue
            std::cout << "*"; 
        }
        std::cout << " " << _a[i];
    }
    std::cout << " ]" << std::endl;
}

#endif /* HEAPPRIORITYQUEUE_H */