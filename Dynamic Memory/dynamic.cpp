#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) { 
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head; 

public:
    LinkedList() {
        head = nullptr;
    }

    void insert_at_beginning(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        cout << data << " inserted at beginning.\n";
    }

    void search(int key) {
        Node* temp = head;
        int pos = 1;
        while (temp != nullptr) {
            if (temp->data == key) {
                cout << key << " found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << key << " not found in the list.\n";
    }

    void delete_node(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            delete temp;
            cout << key << " deleted from the list.\n";
            return;
        }

        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << key << " not found in the list.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << key << " deleted from the list.\n";
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        cout << "Linked list reversed successfully.\n";
    }

    void display() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int choice, data, key;

    do {
        cout << "\n--- Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Search Node\n";
        cout << "3. Delete Node\n";
        cout << "4. Reverse List\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter data to insert: ";
            cin >> data;
            list.insert_at_beginning(data);
            break;
        case 2:
            cout << "Enter key to search: ";
            cin >> key;
            list.search(key);
            break;
        case 3:
            cout << "Enter key to delete: ";
            cin >> key;
            list.delete_node(key);
            break;
        case 4:
            list.reverse();
            break;
        case 5:
            list.display();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

}
