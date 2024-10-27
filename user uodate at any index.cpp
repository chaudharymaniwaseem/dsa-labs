#include<iostream>
using namespace std;

int main() 
{
    int arr[10], n, index, newValue;

   
    cout << "Enter the size of the array (up to 10): ";
    cin >> n;

    
    if (n > 10 || n <= 0) {
        cout << "Invalid size! The size must be between 1 and 10." << endl;
        return 1;
    }

  
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


   
    cout << "Enter the index you want to update ";
    cin >> index;

   
    if (index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return 1;
    }

    cout << "Enter the new value: ";
    cin >> newValue;

    
    arr[index] = newValue;

    
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

