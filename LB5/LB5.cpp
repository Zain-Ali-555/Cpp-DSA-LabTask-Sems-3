// Q.1
#include <iostream>
using namespace std;
class Queue
{
private:
    int front, rear;
    int size;
    int *arr;

public:
    Queue()
    {
        size = 5;
        front = rear = -1;
        arr = new int[size];
    }
    void enqueue(int value)
    {
        if (rear == size - 1)
        {
            cout << "\n Queue is full, cannot enqueue " << value << endl;
            return;
        }
        if (front == -1)
        {
            front = 0; 
        }
        arr[++rear] = value; // Increment rear and add the new element
        cout << " " << value << " enqueued to the queue." << endl;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "\n Queue is empty, cannot dequeue." << endl;
            return;
        }
        cout << " " << arr[front] << " dequeued from the queue." << endl;
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
    bool isEmpty()
    {
        return (front == -1);
    }
    void display()
    {
        if (isEmpty())
        {
            cout << " Queue is empty." << endl;
            return;
        }
        cout << "\n Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    Queue q; // Creating an empty queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This should show "Queue is full"
    q.display();
    q.dequeue();
    q.dequeue();
    q.display(); // Display current queue elements again
    cout << "\n Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}

// Q.2

// #include <iostream>
// #include <string>
// using namespace std;
// #define MAX 100 // Define a maximum size for our arrays (queues)
// class Queue
// {
//     char arr[MAX]; // Array to hold the queue elements
//     int front, rear;

// public:
//     Queue()
//     {
//         front = -1;
//         rear = -1;
//     }
//     bool isEmpty()
//     {
//         return front == -1 || front > rear;
//     }
//     // Enqueue a character to the rear of the queue
//     void enqueue(char value)
//     {
//         if (rear == MAX - 1)
//         {
//             cout << " Queue is full!" << endl; // Overflow condition
//         }
//         else
//         {
//             if (front == -1)
//                 front = 0; // Initialize front if first element
//             arr[++rear] = value;
//         }
//     }
//     char dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << " Queue is empty!" << endl;
//             return '\0'; // Return null character if queue is empty
//         }
//         return arr[front++];
//     }
//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << " Queue is empty" << endl;
//             return;
//         }
//         for (int i = front; i <= rear; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     // Concatenate another queue into this one
//     void concatenate(Queue &q)
//     {
//         while (!q.isEmpty())
//         {
//             enqueue(q.dequeue());
//         }
//     }
// };
// int main()
// {
//     string input;
//     cout << "\n Enter a string: ";
//     getline(cin, input); // Get input string
//     Queue queues[10];
//     int queueIndex = 0;
//     Queue currentQueue;
//     for (int i = 0; i < input.length(); i++)
//     {
//         if (input[i] != ' ')
//         {
//             currentQueue.enqueue(input[i]); // Enqueue each character of the word
//         }
//         else
//         {
//             if (!currentQueue.isEmpty())
//             {
//                 queues[queueIndex++] = currentQueue; // Store the queue of the word
//                 currentQueue = Queue();              // Reset the current queue for the next word
//             }
//         }
//     }
//     // Handle the last word if any
//     if (!currentQueue.isEmpty())
//     {
//         queues[queueIndex++] = currentQueue;
//     }
//     // Display individual queues for each word
//     for (int i = 0; i < queueIndex; i++)
//     {
//         cout << " Q" << i + 1 << ": ";
//         queues[i].display();
//     }
//     Queue resultQueue = queues[0]; // Start with the first queue
//     for (int i = 1; i < queueIndex; i++)
//     {
//         resultQueue.concatenate(queues[i]);
//     }
//     cout << "\n Concatenated Queue: ";
//     resultQueue.display();
//     return 0;
// }