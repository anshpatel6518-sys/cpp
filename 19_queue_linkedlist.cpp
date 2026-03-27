#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
private:
    Node *front, *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int val)
    {
        Node *newnode = new Node(val);
        if (newnode == NULL)
        {
            cout << "Queue Overflow\n";
            return;
        }
        if (rear == NULL)
        {
            rear = front = newnode;
            cout<<"Insertion successfull\n";
            return;
        }
        rear->next = newnode;
        rear = rear->next;
        cout<<"Insertion suscessfull\n";
    }
    void display(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node* temp=front;
        cout<<"Deleted element "<<temp->data<<endl;
        front=front->next;
        delete temp;
    }
};
int main()
{
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.display();
    q1.enqueue(30);
    q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}