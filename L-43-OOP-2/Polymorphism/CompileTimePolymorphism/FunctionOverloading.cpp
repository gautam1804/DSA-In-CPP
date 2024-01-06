#include<iostream>
using namespace std;

class A {
    public:

    void sayHello() {
        cout << " Hello" << endl;
    }
    void sayHello(string g) {
        cout << " Hello "<<g << endl;
    }
    void sayHello(string g,int t) {
        cout << " Hello "<<g<<". Its "<<t<<" P.M." << endl;
    }
};


int main() {

    A obj;
    obj.sayHello();
    obj.sayHello("Gautam");
    obj.sayHello("Gautam",12);
   return 0;
}