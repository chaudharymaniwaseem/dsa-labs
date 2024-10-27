#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *pre;
};
Node *head=NULL;
void insert(int n){
Node *newnode=new Node;
newnode->data=n;
newnode->next=head;
newnode->pre=NULL;
if(head!=NULL){
head->pre=newnode;
}
newnode->next=head;
head=newnode;
}
void deletionatend(){
	
	if(head==NULL)
	{
		cout<<"list empty";
	}
	if(head->next==NULL)
	{
	delete head;
	head=NULL;	
	}

Node *temp=head;
while(temp->next!=NULL)
{
	temp=temp->next;
}
temp->pre->next = NULL; 
delete temp;
}

void display(){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	cout<<"data in link list are:"<<endl;
	insert(5);
	insert(4);
	insert(2);
			insert(1);
		display();
			deletionatend();
				cout<<"data in link list after deletion at end are:"<<endl;
				display();
				return 0;
}
