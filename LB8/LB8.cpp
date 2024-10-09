#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

class linkedlist
{
    Node *head;

public:
    void insertNode(int);
    void printList(int);
    void deleteNode(int);

    linkedlist()
    {
        head = NULL;
    }
};

void linkedlist::insertNode(int data)
{
    Node *newNode = new Node();
    if (head == NULL)
    {
        head = newNode;
        return;
    }
}

int main()
{

    return 0;
}