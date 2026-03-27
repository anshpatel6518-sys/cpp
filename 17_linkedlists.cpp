#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
class singlylinkedlist{
    private:
    Node*head;
    public:
    singlylinkedlist(){

        head = NULL;
    }
    void insertatbeginning(int value){
        Node*newnode=new Node;
        newnode->data=value;
        newnode->next=head;
        head = newnode;
    }
    void insertatend(int value){
        Node*newnode=new Node;
        newnode->data=value;
        if(head==NULL){
            head=newnode;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void insertatposition(int value, int pos){
        Node*newnode=new Node;
        newnode->data=value;
        
        Node*temp=head;
        for(int i=1;i<pos-1&&temp!=NULL;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void deleteatbeginning(int value){
      Node*temp=head;
      delete head;
      head=head->next;
    }
    void insertatend(int value){
        Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void deleteatposition(int value,int pos){
        
        Node*temp=head;
        for(int i=1;i<pos-1&&temp->next!=NULL;i++){
            temp=temp->next;
        }
        Node*delnode=temp->next;
        temp->next=delnode->next;
        delete delnode;
    }
};