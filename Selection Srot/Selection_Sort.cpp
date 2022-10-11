#include<iostream>
using namespace std;

int comp_no =0, swap_no = 0;
int main()
{
    int n;
    cout << "Please enter the size of an array: ";
    cin >> n;
    int a[n];
    cout << "Please enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<"\nUnsorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;

    int i,j,loc,temp,min,accept_swap;

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            comp_no++;
            if(min>a[j])
            {
                min=a[j];
                accept_swap = j;
                loc=accept_swap;
            }
        }
        if (loc == accept_swap)
        {
            swap_no++;
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }

    cout<<"\nSorted Elements: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl << endl;
    cout << "\nNumber of comparisons: " <<comp_no << endl;
    cout << "\nNumber of exchanges: " <<swap_no << endl << endl;
    return 0;
}
