#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
		Node *prev;
};
Node *head=NULL;

void insertAtEnd(int n)
{
		Node *newnode=new Node;
		newnode->data=n;
	    newnode->next=NULL;
		newnode->prev=NULL;
	
	if(head==NULL)
	{
		head=newnode;
		return;
	}

	Node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		newnode->prev=temp;
	temp->next=newnode;

}

void display(){
	cout<<"Data elements in a single link list are: ";
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	insertAtEnd(71);
	insertAtEnd(7);
	insertAtEnd(3);
	insertAtEnd(1);
	
	display();
	
	return 0;
}
	
