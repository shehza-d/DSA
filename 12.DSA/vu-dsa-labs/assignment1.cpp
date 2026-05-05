// Browser History Management System

#include <iostream>
#include <string>

using namespace std;

class WebPageNode {
public:
  string url;
  WebPageNode *next;

  WebPageNode(string pageUrl) {
    url = pageUrl;
    next = NULL;
  }
};

class HistoryStack {
private:
  WebPageNode *top;

public:
  HistoryStack() { top = NULL; }

  void push(string url) {
    WebPageNode *newNode = new WebPageNode(url);
    newNode->next = top;
    top = newNode;

    cout << "[Visiting]: " << url << endl;
  }
  void pop() {
    cout << "\n[Back Button]: Removing " << top->url << " from history.\n"
         << endl;

    WebPageNode *temp = top;
    top = top->next;
    delete temp;
  }
  void displayAll() {
    if (top == NULL) {
      cout << "History is empty." << endl;
      return;
    }

    int count = 0;

    cout << "--- Current Browser History ---" << endl;
    for (WebPageNode *current = top; current != NULL; current = current->next) {
      cout << ++count << ". " << current->url << endl;
    }
  }
};

int main() {
  cout << "Student Name: Shehzad Iqbal" << endl;
  cout << "VU ID: BC240200311" << endl;
  cout << "---------------------------" << endl;

  HistoryStack history;

  history.push("www.vu.edu.pk/BC240200311");
  history.push("www.google.com");
  history.push("www.github.com");

  history.pop();

  history.displayAll();

  cout << "---------------------------" << endl;
  return 0;
}