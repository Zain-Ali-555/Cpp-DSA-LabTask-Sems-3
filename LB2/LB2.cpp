// Q.1

#include <iostream>
using namespace std;
int main() {
 int arrLength = 5;
 int ageArr[arrLength] = {};
 cout << "Enter Age of all students: "<<endl;
 for(int i =1; i <= arrLength; i++){
 cin>>ageArr[i];
 }
 int largestAge = ageArr[1];
 for(int i =1; i <= arrLength; i++){
 if( ageArr[i] > largestAge)
 largestAge = ageArr[i];
 }
 cout<<largestAge <<" is the largest Age in our students.";
 return 0;
}

// Q.2

// #include <iostream>
// using namespace std;
// int main() {
//  int size;
//  cout << "Enter the size of the arrays: ";
//  cin >> size;
//  int* arr1 = new int[size];
//  int* arr2 = new int[size];
//  int* arr3 = new int[size];
//  int* resultArr = new int[size]; 
//  cout << "Enter elements for the first array: " << endl;
//  for (int i = 0; i < size; i++) {
//  cin >> arr1[i];
//  }
//  cout << "Enter elements for the second array: " << endl;
//  for (int i = 0; i < size; i++) {
//  cin >> arr2[i];
//  }
//  cout << "Enter elements for the third array: " << endl;
//  for (int i = 0; i < size; i++) {
//  cin >> arr3[i];
//  }
//  for (int i = 0; i < size; i++) {
//  resultArr[i] = arr1[i] + arr2[i] + arr3[i];
//  }
//  cout << "The resulting array after adding the three arrays is: " << endl;
//  for (int i = 0; i < size; i++) {
//  cout << resultArr[i] << " ";
//  }
//  cout << endl;
//  delete[] arr1;
//  delete[] arr2;
//  delete[] arr3;
//  delete[] resultArr;
//  return 0;
// }

// Q.3

// #include <iostream>
// using namespace std;
// int main() {
//  int arrLength, searchItem;
//  cout << "Enter the number of elements in the array: ";
//  cin >> arrLength;
//  int* arr = new int[arrLength];
//  cout << "Enter the elements of the array: " << endl;
//  for (int i = 0; i < arrLength; i++) {
//  cin >> arr[i];
//  }
//  cout << "Enter the item to search for: ";
//  cin >> searchItem;
//  bool found = false;
//  for (int i = 0; i < arrLength; i++) {
//  if (arr[i] == searchItem) {
//  cout << "Item found at index " << i << endl;
//  found = true;
//  break;
//  }
//  }
//  if (!found) {
//  cout << "Item not found in the array." << endl;
//  }
//  delete[] arr
//  return 0;
// }