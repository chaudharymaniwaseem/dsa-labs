#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertatstart(int n) {
    Node* newnode = new Node;
    newnode->data = n;
    if (head == NULL) {
        head = newnode;
        newnode->next = head; 
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void deleteatmid(int pos) {
    if (head == NULL) {
        cout << "The List is empty" << endl;
        return;
    }

    Node* temp = head;

    if (pos == 1) {
        if (head->next == head) {
            head = NULL;
        } else {
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }
            head = head->next;
            last->next = head;
        }
        delete temp;
        return;
    }

    Node* prev = NULL;
    for (int i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp->next == head && pos != 1) {
        cout << "Invalid position" << endl;
        return;
    }

    prev->next = temp->next; 
    delete temp;  
}

void display() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout<< endl;
}

int main() {
    cout << "Link list before deleting a node at mid" << endl;
    insertatstart(1);
    insertatstart(2);
    insertatstart(10);
    insertatstart(4);
    insertatstart(5);
    display();
    cout << endl;

    cout << "Link list after deleting a node at position" << endl;
    deleteatmid(4);   
    display();

    return 0;
}

