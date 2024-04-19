#include<iostream>
using namespace std;

main()
{
    cout<<"Entre a number : "<<endl;
    int n;
    cin>>n;
    int i=n,j;
    while(i>=1)
    {
        j=n;
        char start = 'A'+i-1;
        while(j>=i)
        {
            
            cout<<start;
            start++;
            j--;
        }
        cout<<endl;
        i--;
    }
}

// Entre a number : 
// 4
// D
// CD
// BCD
// ABCD