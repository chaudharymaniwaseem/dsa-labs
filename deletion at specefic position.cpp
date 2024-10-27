#include<iostream>
using namespace std;

int main() 
{
    int arr[10], n, index;

    cout << "Enter size of array (up to 10): ";
    cin >> n;

    if (n > 10 || n<=0) {
        cout << "Size exceeds maximum allowed size of 10." << endl;
        return 1;
    }

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to delete (0 to " << n-1 << "): ";
    cin >> index;

    if (index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return 1;
    }

    for (int i = index; i < n ; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion at position " << index << ": " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

