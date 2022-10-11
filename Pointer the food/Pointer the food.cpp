#include <iostream>
using namespace std;

int main()
{
  string food = "Pizza";
  string* ptr = &food;

  cout << "Output the value of food: ";
  ///cout << food << "\n";
  cout << *ptr << "\n";

  cout << "Output the memory address of food: ";
  ///cout << &food << "\n";
  cout << ptr << "\n";

  cout << "\nEnter a new value of food: ";
  ///cin >> food;
  cin >> *ptr;

  cout << "\nOutput the new value of food: ";
  ///cout << food << "\n";
  cout << *ptr << "\n";

  cout << "Output the same memory address of food with different value: ";
  ///cout << &food << "\n";
  cout << ptr << "\n";

  return 0;
}
