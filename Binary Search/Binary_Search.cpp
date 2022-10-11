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
int BinarySearch(int arr[], int first, int last, int element)
{
	while (first <= last)
    {
		///int middle = first + (last - first) / 2;
		int middle = (first + last) / 2;

		if (arr[middle] == element)
        {
            return middle;
        }

		else if (arr[middle] < element)
        {
            first = middle + 1;
        }

		else
        {
            last = middle - 1;
        }
	}

	return -1;
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

int main(void)
{
    int n, element, i;
    cout << "Please enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout<< "Please enter the elements of an array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"\nUnsorted array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout<<"\nSorted array: ";
    printArray(arr, n);

    cout << "\nPlease enter the element which you want to search: ";
    cin >> element;

    int result = BinarySearch(arr, 0, n, element);

	if(result == -1)
    {
        cout << "\nElement is not present in array" << endl;
    }
    else
    {
        cout << "\nElement is present at index " << result << endl;
    }

	return 0;
}
