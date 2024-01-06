#include <iostream>
#include<queue>
using namespace std;
//FIFO First in first out

int main()
{
    queue<string> s;

    s.push("Raj");
    s.push("Rajeev");
    s.push("Raghu");

    cout<<"front element : "<<s.front()<<endl;
        s.pop();
    cout<<"front element : "<<s.front()<<endl;
    cout<<"size : "<<s.size()<<endl;
    cout<<"empty or not : "<<s.empty()<<endl;





}