#include<iostream>
using namespace std;

main()
{
    cout<<"Entre a number : "<<endl;
    int n;
    cin>>n;
    int i=0,j;
    while(i<n)
    {
        j=0;
        while(j<=i)
        {
            char ch = 'A'+i+j;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

// Entre a number : 
// 5
// A
// BC
// CDE
// DEFG
// EFGHI


