#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void bark() {
        cout << "barking " << endl;
    }
};

class Human {
    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Hybrid: public Human,public Animal
{

};

int main() {

    Hybrid h;
    h.speak();
    h.bark();


    return 0;
}