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
        j=n-1;
        while(j>i)
        {
            
            cout<<" ";
            j--;
        }
        int k=0;
        while(k<=i)
        {
            cout<<k+1;
            k++;
        }
        int m=i;
        while(m>0)
        {
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }
}

// Entre a number : 
// 5
//     1
//    121
//   12321
//  1234321
// 123454321