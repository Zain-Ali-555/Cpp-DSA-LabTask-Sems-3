#include <iostream>
using namespace std;
int main()
{
    // Getting Array Size from user

    int arrSize = 0;
    cout << "Enter Size of Array: ";
    cin >> arrSize;

    // Finding Array Mid Index

    int lowIndex = 0;
    int midIndex = arrSize / 2;
    int arr[arrSize] = {0};

    // Getting Array from user

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter " << i << " Numbers: ";
        cin >> arr[i];
    }

    // Getting a Number from user for finding

    int userNum = 0;
    cout << "Enter a Numbers for Finding: ";
    cin >> userNum;

    for (int i = 0; i < arrSize; i++)
    {
        if (userNum == midIndex)
        {
            return midIndex;
        }
        else if (userNum < arr[midIndex])
        {
            arrSize = midIndex - 1;
        }
        else
        {
            lowIndex = midIndex + 1;
        }
        return -1;
    }
     cout<<"Your Entered  Number is at"<<<<" Index";   
    return 0;
}