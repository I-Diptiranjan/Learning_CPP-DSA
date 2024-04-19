//Pointers & Arrays

#include<iostream>
using namespace std;

int main()
{
    int arr[10]={3,7,9,2,1,7,6};

    cout<<"Address of First Location : "<<arr<<endl; //OR
    cout<<"Address of First Location : "<<&arr[0]<<endl;


    cout<<"1st : "<<*arr<<endl;
    cout<<"2nd : "<<*arr+1<<endl;
    cout<<"3rd : "<<*(arr+1)<<endl;

    //arr[i] == *(arr+i)
    //i[arr] == *(i+arr)

    cout<<"4th : "<<2[arr]<<endl;

    //We can not modify the Symbol Table means 
    // We can not write arr = arr+1 but by using pointer we can do this

    // arr = arr + 1  gives error

    int *p = arr;
    cout<<p<<endl;
    cout<<*p<<endl;
    p=p+1;
    cout<<p<<endl;
    cout<<*p<<endl;


    


}