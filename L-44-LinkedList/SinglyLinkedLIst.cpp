#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head)
{
Node* temp=head; //don't create new node, temp is nothing but a copy of head

while(temp!=NULL) //temp->next==NULL is not a suitable condition
{
    cout<<temp->data<<" ";
    temp=temp->next;
}cout<<endl;
}

void insertAtHead(Node* &head,int data)
{
Node* temp=new Node(data); // pass data for setting the value
temp->next=head;
// temp=head; it is wrong
head=temp;
}


void insertAtTail(Node* &tail,int data)
{
Node* temp=new Node(data);
tail->next=temp;
// tail=temp; also usable and simple
tail=tail->next;
}
int main()
{
    Node* node=new Node(10);
    
    Node* head=node;

    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);

    Node* tail=node;
    print(head);
    insertAtTail(tail,100);
    print(head);
    insertAtTail(tail,200);
    print(head);
    insertAtTail(tail,300);
    print(head);
    return 0;
}