#include<iostream>
using namespace std;
#include <array>

int main()
{

    array<int ,4> arr = {3,5,1,2};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    //WE can find the first and Last element Using
    cout<<"First Element is"<<arr.front()<<endl;
    cout<<"Last Element is "<<arr.back()<<endl;

    //We can also check the Array is empty or not
    cout<<"Array is empty(1) or not(0) :"<< arr.empty()<<endl;

    //We can Find the array element using at operation
    cout<<"Element at index 2 is : "<<arr.at(2)<<endl;

}