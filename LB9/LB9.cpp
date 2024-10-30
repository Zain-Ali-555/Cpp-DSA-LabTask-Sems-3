#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    // Constructor to initialize the node with data
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Link {
private:
    Node* head;
    Node* tail;

public:
    // Constructor to initialize head and tail as NULL
    Link() {
        head = NULL;
        tail = NULL;
    }

    // Method to insert a new node
    void inserts(int data) {
        Node* newNode = new Node(data);  // Dynamically create a new node
        
        if (!head) {
            // If the list is empty, both head and tail will point to the new node
            head = newNode;
            tail = newNode;
        } else {
            // Otherwise, insert the node at the end and update pointers
            tail->next = newNode;   // Set the next of the current tail to the new node
            newNode->prev = tail;   // Set the previous of the new node to the current tail
            tail = newNode;         // Update the tail to be the new node
        }
    }

    // Method to display the list from the beginning
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Link list;
    
    list.inserts(10);
    list.inserts(20);
    list.inserts(30);

    // Display the linked list
    list.display();  // Output: 10 20 30

    return 0;
}
