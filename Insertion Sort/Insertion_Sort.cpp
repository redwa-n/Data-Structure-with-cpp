   #include <iostream>
   using namespace std;

   int main()
   {
      int n, i, j, temp, no_swap=0, comp=0;
      cout << "Please enter the size of an array: ";
      cin >> n;
      int array[n];
      cout<< "Please enter the elements of an array: ";
      for (i = 0; i < n; i++)
      {
          cin >> array[i];
      }

      cout<<"\nUnsorted array: ";
      for(int i = 0; i < n; i++)
      {
          cout << array[i] << " ";
      }
      cout << endl << endl;

      for (i = 1; i < n; i++)
      {
          j = i;
          while (j > 0)
          {
              comp++;
              if(array[j - 1] > array[j])
              {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
                no_swap++;
              }

            j--;
          }
       }

    cout<<"Sorted Elements: ";
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout << endl << endl;

    cout << "\nNumber of comparisons: " <<comp << endl;
    cout << "\nNumber of exchanges: " <<no_swap << endl << endl;

      return 0;
 }
