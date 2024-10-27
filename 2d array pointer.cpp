#include<iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"enter rows:";
	cin>>rows;
	cout<<"enter cols:";
	cin>>cols;
	int** a=new int*[rows];
	for(int i=0; i<rows ; i++){
		a[i]=new int[cols];
	}
	for(int i=0 ; i<rows ; i++)
	{
	for(int j=0 ; j<cols ; j++)
	{
		cin>>a[i][j];
		}	
		
	}
	cout<<endl;
	cout<<"you have entered:\n";
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			cout<<a[i][j]<<"  ";
			
		}
		cout<<endl;
	}
	for(int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			delete[]a[i];
			
		}
		delete[]a;
	}
	
	}
