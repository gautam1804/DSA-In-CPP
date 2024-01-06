#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};

class GermanShepard: public Dog
{

};
int main() {

    GermanShepard g;
    g.speak();
    cout << g.age << endl;


    return 0;
}