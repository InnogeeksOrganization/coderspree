#include <iostream>
using namespace std;
class node {
public:
  int val;
  node* next;


};
class LinkedList {
public:
  node* head = nullptr;
  node* tail = nullptr;
  int size_ = 0;

  void insert_at_tail(int val) {
    if (head == NULL) {
      node* newnode = new node;
      newnode->val = val;
      newnode->next = NULL;
      head = newnode;

    }
    else {
      node* newnode = new node;
      newnode->val = val;
      newnode->next = NULL;
      node* temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newnode;
    }

  }

  void print () {
    node* temp = head;
    if (head == NULL) {
      cout << "0" << endl;
      return;
    }
    while (temp != NULL) {
      cout << temp->val << " ";
      temp = temp->next;
    }
    cout << endl;
  }
  void deletion_at_head() {
    if (head == NULL) return;
    node* temp = head;
    head = head->next;
    delete temp;

  }

  int size() {
    int cnt = 0;
    node* temp = head;
    while (temp != NULL) {
      temp = temp->next;
      cnt++;
    }
    return cnt;
  }

  void getFirst() {
    cout << head->val << endl;
  }

  void getLast() {
    node* temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    cout << temp->val << endl;
  }

  node* getAt(int p) {
    int cnt = 0;
    node* temp = head;
    while (cnt < p) {
      cnt++;
      temp = temp->next;
    }
    cout << temp->val << endl;
    return temp;
  }

  void addFirst(int val) {
    node* newnode = new node;
    newnode->val = val;
    newnode->next = NULL;
    if (head == NULL) {
      head = newnode;
    }
    else {
      newnode ->next = head;
      head = newnode;
    }

  }

  void addAt(int pos, int data) {
    if (pos == 0) {
      addFirst(data);
      return;
    }
    node* newnode = new node;
    newnode->val = data;
    int cnt = 0;
    node* temp = head;
    while (cnt < pos - 1) {
      cnt++;
      temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
  }

  void removeLast() {
      if (head==NULL || head->next==NULL)
        head = NULL;
      else{
          node *temp = head;
          while (temp->next->next != NULL)
            temp = temp->next;
          temp->next = NULL;
      }
  }

};
int main() {
  LinkedList l1;
  string s;
  cin >> s;
  while (s != "quit") {
    if (s == "addLast") {
      int data;
      cin >> data;
      l1.insert_at_tail(data);
    }
    else if (s == "addFirst") {
      int data;
      cin >> data;
      l1.addFirst(data);
    }
    else if (s == "getFirst") {
      if (l1.head != NULL) {
        l1.getFirst();
      } else {
        cout << "List is empty" << endl;
      }
    }
    else if (s == "getLast") {
      if (l1.head != NULL) {
        l1.getLast();
      }
      else
      {
        cout << "List is empty";
      }

    }
    else if (s == "removeFirst") {
      if (l1.head != NULL) {
        l1.deletion_at_head();
      }
      else {
        cout << "List is empty" << endl;
      }
    }
    else if (s == "removeLast") {
      if (l1.head != NULL) {
        l1.removeLast();
      }
      else {
        cout << "List is empty" << endl;
      }
    }
    else if (s == "addAt") {
      int val, i;
      cin >> i >> val;
      if (i > l1.size()) {
        cout << "Invalid arguments" << endl;
      }
      else {
        l1.addAt(i, val);
      }
    }
    else if (s == "getAt") {
      if (l1.head != NULL) {
        int i;
        cin >> i;
        if (i >= l1.size()) {
          cout << "Invalid arguments" << endl;
        }
        else {
          l1.getAt(i);
        }
      }
      else
      {
        cout << "List is empty";
      }
    }
    else if (s == "display") {
      if (l1.head != NULL) {
        l1.print();
      }
      else {
        cout << endl;
      }
    }
    else if (s == "size") {
      if (l1.head != NULL) {
        cout << l1.size() << endl;
      }
    }
    cin >> s;
  }
}