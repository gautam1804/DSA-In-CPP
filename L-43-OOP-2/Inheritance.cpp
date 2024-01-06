#include<iostream>
using namespace std;

class Human
{
    public:
        int height;
        int weight;
    protected:
        int age;
    
    public:
        int getAge()
        {
            return this->age;
        }
        void setWeight(int w)
        {
            this->weight=w;
        }
       
};

class Inheri: public Human
{
    private:
        int dob;
        string name;
    
    

     public:
        void sleep()
        {
            cout<<"Inheri is sleeping."<<endl;
        }
        int getAge()
        {
            return this->age;
        }
};

int main()
{
    Inheri e;
    // cout<<e.age<<endl;
    cout<<"Age is : "<<e.getAge()<<endl;
    
    e.setWeight(24);
    cout<<e.weight<<endl;
    e.sleep();
    return 0;
}