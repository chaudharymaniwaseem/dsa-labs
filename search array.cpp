#include<iostream>
using namespace std;
int main() 
{
	
		int arr[10],x,n,i;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter elements of array:";
	
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}	
	cout<<"enter element u want to search  in array:";
	cin>>x;
	for(i=0; i<n; i++)
	{
		if (arr[i]==x)
		{
			cout<<"element found in array:"<<i;
			break;
		}
	}
	
	if(arr[i] !=x)
	{
			cout<<"element not found in array"<<endl;
		
	}
	return 0;
}
