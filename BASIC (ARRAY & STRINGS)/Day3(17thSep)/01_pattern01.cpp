#include<iostream>
using namespace std;

main()
{
    cout<<"Entre a number : "<<endl;
    int n;
    cin>>n;
    int i=1,j;
    while(i<=n)
    {
        j=i;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}

// Entre a number : 
// 4
// 1
// 21
// 321
// 4321