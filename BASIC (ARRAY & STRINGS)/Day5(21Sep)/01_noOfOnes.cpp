#include<iostream>
using namespace std;

main()
{
    cout<<"Enter Your Number: ";
    int n ;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        if(n&1)
        {
            c++;
        }
        n=n>>1;
    }

    cout<<c;
}