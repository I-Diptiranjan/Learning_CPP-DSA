#include<iostream>
using namespace std;

#include<list>

int main(){

    //We can perform push and pop opraton from both front and back;

    list<int> l;
    l.push_back(2);
    l.push_back(4);
    l.push_back(7);
    l.push_front(1);
    l.push_front(4);
    l.push_front(9);
    l.push_front(1);

    for(int i :l){
        cout<<i<<" ";
    }
    cout<<endl;

    //We can delete a specific part usinng erase

    l.erase(l.begin());

    for(int i :l){
        cout<<i<<" ";
    }
    cout<<endl;

    //Copying a List

    list<int> l2(l);

    for(int i :l2){
        cout<<i<<" ";
    }
    cout<<endl;
}