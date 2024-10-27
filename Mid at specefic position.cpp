#include <iostream>
using namespace std;

int main() {
    const int fixedSize = 7;  
    int A[fixedSize];  // Array can hold 8 elements, 1 extra space for insertion                 
    int size;
 int newElement;
  int index;
    // Input the size of the array
    cout << "Enter the size of the array (max 7): ";
    cin >> size;

    // Check if the size is valid
    if (size > fixedSize || size <= 0) {
        cout << "Invalid size." << endl;
        return 1;
    }

    // Input the elements of the array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    // Input the index at which the user wants to insert the new element
    cout << "At which index do you want to insert the element? (0 to " << size - 1 << "): ";
    cin >> index;

    // Check if the index is valid (from 0 to size - 1 for shifting)
    if (index < 0 || index >= size) {
        cout << "Invalid index. You can only insert at a valid position between 0 and " << size - 1 << "." << endl;
        return 1;
    }

    // Input the new element to be inserted
   
    cout << "Enter the element you want to insert: ";
    cin >> newElement;

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= index; i--) {
        A[i + 1] = A[i];
    }

    // Insert the new element at the specified index
    A[index] = newElement;

    // Output the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size + 1; i++) {  
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
