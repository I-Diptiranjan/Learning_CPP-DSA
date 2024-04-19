//Bubble sort using recursion

#include<iostream>
using namespace std;

void sortArr(int arr[],int n)
{
    if(n==0 || n==1)
    {
        return;
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    sortArr(arr,n-1);
}

int main()
{
    int arr[7] = {6,3,5,223,634,14,2};
    sortArr(arr,7);

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}