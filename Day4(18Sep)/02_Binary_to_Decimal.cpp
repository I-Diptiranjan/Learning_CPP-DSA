#include<iostream>
using namespace std;
#include<math.h>

main()
{
    int n;
    cout<<"Enter Your Binary Number : "<<endl;
    cin>>n;

    int ans=0,i=0;
    while( n != 0)
    {
        int rem = n%10;
        if(rem==1)
        {
            ans = ans+(rem*(pow(2,i)));
        }
        n=n/10;
        i++;
    }

    cout<<ans;
}