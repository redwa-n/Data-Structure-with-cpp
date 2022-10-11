#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver's code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x;
    cout<<"Which element: ";
    cin>>x;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"<<endl
        : cout << "Element is present at index " << result<<endl;
    return 0;
}
