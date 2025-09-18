    #include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SortedLinkedList {
    Node* head;

public:
    SortedLinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        // Insert at head or empty list
        if (head == nullptr || value < head->data) {
            newNode->next = head;
            head = newNode;
            return;
        }

       //Insert in middle or end
        Node* current = head;
        while (current->next != nullptr && current->next->data < value) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void display() {
        Node* temp = head;
        cout << "Sorted List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SortedLinkedList list;
    list.insert(30);
    list.insert(10);
    list.insert(10);
    list.insert(40);

    list.display(); // Output: 10 -> 20 -> 30 -> 40 -> NULL

    return 0;
}
