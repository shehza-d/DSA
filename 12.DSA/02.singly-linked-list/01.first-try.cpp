#include <iostream>

using namespace std;

// class Faculty
// {
// private:
// 	string name;
// 	int age;
// 	string post;

// public:
// 	// Setter functions
// 	void setName(string n)
// 	{
// 		this->name = n;
// 	}
// 	void setAge(int a)
// 	{
// 		this->age = a;
// 	}

// 	void setPost(string post)
// 	{
// 		this->post = post;
// 	}

// 	// Getter functions
// 	string getName()
// 	{
// 		return name;
// 	}

// 	int getAge()
// 	{
// 		return age;
// 	}

// 	string getPost()
// 	{
// 		return post;
// 		// idher post kyu why not this->post
// 	}
// };

// class List
// {
// private:
// 	int size;
// 	Node *headNode;
// 	Node *currentNode;

// 	List(int size)
// 	{
// 		headNode = new Node();
// 		headNode->setNext(NULL)
// 		this->size = size;
// 	}

// public:
// 	void addNode()
// 	{
// 	}

// 	Faculty get()
// 	{

// 		return currentNode->ojbect();
// 	}
// 	bool next(){
// 		if (currentNode->getNext() != NULL){
// 			return true;
// 		}else{return false;}
// 	}
// }

class Node {
private:
  string name;

public:
  Node *nextNode;

  // constructor
  Node() { nextNode = NULL; }

  void setName(string n) { this->name = n; }

  string getName() { return this->name; }
};

int main() {
  Node *head = NULL;

  Node item1;
  item1.setName("shehzad");

  Node item2;
  item2.setName("rayyan");

  Node item3;
  item3.setName("Ayesha");

  head = &item1;
  item1.nextNode = &item2;
  item2.nextNode = &item3;
  item3.nextNode = NULL;

  // inserting new node at start;

  Node item4;
  item4.setName("Hammad");

  item4.nextNode = head;
  head = &item4;

  // Insert at end

  Node *last = NULL;

  for (Node *i = head; i != NULL; i = i->nextNode) {
    //	cout <<	i->getName() << endl;
    if (i->nextNode == NULL)
      last = i;
    //	cout <<	(&i).getName() << endl;
  }
  cout << "last: " << last->getName() << endl;

  Node item5;
  item5.setName("anas");

  last->nextNode = &item5;
  item5.nextNode = NULL;

  // printing all nodes
  for (Node *i = head; i != NULL; i = i->nextNode) {
    cout << i->getName() << endl;
  }
  return 0;
}

// l = LinkedList()
// l.push(1);
// l.push(2);
// l.push(3);
