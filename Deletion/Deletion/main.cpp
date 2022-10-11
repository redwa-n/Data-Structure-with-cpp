#include <iostream>
using namespace std;

void deletion(int arr[], int size, int pos){
    for (int i = pos - 1; i < size; i++)
    {

        arr[i] = arr[i + 1];
    }
    size--;
    
    for (int i = 0; i < size; i++)
    {

        cout << " " << arr[i]<<endl;
    }
}

int main()
{

    int a[100], size, pos, i;

    cout << "Enter the size of an array: ";
    cin >> size;

    cout << "Enter the value in an array : ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the position for deleting: ";
    cin >> pos;

    deletion(a, size, pos);

    return 0;
}
