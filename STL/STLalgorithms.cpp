#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
vector<int> v;
v.push_back(3);
v.push_back(4);
v.push_back(6);
v.push_back(7);
v.push_back(9);

cout<<"Applying binary search"<<endl;
cout<<"6 is present : "<<binary_search(v.begin(),v.end(),6);

cout<<"Lower bound using iterator "<<endl;
cout<<"lower bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

cout<<"upper bound using iterator "<<endl;
cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;

int a=3,b=5;
cout<<"max value : "<<max(a,b)<<endl;
cout<<"min value : "<<min(a,b)<<endl;
swap(a,b);
cout<<a<<" "<<b<<endl;

string t="toushitya";
reverse(t.begin(),t.end());
cout<<t<<endl;

cout<<"rotate the vector"<<endl;
rotate(v.begin(),v.begin()+2,v.end());
cout<<"after rotate"<<endl;
for(auto i:v)
{
    cout<<i<<" ";
}cout<<endl;

sort(v.begin(),v.end());
cout<<"after sort"<<endl;
for(auto i:v)
{
    cout<<i<<" ";
}
}