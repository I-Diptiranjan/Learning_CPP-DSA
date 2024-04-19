// Char Arrays and Pointers

// Diffrenece in array pointers & char Array pointers

#include<iostream>
using namespace std;


int main()
{
    int arr[5]={1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;

    int *p=arr;
    char *c=ch;

    cout<<p<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<*(c+1)<<endl;
}