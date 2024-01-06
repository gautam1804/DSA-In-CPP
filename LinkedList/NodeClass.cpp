#include<iostream>
using namespace std;

class Node
{
    public:  //compulsory to make it public
        int data;
        Node* nextPointer;
    
    Node(int data)
    {
        this->data=data;
        this->nextPointer=NULL;
    }
};
int main()
{
Node* node=new Node(10); //object creation in c++
cout<<node->data<<endl;
cout<<node->nextPointer<<endl;


}