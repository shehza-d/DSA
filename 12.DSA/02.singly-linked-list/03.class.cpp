#include <cstddef>
#include <iostream>

using namespace std;

class Node {
public:
  string name;
  Node *nextNode;

  Node(string n) {
    name = n;
    nextNode = NULL;
  }
};

class LinkedList {
private:
  Node *head;
  int size = 0;

public:
  LinkedList() {
    size = 0;
    head = NULL;
  }

  void insertAtStart(string value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
    } else {
      newNode->nextNode = head;
      head = newNode;
    }
    size++;
  }

  void insertAtEnd(string value) {
    Node *newNode = new Node(value);
    size++;

    if (head == NULL) {
      head = newNode;
      return;
    }

    Node *last = head;

    while (last->nextNode != NULL) {
      last = last->nextNode;
    }

    last->nextNode = newNode;
  }

  void deleteFirst() {
    if (head == NULL) {
      cout << "List is already empty" << endl;
      return;
    }
    cout << "Deleting: " << head->name << endl;

    Node *temp = head;
    head = head->nextNode;
    delete temp;

    size--;
  }

  void deleteLast() {
    if (head == NULL) {
      cout << "List is already empty" << endl;
      return;
    }
    // case if only 1 node in list
    if (head->nextNode == NULL) {
      cout << "Deleting: " << head->name << endl;
      delete head;
      head = NULL;

      size--;
      return;
    }

    // if more then i node
    Node *i = head;
    while (i->nextNode->nextNode != NULL) {
      i = i->nextNode;
    }
    cout << "Deleting: " << i->nextNode->name << endl;

    delete i->nextNode;
    i->nextNode = NULL;
    size--;
  }

  int getSize() { return size; }

  int search(string searchTerm) {
    // 👉 Better design: either print OR return, not both (But for learning,
    // it's okay)

    int i = 0;

    for (Node *current = head; current != NULL; current = current->nextNode) {
      if (current->name == searchTerm) {
        cout << "Found at index: " << i << endl;
        return i;
      }
      i++;
    }
    cout << "Not found" << endl;
    return -1;
  }

  void print() {
    cout << "Printing " << this->size << " Nodes" << endl;
    cout << "*******************" << endl;
    for (Node *i = head; i != NULL; i = i->nextNode) {
      cout << "Value: " << i->name << endl;
    }
    cout << "*******************" << endl;
  }
};

int main() {
  LinkedList list;

  list.insertAtStart("shehzad");
  list.insertAtStart("rayyan");
  list.insertAtEnd("ayesha");
  list.insertAtEnd("hammad");

  list.print();
  list.search("ayesha");
  // list.deleteFirst();
  // list.deleteLast();

  // list.print();
  return 0;
}

// next back
// deleteFirst()
// deleteLast()
// get(index)
// search()
// remove by value
