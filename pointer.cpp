#include<iostream>


using  namespace std;


int main() {
    int i = 10;
    cout << &i << endl;
    int *p = &i;

    cout << p << endl;
    cout << *p << endl;


    float u = 10.12121;
    float * address = &u;
    cout << &u << endl;
    cout << address << endl;
    cout << *address << endl;



}