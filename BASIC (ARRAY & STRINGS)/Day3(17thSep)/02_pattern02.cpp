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
        while(j<n)
        {
            char ch = 'A'+i;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}


// op :
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE