// Q.1

#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int lb = 0;
    int ub = size - 1;

    cout << "\nActive elements at beginning : \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            ub = mid - 1;
            cout << "\nActive elements : \n";
            for (int i = lb; i <= ub; i++)
            {
                cout << arr[i] << "\t";
            }
        }
        else if (target > arr[mid])
        {
            lb = mid + 1;
            cout << "\nActive elements : \n";
            for (int i = lb; i <= ub; i++)
            {
                cout << arr[i] << "\t";
            }
        }
    }

    return -1;
}
int main()
{

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int *arr = new int(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index " << i << " : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter element you want to search : ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Number if found at index " << result << endl;
    }
    else
        cout << "Number is not found.\n";
}

// Q.2

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int lb = 0;
    int ub = size - 1;
    int result = -1;

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (target == arr[mid])
        {
            result = mid;
            ub = mid - 1;
        }
        else if (target < arr[mid])
        {
            ub = mid - 1;
        }
        else if (target > arr[mid])
        {
            lb = mid + 1;
        }
    }

    return result;
}
int main()
{

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int *arr = new int(size);

    cout << "Enter elements in ascending order.\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index " << i << " : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter element you want to search : ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Number if found at index " << result << endl;
    }
    else
        cout << "Number is not found.\n";
}

// Q.3

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int lb = 0;
    int ub = size - 1;
    int result = -1;

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (target == arr[mid])
        {
            result = mid;
            lb = mid + 1;
        }
        else if (target < arr[mid])
        {
            ub = mid - 1;
        }
        else if (target > arr[mid])
        {
            lb = mid + 1;
        }
    }

    return result;
}
int main()
{

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int *arr = new int(size);

    cout << "Enter elements in ascending order.\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index " << i << " : ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter element you want to search : ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Number if found at index " << result << endl;
    }
    else
        cout << "Number is not found.\n";
}

// Q.4

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int lb = 0;
    int ub = size - 1;

    int count = 0;

    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (target == arr[mid])
        {
            count++;

            int left = mid - 1;
            while (left >= lb && arr[left] == target)
            {
                count++;
                left--;
            }

            int right = mid + 1;
            while (right <= ub && arr[right] == target)
            {
                count++;
                right++;
            }
            return count;
        }
        else if (target < arr[mid])
        {
            ub = mid - 1; // Search left
        }
        else
        {
            lb = mid + 1; // Search right
        }
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size]; // Allocate memory for an array

    cout << "Enter elements in ascending order.\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for index " << i << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter element you want to search: ";
    cin >> target;

    int count = binarySearch(arr, size, target); // Pass count by reference

    if (count > 0)
    {
        cout << "Number of occurrences = " << count << endl;
    }
    else
    {
        cout << "Number is not found.\n";
    }

    delete[] arr; // Free the allocated memory
    return 0;
}
