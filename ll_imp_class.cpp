#include<iostream>
using namespace std;

class queue
{
    public:
    int data;
    queue* next;
}*front,*rear;

void init()
{
    front=rear=NULL;
}

void enqueue(int data)
{
    queue *nnode=new queue;
    nnode->data=data;
    if(front==NULL)
    {
        front=nnode;
        rear=nnode;
        nnode->next=NULL;
    }
    else
    {
        rear->next=nnode;
        rear=nnode;
        nnode->next=NULL;
    }
}

void dequeue()
{
    if(front==NULL)
    cout<<"Queue underflow"<<endl;
    else if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        queue* temp=front;
        front=temp->next;
    }
}

void display()
{
    queue *temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    init();
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    display();
    dequeue();
    dequeue();
    display();
}