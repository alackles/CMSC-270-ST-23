// node 'struct' - a tiny collection
template<class T>
struct Node {
    T _x;
    Node *_next;

    Node(T x) {
        _x = x;
        _next = nullptr
    }
};

template<class T>
class SLList {
	Node *_head;
	Node *_tail;
	int _n;

public:

    // Constructor
    SLList();

    // Destructor
    ~SLList();

    // get & set operations (INEFFICIENT - if we are doing frequent 'get' or 'set', use arrays)
    T get(int i);
    T set(int i, T x);

    // add 
    void add(int i, T x);
    void add(T x); // assumes addition to the tail -- notice this is NOT just a wrapper for add(int i, T x) but a completely different implementation

    // remove
    T remove(int i);
    T remove() // assumes removal from the head -- notice this is NOT just a wrapper for remove(int i), but a completely different implementation
};

template<class T>
SLList<T>::SLList() { 
	_n = 0;
	_head = _tail = nullptr;
}

template<class T>
SLList<T>::~SLList() {
	Node *u = _head;
	while (u != nullptr) {
		Node *w = u;
		u = u->_next;
		delete w;
	}
}

template<class T>
void SLList<T>::add(int i, T x) {
} 