#include<iostream>
using namespace std;

const int size=50;
int front=-1,rear=-1,q[size];

void enqueue(int q[],int data)
{
    if(rear==size-1)
    cout<<"Queue overflow"<<endl;
    else if(rear==-1)
    front=rear=0;
    else
    rear=rear+1;
    q[rear]=data;
}

void dequeue(int q[])
{
    if(front==-1)
    cout<<"Queue underflow"<<endl;
    else
    {
        cout<<"Deleted element is:"<<q[front]<<endl;
        if(front==rear)
        front=rear=-1;
        else
        front++;
    }
}

void display(int q[],int front, int rear)
{
    if(front==-1)
    cout<<"Queue is empty\n";
    else
    {
        for(int i=front;i<=rear;i++)
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

bool isFull(int q[])
{
    if(rear==size-1)
    return true;
    else
    return false;
}

bool isEmpty(int q[])
{
    if(front==-1)
    return true;
    else
    return false;
}

int size_q(int q[],int front, int rear)
{
    return rear-front;
}

int peek(int q[], int front)
{
    return q[front];
}

int main()
{
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,50);
    enqueue(q,10);
    enqueue(q,60);
    display(q,front,rear);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    display(q,front,rear);
}

