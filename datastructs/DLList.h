// DRAFT //
// for you all to complete//

#ifndef DLLIST_H_
#define DLLIST_H_

// node 'struct' - a tiny collection
template<class T>
struct Node {
    T _x;
    Node *_next;
    Node *_prev;

    Node(T x) {
        _x = x;
        _next = nullptr
    }
};

template<class T>
class DLList {
	Node dummy;
	int _n;

protected:
    // these are all "internal" functions
    // things that help the implementation we're trying to accomplish

    // get the node at position i, helpful for other ops
    Node* getNode(int i);

    // adding before a given node
    // the reason this isn't part of a general add function
    // is so that we can keep the inputs to add(i, x) the same
    // and separate out the idea of a 'node' into the implementation
    Node* addBefore(Node *w, T x);

    // remove a specific node, not a specific index 
    void removeNode(Node *w);

public:

    // Constructor
    DLList();

    // Destructor
    ~DLList();

    
    // get & set operations (INEFFICIENT - if we are doing frequent 'get' or 'set', use arrays)
    T get(int i);
    T set(int i, T x);

    // add 
    void add(int i, T x);

    // remove
    T remove(int i);
};

#endif /*DLLIST_H_*/