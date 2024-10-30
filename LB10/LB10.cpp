#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoubleLinkedList{
    Node *head, *tail;
    int count = 0;

    public:
    DoubleLinkedList(){
        head = tail = nullptr ;
    }

    void insertAtStart(int val){
        Node *newNode = new Node(val);

        if(!head){
            head = tail = newNode; 
        }
        else{
           newNode->next = head;
           head->prev = newNode;
           head = newNode;
        }
        count++;
    }

    void insertAtEnd(int val){
        Node *newNode = new Node(val);

        if(!head){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    void insertAtMiddle(int val) {
        if (head == nullptr) {
            insertAtStart(val);
            return;
        }

        Node* newNode = new Node(val);
        int middle = count / 2;  

        Node* current = head;
        // Move to the middle node
        for (int i = 0; i < middle; i++) {
            current = current->next;
        }
         if (count % 2 == 0) {
            // Even-sized list, insert before the current middle node
            Node* prevNode = current->prev;
            newNode->next = current;
            newNode->prev = prevNode;
            if (prevNode != nullptr) {
                prevNode->next = newNode;
            } else {
                head = newNode; // Update head if necessary
            }
            current->prev = newNode;
        } else {
            // Odd-sized list, insert after the current middle node
            Node* nextNode = current->next;
            newNode->prev = current;
            newNode->next = nextNode;
            if (nextNode != nullptr) {
                nextNode->prev = newNode;
            } else {
                tail = newNode; // Update tail if necessary
            }
            current->next = newNode;
        }
        count++;
    }

    void printList(){
        if(!head){
            cout << "List is empty";
            return;
        }

        Node* current = head;
        while(current){
            cout << current->data << "  ";
            current = current->next;
        }
        cout << endl;
    }

    int getCount(){
        return count;
    }
};

int main(){
    DoubleLinkedList list;

    
    list.insertAtStart(20);
    list.insertAtStart(10);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtMiddle(30);

    list.printList();

    cout << list.getCount() ;

}


// Q.2

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->prev = nullptr;
//         this->next = nullptr;
//     }
// };

// class DoubleLinkedList{
//     Node *head, *tail;
//     int count = 0;

//     public:
//     DoubleLinkedList(){
//         head = tail = nullptr ;
//     }

//     void insertAtStart(int val){
//         Node *newNode = new Node(val);

//         if(!head){
//             head = tail = newNode; 
//         }
//         else{
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//         }
//         count++;
//     }

//     void insertAtEnd(int val){
//         Node *newNode = new Node(val);

//         if(!head){
//             head = tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//         count++;
//     }

//     void deleteByValue(int val){
//         if(!head){
//             cout << "List id empty" << endl;
//             return;
//         }

//         bool found = false;
//         Node *temp = head;
//         while(temp != nullptr && temp->data!=val){  
//             temp = temp->next;          
//         }

//         if(temp == nullptr){
//             cout << "Value not Found"<< endl;
//             return;
//         }

//         if(temp == head){
//             head = head->next;
//             if(head != nullptr){
//                 head->prev = nullptr;
//             }
//             else{
//                 tail = nullptr;
//             }
//         }
//         else if(temp == tail){
//             tail = tail->prev;
//             if(tail != nullptr){
//                 tail->next = nullptr;
//             }
//             else{
//                 head = nullptr;
//             }
//         }
//         else{
//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;
//         }

//         delete temp;
//     }

//     void printList(){
//         if(!head){
//             cout << "List is empty";
//             return;
//         }

//         Node* current = head;
//         while(current){
//             cout << current->data << "  ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main(){
//     DoubleLinkedList list;

    
//     list.insertAtStart(20);
//     list.insertAtStart(10);
//     list.insertAtEnd(40);
//     list.insertAtEnd(50);

//     list.printList();

//     list.deleteByValue(40);

//     list.printList();


// }

// Q 3

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->prev = nullptr;
//         this->next = nullptr;
//     }
// };

// class DoubleLinkedList{
//     Node *head, *tail;
//     int count = 0;

//     public:
//     DoubleLinkedList(){
//         head = tail = nullptr ;
//     }

//     void insertAtStart(int val){
//         Node *newNode = new Node(val);

//         if(!head){
//             head = tail = newNode; 
//         }
//         else{
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//         }
//         count++;
//     }

//     void insertAtEnd(int val){
//         Node *newNode = new Node(val);

//         if(!head){
//             head = tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//         count++;
//     }

//     int getCount(){
//         return count;
//     }
// };

// int main(){
//     DoubleLinkedList list;

    
//     list.insertAtStart(20);
//     list.insertAtStart(10);
//     list.insertAtEnd(40);
//     list.insertAtEnd(50);

//     cout << list.getCount() ;

// }

// Q 4

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->prev = nullptr;
//         this->next = nullptr;
//     }
// };

// class DoubleLinkedList{
//     Node *head, *tail;
//     int count = 0;

//     public:
//     DoubleLinkedList(){
//         head = tail = nullptr ;
//     }

//     void insertAtEnd(int val){
//         Node *newNode = new Node(val);

//         if(!head){
//             head = tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//         count++;
//     }
    
//     DoubleLinkedList mergeList(DoubleLinkedList &list1, DoubleLinkedList &list2){
//         DoubleLinkedList mergedList;

//         Node *current1 = list1.head;
//         Node *current2 = list2.head;

//         while(current1 != nullptr && current2 != nullptr){
//             if(current1->data <= current2->data){
//                 mergedList.insertAtEnd(current1->data);
//                 current1 = current1->next;
//             }
//             else{
//                 mergedList.insertAtEnd(current2->data);
//                 current2 = current2->next;
//             }
//         }
//         while (current1 != nullptr){
//             mergedList.insertAtEnd(current1->data);
//             current1 = current1->next;
//         }

//         while (current2 != nullptr){
//             mergedList.insertAtEnd(current2->data);
//             current2 = current2->next;
//         }

//         return mergedList;
        

//     }


//     void printList(){
//         if(!head){
//             cout << "List is empty";
//             return;
//         }

//         Node* current = head;
//         while(current){
//             cout << current->data << "  ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main(){
//     DoubleLinkedList list1;
//     DoubleLinkedList list2;

//     list1.insertAtEnd(10);
//     list1.insertAtEnd(45);

//     list2.insertAtEnd(40);
//     list2.insertAtEnd(50);

//     list1.printList();
//     list2.printList();

//     DoubleLinkedList mergedList = mergedList.mergeList(list1, list2);

//     mergedList.printList();



// }


// Q 5

// #include <iostream>
// #include <string>

// using namespace std;

// struct Node {
//     string name;
//     int semester;
//     int sap_id;
//     Node* prev;
//     Node* next;

//     Node(string name, int semester, int sap_id) {
//         this->name = name;
//         this->semester = semester;
//         this->sap_id = sap_id;
//         this->prev = nullptr;
//         this->next = nullptr;
//     }
// };

// class DoubleLinkedList {
//     Node* head, *tail;
//     int count = 0;

// public:
//     DoubleLinkedList() {
//         head = tail = nullptr;
//     }

//     void insertAtStart(string name, int semester, int sap_id){
//         Node *newNode = new Node(name, semester, sap_id);

//         if(!head){
//             head = tail = newNode; 
//         }
//         else{
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//         }
//         count++;
//     }

//     void insertAtEnd(string name, int semester, int sap_id) {
//         Node* newNode = new Node(name, semester, sap_id);

//         if (!head) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//         count++;
//     }

//     void deleteFromStart() {
//         if (!head) {
//             cout << "List is empty\n";
//             return;
//         }

//         Node* temp = head;
//         head = head->next;
//         if (head != nullptr) {
//             head->prev = nullptr;
//         }
//         delete temp;
//         count--;
//     }

//     void deleteFromEnd() {
//         if (!head) {
//             cout << "List is empty\n";
//             return;
//         }

//         Node* temp = tail;
//         tail = tail->prev;
//         if (tail != nullptr) {
//             tail->next = nullptr;
//         }
//         delete temp;
//         count--;
//     }

//     void insertAt(int position, string name, int semester, int sap_id) {
//         if (position < 1 || position > count + 1) {
//             cout << "Invalid position\n";
//             return;
//         }

//         if (position == 1) {
//             insertAtStart(name, semester, sap_id);
//             return;
//         }

//         if (position == count + 1) {
//             insertAtEnd(name, semester, sap_id);
//             return;
//         }

//         Node* newNode = new Node(name, semester, sap_id);
//         Node* current = head;
//         for (int i = 1; i < position - 1; i++) {
//             current = current->next;
//         }

//         newNode->prev = current;
//         newNode->next = current->next;
//         current->next->prev = newNode;
//         current->next = newNode;
//         count++;
//     }

//     void display() {
//         if (!head) {
//             cout << "List is empty\n";
//             return;
//         }

//         cout << "Name\tSemester\tSAP ID\n";
//         Node* current = head;
//         while (current != nullptr) {
//             cout << current->name << "\t" << current->semester << "\t" << current->sap_id << endl;
//             current = current->next;
//         }
//     }
// };

// int main() {
//     DoubleLinkedList list;

//     for (int i = 0; i < 7; i++) {
//         string name;
//         int semester, sap_id;
//         cout << "Enter name, semester, and SAP ID: ";
//         cin.ignore();
//         getline(cin, name);
//         cin >> semester ;
//         cin >> sap_id;
//         list.insertAtEnd(name, semester, sap_id);
//     }

//     int choice;
//     do {
//         cout << "\n1. Insert at any location\n";
//         cout << "2. Delete from start\n";
//         cout << "3. Delete from end\n";
//         cout << "4. Display records\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 int position;
//                 string name;
//                 int semester, sap_id;
//                 cout << "Enter position, name, semester, and SAP ID: ";
//                 cin >> position >> name >> semester >> sap_id;
//                 list.insertAt(position, name, semester, sap_id);
//                 break;
//             }
//             case 2:
//                 list.deleteFromStart();
//                 break;
//             case 3:
//                 list.deleteFromEnd();
//                 break;
//             case 4:
//                 list.display();
//                 break;
//             case 5:
//                 break;
//             default:
//                 cout << "Invalid choice\n";
//         }
//     } while (choice != 5);

//     return 0;
// }