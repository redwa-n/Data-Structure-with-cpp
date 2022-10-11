#include <iostream>
using namespace std;

int queue[100], front = -1, rear = -1, maxSize=100;

///returns True if the queue is empty
bool isEmpty(){
    if ((front == -1) && (rear == -1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

///returns True if the queue is full
bool isFull()
{
    if (rear == maxSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool enqueue(int Element)
{
  if(isFull() )
    {
        cout<< "Queue is Full\n";
        return false;
    }
  else if(isEmpty() )
    {
        front = rear = 0;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
    else
    {
        rear++;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
}


bool dequeue()
{
    if(isEmpty() )
    {
        cout << "Queue is empty! Dequeue not possible\n";
        return false;
    }

    else if (front == rear)
    {
        front = rear = -1;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }

    else
    {
        front++;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }
}

int frontElement()
{
  return queue[front];
}

int rearElement()
{
  return queue[rear];
}


void showQueue()
{
  if (isEmpty() )
  {
      cout << "Cannot show Queue because it is empty\n";
      return;
  }

  else
  {
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <= rear; i++)
     {
        cout << queue[i] << " ";
     }
     cout << endl << endl;
  }
}



int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    showQueue();
    cout<<"\nFront Element of the Queue: " << frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << rearElement() <<endl;

    dequeue();
    dequeue();

    showQueue();
    cout<<"\nFront Element of the Queue: " << frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << rearElement() <<endl;

    return 0;
}
