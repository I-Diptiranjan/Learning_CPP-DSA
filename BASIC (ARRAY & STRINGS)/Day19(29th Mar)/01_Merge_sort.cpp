#include<iostream>
using namespace std;


void merge(int *arr,int s,int q,int e)
{
    int len1=q-s+1;
    int len2=e-q;
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int k=s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i]=arr[k];
        k++;
    }
    // k=q+1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i]=arr[k];
        k++;
    }

    int i=0;
    int j=0;
    k=s;
    while(i<len1&&j<len2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<len2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
    delete []arr1;
    delete []arr2;
    
}
void mergeSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int count=0;    
    int q=(s+e)/2;
    mergeSort(arr,s,q);
    mergeSort(arr,q+1,e);
    merge(arr,s,q,e);
    
}



int main(){
    int arr[6]={0,7,3,5,1,9};
    for (int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<endl;
    }
    mergeSort(arr,0,5);
    for (int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<endl;
    }
    
    
}
