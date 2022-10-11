#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter: ";
    getline(cin,s);
    cout<<"String object accessed using array and loop...\n";
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
    cout<<"Not using arrays or loops\n";
    cout<<s<<endl;

    return 0;
}
