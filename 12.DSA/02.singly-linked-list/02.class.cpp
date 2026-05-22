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

public:
  LinkedList() { head = NULL; }

  void insertAtStart(string value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
    } else {
      newNode->nextNode = head;
      head = newNode;
    }
  }

  void insertAtEnd(string value) {
    Node *newNode = new Node(value);

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
  }

  void print() {
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

  list.deleteFirst();
  list.deleteLast();

  list.print();
  return 0;
}
// size
// next / back
// get(index)
// search()
// remove by value
