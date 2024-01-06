#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size :" << v.capacity() << endl;

    v.push_back(23);
    cout << "Capacity :" << v.capacity() << endl;

    v.push_back(24);
    cout << "Capacity :" << v.capacity() << endl;

    v.push_back(25);
    cout << "Capacity :" << v.capacity() << endl; // having memory to store elements and double the capacity.

    int vectorSize = v.size(); // Problems with this method
    for (int i = 0; i < vectorSize; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << "Size :" << v.size() << endl; // numbers of elements

    cout << "Element at index 2: " << v.at(2) << endl;

    cout << "front number: " << v.front() << endl;
    cout << "Back number: " << v.back() << endl;
    v.pop_back();
    cout << "After pop the vector" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
cout<<endl;
cout<< "Size before clear:" << v.size() << endl; 
cout << "Capacity before clear :" << v.capacity() << endl;
    v.clear();
   cout << "Size after clear :" << v.size() << endl; 
   cout << "Capacity after clear:" << v.capacity() << endl; //not change

   vector<int> v2(5,1);
    //vector of 5 elements initialized with 1.
    cout<<"second vector"<<endl;
    for(int i:v2)
    {
        cout<<i<<" ";
    }

    cout<<"copy vector v2 in v3"<<endl;
    vector<int> v3(v2);
     cout<<"v3 vector"<<endl;
    for(int i:v3)
    {
        cout<<i<<" ";
    }
}