#include<iostream>
using namespace std;
#define len 10
class queue
{
    public:
    int arr[len];
    int front,rear;
};

queue init()
{
    queue q;
    q.front=q.rear=-1;
    return q;
}

int size(queue q)
{
    return(q.rear-q.front+1);
}

int isEmpty(queue q)
{
    return(q.front==-1||q.front>q.rear);
}

int isFull(queue q)
{
    return (q.rear==len-1);
}

int front(queue q)
{
    if(isEmpty(q))
    {
    cout<<"Queue is empty"<<endl;
    return 0;
    }
    else
    return (q.arr[q.front]);
}

queue enqueue(queue q,int ele)
{
    if(isFull(q))
    cout<<"Queue overflow";
    else if(isEmpty(q))
    {
    q.rear=q.front=0;
    q.arr[q.rear]=ele;
    }
    else
    {
        ++q.rear;
        q.arr[q.rear]=ele;
    }
    return q;
}

queue dequeue(queue q)
{
    if(isEmpty(q))
    cout<<"Queue underflow";
    else
    q.front++;
    return q;
}

void display(queue q)
{
    for(int i=q.front;i<=q.rear;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
}

int main()
{
    queue q=init();
    q=enqueue(q,30);
    q=enqueue(q,20);
    q=enqueue(q,40);
    q=enqueue(q,50);
    q=enqueue(q,60);
    q=enqueue(q,70);
    display(q);
    q=dequeue(q);
    q=dequeue(q);
    display(q);
}