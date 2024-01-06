#include<iostream>
using namespace std;

class Human
{
    public:
        void Say()
        {
            cout<<"Human said something"<<endl;
            return;
        }
       
};

class Inheri: public Human
{
    public:
        void Say()
        {
            cout<<"Inheri said something"<<endl; //function overriding.
            return;
        }
};

int main()
{
    Inheri e;
    // cout<<e.age<<endl;
    e.Say();
    e.Human::Say();
    return 0;
}