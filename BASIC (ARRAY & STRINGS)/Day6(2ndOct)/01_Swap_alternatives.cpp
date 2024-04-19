//Swap Alternatives

#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}

void swapAlt(int arr[],int size)
{
 for (int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    printArr(arr,5);
}

main()
{
    int arr[] = {1,2,3,4,5};
    swapAlt(arr,5);
   
    
    
}