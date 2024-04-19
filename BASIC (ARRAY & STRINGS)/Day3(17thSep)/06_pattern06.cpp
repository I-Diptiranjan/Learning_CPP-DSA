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
        while(j<i)
        { 
            cout<<" ";
            j++;
        }
        int k=n-1;
        while(k>i)
        {
            cout<<"*";
            k--;
        }
        cout<<endl;
        i++;
    }
}


// Entre a number : 
// 5
// ****
//  ***
//   **
//    *