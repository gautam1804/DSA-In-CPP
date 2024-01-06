#include <iostream>
#include<deque>
// dynamic, insertion and deletion at both front and back, random access possible using at().
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(5);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
     for(int i:d)
    {
        cout<<i<<" ";
    }
        cout<<endl;
    d.push_back(2);
    d.pop_front();
     for(int i:d)
    {
        cout<<i<<" ";
    }
        cout<<endl;
          d.push_front(5);
     cout << "Element at index 1: " << d.at(1) << endl;
     cout<<"Empty or not: "<<d.empty()<<endl;
    cout<<"front number: "<<d.front()<<endl;
    cout<<"Back number: "<<d.back()<<endl;
    d.erase(d.begin(),d.begin()+1);
for(int i:d)
    {
        cout<<i<<" ";
    }
      

}