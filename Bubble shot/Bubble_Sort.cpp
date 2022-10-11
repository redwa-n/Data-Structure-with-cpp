#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)     /// (n-1) - i = n-i-1
        {
            if (arr[j] > arr[j+1])
                {
                    swap(&arr[j], &arr[j+1]);
                }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main()
{
    int n;
    cout << "Please enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Please enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unsorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(arr, n);
    cout<<"Sorted array: ";
    printArray(arr, n);

    return 0;
}
