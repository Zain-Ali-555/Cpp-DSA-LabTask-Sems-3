
// Q.

#include <iostream>
#define MAX 1000
using namespace std;
class Stack
{
private:
    int top;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
    }
    bool push(int value)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow\n";
            return false;
        }
        else
        {
            arr[++top] = value;
            return true;
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        else
        {
            int value = arr[top--];
            return value;
        }
    }
    int peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};
void reverseArray(int arr[], int n)
{
    Stack mystack;
    for (int i = 0; i < n; i++)
    {
        mystack.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = mystack.pop();
    }
}
int main()
{
    {
        int n;
        cout << "Enter size of the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements of the array: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        reverseArray(arr, n);
        cout << "Reversed array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}