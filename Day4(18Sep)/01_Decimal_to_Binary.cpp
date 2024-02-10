// #include<iostream>
// using namespace std;

// #include<math.h>

// main()
// {
//     int n;
//     cout<<"Enter Your Decimal Number : "<<endl;
//     cin>>n;

//     int ans=0,rem,m=1;
//     while(n!=0)
//     {
//         rem = n%2;
//         ans = (rem * m)+ans;
//         cout<<ans<<endl;
//         n=n/2;
//         m*=10; 
//     }

//     cout<<ans;
// }


#include<iostream>
using namespace std;

#include<math.h>

main()
{
    int n;
    cout<<"Enter Your Decimal Number : "<<endl;
    cin>>n;

    int ans=0,i=0;
    while( n != 0)
    {
        int bit = n&1;
        ans = (bit * round(pow(10, i))) + ans;
        n=n>>1;
        i++;
    }

    cout<<ans;
}