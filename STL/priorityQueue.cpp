#include <iostream>
#include<queue>
using namespace std;
//Queue whose first element is always greatest. also known as maxHeap. means popped element is always the max number.

int main()
{
    //max heap
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(0);
int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"empty or not : "<<maxi.empty()<<endl;

cout<<endl<<endl<<"Min Heap"<<endl;
    //min heap
    priority_queue<int, vector<int>,greater<int>> mini;

    mini.push(1);
    mini.push(4);
    mini.push(2);
    mini.push(0);
int n2=mini.size();
    for(int i=0;i<n2;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"size : "<<mini.size()<<endl;
    cout<<"empty or not : "<<mini.empty()<<endl;




}