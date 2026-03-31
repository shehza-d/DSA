#include <iostream>

using namespace std;       // allows use of cout, cin, etc. without std::

// Node class represents a single node element in the list

class Node {
	public: 
		int get() { return object ;}

		void set (int object) {
			this->object = object;
		}

		Node *getNext() {
			return nextNode
		}

		void setNode (Node *nextNode) {
			this->nextNode = nextNode;
		}
	private:
		int object;
		Node *nextNode;
}
