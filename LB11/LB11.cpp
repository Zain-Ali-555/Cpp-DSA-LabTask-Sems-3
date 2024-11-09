// Insertion Sort

#include <iostream>

using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arrSize = 0;
    cout << "Enter Array Size: ";
    cin >> arrSize;
    int arr[arrSize];
    cout << "Enter " << arrSize << " Numbers: ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    if (!isSorted(arr, arrSize))
    {

        for (int i = 1; i < arrSize; i++)
        {
            int temp = arr[i];              // temp = arr[1]
            int j = i - 1;                  // j = j - 1 => j = 0
            while (j >= 0 && arr[j] > temp) // arr[0] > arr[1]
            {
                arr[j + 1] = arr[j]; // arr[1] = arr[0]
                j--;                 // j = -1
            }
            arr[j + 1] = temp; // arr[0]= arr[1]
            cout << "Iteration No." << i << ": ";
            for (int i = 0; i < arrSize; i++)
            {
                cout << arr[i] << "\t";
            }
            cout << "\n";
        }
        for (int i = 0; i < arrSize; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Array is already sorted" << "\n";
    }

    return 0;
}