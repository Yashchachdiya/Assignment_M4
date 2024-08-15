//. Write a program of to sort the array using templates
#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void printArray(T arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

main() 
{
    int intArr[] = {5, 2, 8, 3, 1, 6, 4};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Before sorting : ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "After sorting : ";
    printArray(intArr, intSize);



}
