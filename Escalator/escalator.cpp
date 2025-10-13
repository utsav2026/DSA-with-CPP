#include <iostream>
using namespace std;

class StackBase {
public:
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public StackBase {
private:
    int arr[5]; 
    int topIndex;    
    int size;        

public:
    Stack() {
        size = 5;
        topIndex = -1;
    }

    void push(int value) override {
        if (isFull()) {
            cout << "Stack is full! Cannot push more elements.\n";
        } else {
            arr[++topIndex] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    void pop() override {
        if (isEmpty()) {
            cout << "Stack is empty! Nothing to pop.\n";
        } else {
            cout << arr[topIndex--] << " popped from stack.\n";
        }
    }

    void top() override {
        if (isEmpty()) {
            cout << "Stack is empty! No top element.\n";
        } else {
            cout << "Top element: " << arr[topIndex] << endl;
        }
    }

    bool isEmpty() override {
        return topIndex == -1;
    }
    bool isFull() override {
        return topIndex == size - 1;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n----- Stack Menu -----\n";
        cout << "1. Push an element\n";
        cout << "2. Pop an element\n";
        cout << "3. Display top element\n";
        cout << "4. Check if stack is empty\n";
        cout << "5. Check if stack is full\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top();
            break;
        case 4:
            cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
            break;
        case 5:
            cout << (s.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
            break;
        case 6:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);
}
