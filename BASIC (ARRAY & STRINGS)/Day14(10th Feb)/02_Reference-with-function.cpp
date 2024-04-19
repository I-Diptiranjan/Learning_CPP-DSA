#include<iostream>
using namespace std;

void update(int &j)
{
    j++;
}

int main()
{
    int i=3;
    cout<<"i is "<<i<<endl;
    update(i);
    cout<<"i is "<<i<<endl;
}

//We can also write a function with return value as a reference like int& swap(int a , int b) but the variables used inide the function are local to that function and can be erased after the function is over so it is a bad practice. Like wise [ int* fun(int i) ] is also a bad practice.