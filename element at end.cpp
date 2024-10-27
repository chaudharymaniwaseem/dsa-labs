#include<iostream>
using namespace std;
int main(){
	int arr[8];
	int n;
	int x;
	 int i;
	 cout<<"enter size of an array:"<<endl;
	 cin>>n;
	 cout<<"enter elements in an array:"<<endl;
	 for(i=0; i<n; i++){
	 	cin>>arr[i];
	 }
cout<<"enter element you to insert in the end"<<endl;
cin>>x;
arr[i]=x;
n++;
cout<<"array after insertion:"<<endl;
for(i=0; i<n; i++){
cout<<arr[i]<<endl;
}
return 0;
}