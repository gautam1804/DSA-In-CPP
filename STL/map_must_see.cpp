#include <iostream>
#include <map>
using namespace std;

int main()
{
    //sorted map
   map<int,string> m;
   m[1]="32 degree";
   m[2]="45 degree";
   m[13]="3 degree";
   m[10]="3 degree";
   m[9]="3 degree";

m.insert({5,"90 degree"});
   for(auto i:m)
   {
    cout<<i.first<<endl;
   }

   cout<<"key with values before erase"<<endl;
   for(auto i:m)
   {
    cout<<i.first<<" "<<i.second<<endl;
   }

   cout<<"For finding an element use count(13)"<<endl;
cout<<"13 is present : "<<m.count(13)<<endl;

m.erase(5);
cout<<"key with values after erase"<<endl;
   for(auto i:m)
   {
    cout<<i.first<<" "<<i.second<<endl;
   }

   auto it=m.find(9);
   for(auto i=it;i!=m.end();i++)
   {
      cout<<(*i).first<<endl;
   }

}