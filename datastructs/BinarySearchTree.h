
#ifndef BINARYSEARCHTREE_H_                   // "header guards"  
#define BINARYSEARCHTREE_H_                   // prevents double inclusion

template<class T>
class BST {
    struct Node {
        T _x;
        Node *_parent;
        Node *_left;
        Node *_right;
    };
	int _n;
    Node _root;

public:

    // constructor
    BST();

    BST(T x);

    // destructor
    ~BST();

    // is x in the tree?
    bool isElement(T x);

    bool add(T x);

    T remove(T x);

    int size();

};

template <class T>
BST<T>::BST() {
	_n = 0;
}

template <class T>
BST<T>::BST(T x) {
	_n = 0;
    _root.x = x;
    _root._parent = nullptr;
    _root._left = nullptr;
    _root._right = nullptr;
}

template <class T>
BST<T>::~BST(){}

template<class T>
bool BST<T>::isElement(T x) {
    Node * currentNode = &_root;
    while (currentNode != nullptr) {
        if (x < currentNode->_x) {
            currentNode = currentNode->_left;
        } else if (x > currentNode-> x) {
            currentNode = currentNode->_right;
        } else {
            return true;
        }
    }
    return false;
}


#endif /*BINARYSEARCHTREE_H_*/