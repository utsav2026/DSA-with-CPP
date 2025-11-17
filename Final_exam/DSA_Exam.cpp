#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// CREATE Insert at end
void createNode(int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// READ Display list
void displayList() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// UPDATE Modify a node value
void updateNode(int oldVal, int newVal) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == oldVal) {
            temp->data = newVal;
            cout << "Value updated.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Value not found.\n";
}

// DELETE Remove a node
void deleteNode(int value) {
    if (head == NULL) return;

    // delete head
    if (head->data == value) {
        Node* del = head;
        head = head->next;
        delete del;
        cout << "Node deleted.\n";
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;

    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        cout << "Node deleted.\n";
    } else {
        cout << "Value not found.\n";
    }
}

// MAIN MENU
int main() {
    int choice, value, oldVal, newVal;

    while (true) {
        cout << "\n LINKED LIST CRUD MENU \n";
        cout << "1. Create (Insert Node)\n";
        cout << "2. Read (Display List)\n";
        cout << "3. Update (Modify Value)\n";
        cout << "4. Delete (Remove Node)\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                createNode(value);
                break;

            case 2:
                displayList();
                break;

            case 3:
                cout << "Enter old value: ";
                cin >> oldVal;
                cout << "Enter new value: ";
                cin >> newVal;
                updateNode(oldVal, newVal);
                break;

            case 4:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;

            case 5:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}

