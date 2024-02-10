#include<iostream>
using namespace std;

#include<deque>

int main()
{
    deque<int> d;

    //We can push and pop from both the end like 
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(8);
    d.push_front(7);
    d.push_front(9);

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    d.pop_back();

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //We can alsio use front , back ,at , empty oprations

    //If we want to delete some part of the deque that can be done by
    d.erase(d.begin(),d.begin()+2);

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<d.size()<<endl;
    cout<<d.max_size();
}