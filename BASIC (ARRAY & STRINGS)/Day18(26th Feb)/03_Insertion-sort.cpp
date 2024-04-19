//Inserti sort using recursion

#include<iostream>
using namespace std;

void sortArr(int arr[],int n)
{
   if(n<=1)
   {
    return;
   }
   sortArr(arr,n-1);

   int i=n-1;
   int j=i-1;
   int key = arr[i];
   while(j>=0 && arr[j]>key)
   {
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=key;
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