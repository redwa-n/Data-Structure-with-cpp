#include <iostream>
    using namespace std;

    int main()
    {
      int n, i, flag=0, factorial=1;
      cout << "Please Enter the Number: ";
      cin >> n;

      for(i = 2; i <= n/2; i++)
      {
          if(n % i == 0)
          {
              cout<< n <<" is not a Prime Number."<<endl;
              flag=1;
              break;
          }
      }

      if (flag==0)
      {
          cout << n << " is a Prime Number."<<endl;
          for(i = 1; i <= n; i++)
          {
              factorial = factorial * i;
          }
          cout<<"Factorial of " << n << " is: "<<factorial<<endl;
      }
      return 0;
    }
