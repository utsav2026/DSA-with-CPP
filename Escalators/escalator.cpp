#include <iostream>
using namespace std;

class StackBase {
public:
    virtual void push(int value) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public StackBase {
private:
    int top;
    int size;
    int *arr;

public:
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) override {
        if (isFull()) {
            cout << "Stack is full! Cannot push element.\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    void pop() override {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop element.\n";
        } else {
            cout << arr[top--] << " popped from stack.\n";
        }
    }

    void topElement() override {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    bool isEmpty() override {
        return top == -1;
    }

    bool isFull() override {
        return top == size - 1;
    }
};

int main() {
    int stackSize;
    cout << "Enter stack size: ";
    cin >> stackSize;

    Stack s(stackSize);
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
                s.topElement();
                break;
            case 4:
                cout << (s.isEmpty() ? "Stack is empty.\n" : "Stack is not empty.\n");
                break;
            case 5:
                cout << (s.isFull() ? "Stack is full.\n" : "Stack is not full.\n");
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

}
