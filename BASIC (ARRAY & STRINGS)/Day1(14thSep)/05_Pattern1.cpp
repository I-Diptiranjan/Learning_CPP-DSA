#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;

    int i=0;
    while(i<n)
    {
        int j=0;
        while (j<n)
        {
           cout<<i;
           j=j+1;
        }
        
        cout<<"\n";
        i=i+1;
        
    }
}