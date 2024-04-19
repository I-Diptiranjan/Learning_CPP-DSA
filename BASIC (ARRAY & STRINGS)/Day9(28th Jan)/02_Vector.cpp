#include<iostream>
using namespace std;

#include<vector>

int main()
{
    vector<int> v;

    //We can check its capacity using
    cout<<"Capacity is "<<v.capacity()<<endl;

    //We can add elements is
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);

    cout<<"Capacity is "<<v.capacity()<<endl;
    cout<<"Size is "<<v.size()<<endl;

    //We can Perform all array operations on vector
    cout<<"First Element is"<<v.front()<<endl;

    cout<<"Last Element is "<<v.back()<<endl;

    cout<<"Array is empty(1) or not(0) :"<< v.empty()<<endl;

    cout<<"Element at index 2 is : "<<v.at(2)<<endl;

    //We can print element like
    cout<<"Before Popping"<<endl;
    for(int i:v)
    {
        cout<<" "<<i<<endl;
    }

    v.pop_back();
    cout<<"After Popping"<<endl;
    for(int i:v)
    {
        cout<<" "<<i<<endl;
    }

    //We can delete all Elements using 
    v.clear();
    cout<<"Size After Clear : "<<v.size()<<endl;

    //We can also  initialize a vector having same elements and can copy as well

    vector<int> a(5,2);

    cout<<"Printing vector a"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }

    cout<<endl;

        //Now we want to copy a to another vector this can be done by

        vector<int> b(a);

    cout<<"Printing vector b"<<endl;
    for(int i:b)
    {
        cout<<i<<" ";
    }   


}