#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, i, j;
    cout << "Enter the number of rows of Matrix A: ";
    cin >> a;
    cout << "Enter the number of column of Matrix A: ";
    cin >> b;
    cout << "Enter the number of rows of Matrix B: ";
    cin >> c;
    cout << "Enter the number of column of Matrix B: ";
    cin >> d;
    cout << "Enter the number of rows of Matrix C: ";
    cin >> e;
    cout << "Enter the number of column of Matrix C: ";
    cin >> f;

    int A[a][b], B[c][d], C[e][f];
    cout<<"\nPlease enter the value of matrix A: ";
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"\nPlease enter the value of matrix B: ";
    for (i = 0; i < c; i++)
    {
        for(j = 0; j < d; j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<"\nPlease enter the value of matrix C: ";
    for (i = 0; i < e; i++)
    {
        for(j = 0; j < f; j++)
        {
            cin>>C[i][j];
        }
    }

    cout<<"\n--------------- Matrix A ---------------\n";
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\n--------------- Matrix B ---------------\n";
    for (i = 0; i < c; i++)
    {
        for(j = 0; j < d; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\n--------------- Matrix C ---------------\n";
    for (i = 0; i < e; i++)
    {
        for(j = 0; j < f; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    if((a == c) && (c == e) && (b == d) && (d == f))
    {
        int SUM[a][b];
        for (i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
                SUM[i][j] = A[i][j] + B[i][j] + C[i][j];
            }
        }

        cout<<"\n--------------- SUM Matrix ---------------\n";
        for (i = 0; i < a; i++)
        {
            for(j = 0; j < b; j++)
            {
                cout << SUM[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout<<"\n --- Matrix addition is not possible --- \n";
    }

    return 0;
}
