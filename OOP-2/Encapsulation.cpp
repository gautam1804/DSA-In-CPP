#include<iostream>
using namespace std;

class Encap
{
    private:
        int property1;
        string property2;
    
    public:
        int getProperty1()
        {
            return this->property1;
        }
};

int main()
{
    Encap e;
    cout<<"Encapsulation achieved.";
    return 0;
}