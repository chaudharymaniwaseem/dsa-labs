#include<iostream>
using namespace std;
int main() 
{
int arr[3]={1,2,3};
cout<<"original array:" ;

	for(int i=0; i<3; i++)
	{
		cout<<arr[i] <<" ";
	}
cout<<endl;

int index,newValue;
cout<<"enter the index u want to update:";
cin>>index;
if(index<0 || index >=3)	
{
	cout<<"invalid index"<<endl;
	return 1;
}

cout<<"enter the new value  ";
cin>>newValue;
arr[index]=newValue;
cout<<"updated array ";
for(int i =0; i<3; i++)
{
	cout<<arr[i]<<" ";
	
}
cout<<endl;
return 0;
}
