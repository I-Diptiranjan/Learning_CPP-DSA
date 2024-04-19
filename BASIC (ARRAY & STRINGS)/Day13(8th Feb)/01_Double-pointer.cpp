//Double Pointers

#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *p1 = &a;
    int **p2= &p1;


    //Some MCQs

    int arr[6]={1,4,32};
    int *p=arr;
    cout<<endl<<p[2]<<endl;

    char ch[]="abcde";
    char *c = &ch[0];
    cout<<endl<<c<<endl;
    cout<<endl<<c[0]<<endl;

}