#include <iostream>
using namespace std;

void OddPrint(int x, int y)
{
    cout<< "\nOdd numbers in the range: ";
    for (int i = x; i <= y; i++)
    {
        if(i%2 != 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
}

int main() {
    int start, stop;
    cout<<"Please enter the starting value of the range: ";
    cin>> start;
    cout<<"Please enter the ending value of the range: ";
    cin>> stop;
    OddPrint(start,stop);
    return 0;
}
