//We are initializing a array at compile time we are allocationg the memory at the stack but while we are using dynamic memory allocation then we are using Heap Memory.

// Heap returns a address but not allows us to assign a name to that memory so we can use the pointer concept in this scenario

// The pointer is stored at the Stack memory

// Heap  size is more then stack size

// In static allocation memory is freed automatically but in case of heap (Dynamically allocation) memory is not freed automatically we need to manually delete this using delete keyword


#include<iostream>
using namespace std;

void sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    cout<<endl<<sum<<endl;
}

int main()
{
    // int *ptr = new char;

    // int *arr = new int[5];

    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sum(arr,n);

    // delete []arr;
    delete i
    
}