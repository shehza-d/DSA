// CS301P – Data Structures (Practical) | Assignment No. 1
// Number Processing System in C++ using the Stack data structure implemented
// via a Singly Linked List.

#include <iostream>

using namespace std;

class Node {
public:
  int value;
  Node *next;

  Node() { next = NULL; }
};
class NumberStack {
private:
  Node *top;

public:
  NumberStack() { top = NULL; }
  void push(int newValue) {
    Node *newNode = new Node();
    newNode->value = newValue;

    newNode->next = top; // linking new node to my chain
    top = newNode;
  }
  void pop() {
    if (top == nullptr) {
      cout << "Stack is empty. Cannot pop." << endl;
      return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
  }
  void display() {
    if (top == NULL) {
      cout << "Stack is empty" << endl;
    }

    cout << "Numbers pushed into stack: ";
    for (Node *current = top; current != NULL; current = current->next) {
      cout << current->value << ", ";
    }
    cout << endl;
  }
  void countOdd() {
    int count = 0;

    for (Node *current = top; current != NULL; current = current->next) {

      if (current->value % 2 != 0) {
        count++;
      }
    }

    cout << "Total odd numbers: " << count << endl;
  }
  void sumEven() {
    int sum = 0;

    for (Node *current = top; current != NULL; current = current->next) {
      if (current->value % 2 == 0) {
        sum += current->value;
      }
    }
    cout << "Sum of even numbers: " << sum << endl;
  }
};

int main() {

  cout << "*************************************" << endl;
  cout << "VU ID: BC240200311" << endl;
  cout << "*************************************" << endl;

  NumberStack my_number_list;

  my_number_list.push(9);
  my_number_list.push(15);
  my_number_list.push(21);
  my_number_list.push(24);
  my_number_list.push(26);
  my_number_list.push(29);
  my_number_list.push(34);

  my_number_list.display();

  my_number_list.countOdd();
  my_number_list.sumEven();

  my_number_list.pop();
  my_number_list.pop();
  my_number_list.pop();

  cout << "*************************************" << endl;

  my_number_list.display();

  cout << "*************************************" << endl;

  return 0;
}