#ifndef SLLIST_H_
#define SLLIST_H_

template<class T>
class SLList {
    struct Node {
        T _x;
        Node *_next;
        Node(int x) {
            _x = x;
            _next = nullptr;
        }
    };

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
    void set(int i, T x);

    // add 
    void add(int i, T x);
    void add(T x); // assumes addition to the tail -- notice this is NOT just a wrapper for add(int i, T x) but a completely different implementation

    // remove
    T remove(int i);
    T remove(); // assumes removal from the head -- notice this is NOT just a wrapper for remove(int i), but a completely different implementation
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
T SLList<T>::get(int i) {
    Node *u = new Node(NULL);
    u = _head;
    for (int k = 0; k < i; k++) {
        u = _head->_next;
    }
    int val = u->_x;
    return val;
}

template<class T>
void SLList<T>::set(int i, T x) {
    Node *u = new Node(NULL);
    u = _head;
    for (int k = 0; k < i; k++) {
        u = _head->_next;
    }
    u->_x = x;
}

template<class T>
void SLList<T>::add(int i, T x) {
    Node *u = new Node(x);      // new node to be added
    Node* current = _head;      // start at the head 
    int position = 0;           // current position

    // special case where the list is empty
	if (_n == 0) {           // if there is no list, just create the head & tail
		_head = u;
	    _tail = u;  
        _n++;
        return;
    }
    // non-empty list 
    if (i == 0) {    // special case for head pointer
        u->_next = _head;    // points to the old head
        _head = u;          // becomes the new head
    } else {     
        while (current->_next != nullptr) {     // keep going as long as we haven't fallen off the list
            if (position == i) {
                u->_next = current->_next;      // point to the old next thing
                current->_next = u;             // become the new next thing
                break;
            } else {
                current = current->_next;         // move along to the next item
                position++;                     // increase position
            }
        }
    }

    _n++;  // size go up
} 

template<class T>
T SLList<T>::remove(int i) {
    // special case where the list is empty
	if (_n == 0) {          
		return nullptr;
    }

    // non-empty list 
    Node* current = _head;        // start at the head before we do anything
    int position = 0;             // current position
    
    if (i == 0) {            // special case for removing head pointer 
        _head = _head->_next;     // new head is whatever was next
        T x = current->_x;        // save the value that was there before we destroy it
        delete current;           // get rid of the old head
        return x;        
    } else {     
        while (current->_next != nullptr) {                 // keep going as long as we haven't fallen off the list
            if (position == i-1) {                          // stop BEFORE we get to the place we need to delete
                Node* nextnode = current->_next->_next;         // current->next is the node we need to delete, so grab the thing right after that
                delete current->_next;                          // delete the node at current->next
                current->next = nextnode;                       // set the new next thing 
                break;
            } else {
                current = current->_next;         // move along to the next item
                position++;                     // increase position
            }
        }
    }
}

template<class T>
void SLList<T>::add(T x) {
	Node *u = new Node(x);     
	if (_n == 0) {           // if there is no list, just create the head
		_head = u;
	} else {
		_tail->_next = u;    // if there is a list, add to the tail 
	}
	_tail = u;  // whether or not there is an existing list, the new tail is the thing we just added
	_n++;
}

template <class T>
T SLList<T>::remove() {
    
    // special case where the list is empty
	if (_n == 0)	{
        return nullptr;
    } 

    //non-empty list
    Node *u = _head;          // grab the old head before we do anything
	T x = _head->_x;          // get the value that the head currently points to 
	_head = _head->_next;    // set the new head to the old thing

    _n--;                     // we got rid of something, so we have to decrease n
	if (_n == 0) {            // last cleanup ; if we got rid of everything it's time to get rid of the tail pointer too 
        _tail = nullptr;
    } 

    delete u;                // delete the old head manually (note we do NOT want to delete the head itself)
	return x;
}


#endif /* SLLIST_H_ */
