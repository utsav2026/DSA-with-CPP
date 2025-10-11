#include <iostream>
using namespace std;

class StackBase {
public:
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};

class Stack : public StackBase {
private:
    int stack[5];    
    int topIndex;     
    int size;         

public:
    Stack() {        
        topIndex = -1;
        size = 5;
    }

    void push(int value) override {
        if (topIndex == size - 1)
            cout << "Stack is full! Cannot push " << value << endl;
        else {
            topIndex++;
            stack[topIndex] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    void pop() override {
        if (topIndex == -1)
            cout << "Stack is empty! Cannot pop." << endl;
        else {
            cout << stack[topIndex] << " popped from stack." << endl;
            topIndex--;
        }
    }

    void top() override {
        if (topIndex == -1)
            cout << "Stack is empty!" << endl;
        else
            cout << "Top element: " << stack[topIndex] << endl;
    }

    void isEmpty() override {
        if (topIndex == -1)
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
    }

    void isFull() override {
        if (topIndex == size - 1)
            cout << "Stack is full." << endl;
        else
            cout << "Stack is not full." << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Display Top\n4. Check if Empty\n5. Check if Full\n6. Exit\n";
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
            s.isEmpty();
            break;
        case 5:
            s.isFull();
            break;
        case 6:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

}
