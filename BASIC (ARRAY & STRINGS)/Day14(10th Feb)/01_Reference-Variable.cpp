// Reference Variable : Memory is same but variable names are diffrent

// Why we Need this ? : Used when we need to pass a reference in a function


#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int &j=i;
    cout<<"i is "<<i<<endl;
    cout<<"i address "<<&i<<endl;
    cout<<"j address"<<&j<<endl;
    j++;
    cout<<"i is "<<i<<endl;
    cout<<"j is "<<j<<endl;
    cout<<"j address"<<&j<<endl;
}