#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;

    int *q = 0;
    q = ptr;

    int *t = q;

    cout << "value of i : " << i << endl;
    cout << "address of i : " << &i << endl;
    cout << "value of ptr : " << *ptr << endl;
    cout << "address of ptr : " << ptr << endl;
    cout << "value of q : " << *q << endl;
    cout << "address of q : " << q << endl;
    cout << "value of t : " << *t << endl;
    cout << "address of t : " << t << endl;

    (*t)++;
    
    cout << "After incrementing t" << endl;
    cout << "value of i : " << i << endl;
    cout << "address of i : " << &i << endl;
    cout << "value of ptr : " << *ptr << endl;
    cout << "address of ptr : " << ptr << endl;
    cout << "value of q : " << *q << endl;
    cout << "address of q : " << q << endl;
    cout << "value of t : " << *t << endl;
    cout << "address of t : " << t << endl;

    int a = *ptr;
    a++;
    cout << "After incrementing a" << endl;
    cout << "value of i : " << i << endl;
    cout << "address of i : " << &i << endl;
    cout << "value of ptr : " << *ptr << endl;
    cout << "address of ptr : " << ptr << endl;
    cout << "value of q : " << *q << endl;
    cout << "address of q : " << q << endl;
    cout << "value of t : " << *t << endl;
    cout << "address of t : " << t << endl;
    cout << "value of a : " << a << endl;
    cout << "address of a : " << &a << endl;

    (ptr)++;
    (q);
    (t)++;
    cout << "After incrementing pointers" << endl;
    cout << "value of i : " << i << endl;
    cout << "address of i : " << &i << endl;
    cout << "value of ptr : " << *ptr << endl;
    cout << "address of ptr : " << ptr << endl;
    cout << "value of q : " << *q << endl;
    cout << "address of q : " << q << endl;
    cout << "value of t : " << *t << endl;
    cout << "address of t : " << t << endl;
    cout << "value of a : " << a << endl;
    cout << "address of a : " << &a << endl;
}
