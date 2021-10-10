#include<iostream>
using namespace std;

class queue
{
    public:
    int data;
    queue* next;
};
queue* front=NULL;
queue*rear=NULL;

queue* enqueue(queue* front,int data)
{
    queue* nnode=new queue();
    nnode->data=data;
    nnode->next=NULL;
    if(front==NULL)
    front=rear=nnode;
    else
    {
        rear->next=nnode;
        rear=nnode;
    }
    return front;
}

queue* dequeue(queue* front)
{
    if(front==NULL)
    cout<<"Queue underflow"<<endl;
    else
    {
        cout<<"Deleted element is:"<<front->data<<endl;
        queue* temp=front;
        front=temp->next;
        delete(temp);
    }
    return front;
}

void display(queue* front)
{
    if(front==NULL)
    cout<<"Queue is empty"<<endl;
    else
    {
        queue* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    front=enqueue(front,20);
    front=enqueue(front,30);
    front=enqueue(front,40);
    front=enqueue(front,50);
    front=enqueue(front,60);
    front=enqueue(front,70);
    front=enqueue(front,80);
    display(front);
    front=dequeue(front);
    front=dequeue(front);
    display(front);
}