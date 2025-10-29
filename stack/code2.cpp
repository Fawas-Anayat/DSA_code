#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Global pointer to the top of the stack
Node* top = nullptr;

// Function to check if stack is empty
bool isEmpty() {
    return (top == nullptr);
}

// Function to push (insert) element onto stack
void push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;  // new node points to previous top
    top = newNode;        // update top
    cout << value << " pushed onto the stack.\n";
}

// Function to pop (remove) element from stack
void pop() {
    if (isEmpty()) {
        cout << "Stack is empty. Cannot pop.\n";
        return;
    }

    Node* temp = top;
    cout << temp->data << " popped from the stack.\n";
    top = top->next;   // move top to next node
    delete temp;       // free memory
}

// Function to peek (view top element)
int peek() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return -1;
    }
    return top->data;
}

// Function to display all stack elements
void display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements (top to bottom): ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test the stack
int main() {
    push(10);
    push(20);
    push(30);

    display();

    cout << "Top element is: " << peek() << endl;

    pop();
    display();

    pop();
    pop();
    pop();  // extra pop to test empty condition

    return 0;
}
