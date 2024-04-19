#include<iostream>
using namespace std;

main()
{
    cout<<"Entre a number : "<<endl;
    int n;
    cin>>n;
    int i=n,j;
    while(i>0)
    {
        j=0;
        while(j<i)
        {
            
            cout<<j+1;
            j++;
        }
        int k=n;
        while(k>i)
        {
            cout<<"*";
            k--;
        }
        int l=n;
        while(l>i)
        {
            cout<<"*";
            l--;
        }
        int m=i;
        while(m>0)
        {
            cout<<m;
            m--;
        }
        cout<<endl;
        i--;
    }
}

// Entre a number : 
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1