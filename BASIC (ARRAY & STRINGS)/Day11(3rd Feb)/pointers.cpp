#include<iostream>
using namespace std;

int main()
{

    int num = 5;
    int *p = &num;
    int *q = p;

    cout<<num<<endl;
    cout<<p<<endl;
    cout<<q<<endl;

    (*p)++; //brackets are mandatory

    cout<<*p<<endl;
    cout<<num<<endl;

    (*q)++;
    cout<<*q<<endl;
    cout<<num<<endl;
}