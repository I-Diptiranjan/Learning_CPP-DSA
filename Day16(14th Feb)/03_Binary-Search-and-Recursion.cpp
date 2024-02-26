
//check if array is sorted or not using recursion
// FInd Sum using Recursion
// Linear Search in Recursion
#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0 || n==1 )
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    
    return isSorted(arr+1,n-1);
    
}

int sumArr(int arr[],int n)
{
    
    if(n==0)
    {
        return 0;
    }

    return arr[0]+sumArr(arr+1,n-1);

}

bool Search(int arr[],int n, int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }

    return Search(arr+1,n-1,key);
}

int main()
{
    int arr[5]={5,6,7,3,8};
    cout<<isSorted(arr,5)<<endl;
    cout<<sumArr(arr,5)<<endl;
    cout<<Search(arr,5,877)<<endl;
}