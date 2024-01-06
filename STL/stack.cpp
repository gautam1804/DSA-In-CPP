#include <iostream>
#include<stack>
using namespace std;
//LIFO last in first out

int main()
{
    stack<string> s;

    s.push("Raj");
    s.push("Rajeev");
    s.push("Rajesh");
    s.push("Raghu");

    cout<<"Top element : "<<s.top()<<endl;
        s.pop();
    cout<<"Top element : "<<s.top()<<endl;
    cout<<"size : "<<s.size()<<endl;
    cout<<"empty or not : "<<s.empty()<<endl;





}