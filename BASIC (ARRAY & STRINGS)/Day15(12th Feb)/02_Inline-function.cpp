//if body of your function is of one/two line then make the function inline

// Advantages : No function call overhead and less memory use

//Default argument

#include<iostream>
using namespace std;

inline int getMax(int& a , int& b)
{
    return a>b?a:b;
}

int defMax(int a , int b=0)
{
    return a>b?a:b;
}

int main()
{
    int a=4,b=6;
    cout<<getMax(a,b)<<endl;
    cout<<defMax(a)<<endl;
    
}