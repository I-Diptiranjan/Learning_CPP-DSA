#include<iostream>
using namespace std;


int findPivot(int arr[],int n)
{
    int s=0,end=n-1;
    int mid = s+(end-s)/2;
    if (arr[s] <= arr[end]) {
        return s;
    }
    while(s<end)
    {
        
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            end=mid; 
        }
        mid = s+(end-s)/2;
    }

    return s;
}


int main()
{
    int arr[7] = {3,1};
    int res = findPivot(arr,2);
    cout<<"Pivot Element is at Index"<<res;

}