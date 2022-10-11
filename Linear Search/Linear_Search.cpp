#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            {
                return i;
            }
    }
    return -1;
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
    cout << "\nPlease enter the element which you want to search: ";
    cin >> element;
    int result = search(arr, n, element);

    if(result == -1)
    {
       cout<<"\n\nElement is not present in array.";
    }
    else
    {
       cout<<"\n\nElement is present at index: " <<result;
    }
    cout<<endl;
    return 0;
}
