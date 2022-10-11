#include <iostream>
using namespace std;
void deletion(int a[], int num){
    
    for (int i=0; i<10; i++) {
       
        if(num==a[i]){
            cout<<num<<" is at index: "<<i<<endl;
            break;
        }
    }
}

int main(){
    int arr[10]={3,4,5,6,7,8,9,11,22,33};
    int number;
    cout<<"Which element you want to found: ";
    cin>>number;
    
    deletion(arr, number);
    
    return 0;
}
