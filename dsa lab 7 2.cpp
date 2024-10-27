#include <iostream>
#include <string>
using namespace std;

class ListNode {
public:
    string groceryItem;
    ListNode* nextNode;

    ListNode(string newGroceryItem) {
        groceryItem = newGroceryItem;
        nextNode = NULL;  // Use NULL instead of nullptr
    }
};

class ShoppingList {
private:
    ListNode* headNode;

public:
    ShoppingList() { headNode = NULL; }  // Use NULL instead of nullptr

    ~ShoppingList() {
        ListNode* current = headNode;
        while (current != NULL) {  // Use NULL instead of nullptr
            ListNode* next = current->nextNode;
            delete current;
            current = next;
        }
    }

    void addGroceryItem(string newGroceryItem) {
        ListNode* newNode = new ListNode(newGroceryItem);
        newNode->nextNode = headNode;
        headNode = newNode;
        cout << newGroceryItem << " has been added to the shopping list.\n";
    }

    void removeGroceryItem(string itemToRemove) {
        ListNode *current = headNode, *previous = NULL;  // Use NULL instead of nullptr

        if (current != NULL && current->groceryItem == itemToRemove) {  // Use NULL instead of nullptr
            headNode = current->nextNode;
            delete current;
            cout << itemToRemove << " has been removed from the shopping list.\n";
            return;
        }

        while (current != NULL && current->groceryItem != itemToRemove) {  // Use NULL instead of nullptr
            previous = current;
            current = current->nextNode;
        }

        if (current == NULL) {  // Use NULL instead of nullptr
            cout << itemToRemove << " is not in the list.\n";
            return;
        }

        previous->nextNode = current->nextNode;
        delete current;
        cout << itemToRemove << " has been removed from the shopping list.\n";
    }

    void displayList() {
        if (headNode == NULL) {  // Use NULL instead of nullptr
            cout << "The shopping list is currently empty.\n";
            return;
        }
        ListNode* current = headNode;
        cout << "Items in the shopping list:\n";
        while (current != NULL) {  // Use NULL instead of nullptr
            cout << "- " << current->groceryItem << "\n";
            current = current->nextNode;
        }
    }
};

int main() {
    ShoppingList myList;

    myList.addGroceryItem("Milk");
    myList.addGroceryItem("Bread");
    myList.addGroceryItem("Eggs");

    myList.displayList();

    myList.removeGroceryItem("Bread");

    myList.displayList();

    myList.removeGroceryItem("Cheese");

    return 0;
}

