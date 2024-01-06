#include <iostream>
#include<set>
using namespace std;
//All unique element. not having 5 more than one time.
//No changes or updation facility.

int main()
{
    set<int> s;

    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(45);
    s.insert(34);
    s.insert(7);
    s.insert(7);

    for(auto i:s)
    {
        cout<<i<<" ";
    }
    
cout<<endl;
    
    set<int>:: iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    
cout<<endl;

cout<<"For finding an element use count(7)"<<endl;
cout<<"7 is present : "<<s.count(7)<<endl;


cout<<"For finding iterator of an element use fint(7)"<<endl;
set<int>:: iterator it2=s.find(7);
// cout<<it2<<endl;
cout<<"value at it2 : "<<*it2<<endl;
it2++;
for(auto i=it2;i!=s.end();i++)
{
    cout<<*i<<" ";
}

}