#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insert(int n) {
   Node *newnode=new Node;
newnode->data=n;
newnode->prev=NULL;
newnode->next=head;
if(head!=NULL){
	head->prev=newnode;
}

head=newnode;
}
void deleteAtBegining() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    
   Node *temp = head;
    head = temp->next;

    if (head != NULL) {
        head->prev = NULL; 
    }

    delete temp;
}
   
void display() {
    cout << "Data elements in the linked list are: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
}

int main() {
    insert(1);
    insert(3);
    insert(7);
    insert(71);
    
    cout << "Before deletion:" << endl;
    display();

    deleteAtBegining();

    cout << "After deleting the first node:" << endl;
    display();

    return 0;
}

