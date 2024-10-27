#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        Node *last = head->prev; 
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
        head = newNode; 
    }
}
void insertAtPosition(int pos, int n) {
    Node *newNode = new Node;
    newNode->data = n;

    if (pos == 1) {
        insert(n);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++) {
        temp = temp->next;
    }

    

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
   temp->next = newNode;
}


void print() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
  
    insert(3);
     insert(5);
      insert(9);
    insert(8);
    insertAtPosition(2,7);
      print();

return 0;

}


