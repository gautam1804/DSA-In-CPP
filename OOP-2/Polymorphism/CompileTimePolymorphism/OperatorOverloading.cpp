#include<iostream>
using namespace std;

class B
{
    public:
        int a;
        int b;

    public:
        int add()
        {
            return this->a+this->b;
        }
    
    void operator+ (B &obj)  //& is must
    {
        // cout<<"Hello gautam"<<endl;
        int value1=this->a;
        int value2=obj.a;

        cout<<value1-value2<<endl;

    }

    void operator() ()
    {
        cout<<"Bracket overloading "<<this->a<<endl;
    }
};
int main()
{   
    B obj1,obj2;
    obj1.a=5;
    obj2.a=4;
    
    obj1+obj2;
    obj1(); //must tujhse nhi hua
    return 0;
}