#include<iostream>
using namespace std;

class MyStack
{
    int *Stack;//Array where values will be stored
    int Top;// number of elements stored in the stack or index where next value will be pushed
    int MaxSize;// Array size or maximum number of elements which can be stored in a given time
public:
    MyStack(int Size=20)//method/constructor to initialize Stack object
    {
        Stack = new int[Size];//dynamically allocate memory for array
        MaxSize=Size;
        Top = 0;//initially stack is empty
    }
    bool isEmpty();//to check whether the stack is empty
    bool isFull();//to check whether the stack is full
    bool push(int Element);//to insert a value
    bool pop();//to delete the top element
    int topElement();//to get the top element
    void show();// to show the stack
};

bool MyStack::isEmpty()
{
    if(Top == 0)return true;
    else return false;
}
bool MyStack::isFull()
{
    //define the function
}

 bool MyStack::push(int Element)
 {
    //check whether full stack if full return false else push

    //place the element on top
    Stack[Top]=Element;
    Top = Top + 1;
    return true;
 }

 bool MyStack::pop()
 {
     if(isEmpty())
        cout<<"Stack is full"<<endl;
     //check whether empty stack if empty return false else popt
     Top--;
     return false;

 }

 int MyStack::topElement()
 {
    return Stack[Top-1];
 }

 void MyStack::show()
 {
    if(isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    cout<<"The elements of the stack are:"<<endl;
    for(int i=Top-1;i>=0;i--)
        cout<< Stack[i]<<endl;
 }


int main()
{
    MyStack st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    cout<<"Top element: "<<st.topElement()<<endl;
    st.pop();
    cout<<"Top element: "<<st.topElement()<<endl;
    st.show();
}
