#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *pre;
};
Node *head=NULL;
void insertatstart(int n){
Node *newnode=new Node;
newnode->data=n;
newnode->next=head;
newnode->pre=NULL;
if(head!=NULL){
	head->pre=newnode;
}

head=newnode;
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
	insertatstart(5);
		insertatstart(4);
			insertatstart(3);
				insertatstart(2);
				display();
			
				return 0;
}
