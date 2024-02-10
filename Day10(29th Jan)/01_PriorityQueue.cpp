#include<iostream>
using namespace std;

#include<queue>

int main(){

    priority_queue<int> maxi; // Max Heap

    priority_queue<int,vector<int> , greater<int>> mini;  //Min Heap

    maxi.push(2);
    maxi.push(0);
    maxi.push(1);
    maxi.push(5);

    
    mini.push(2);
    mini.push(0);
    mini.push(1);
    mini.push(5);

    int size = maxi.size();
    int mSize = mini.size();

    for(int i=0;i<size;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;

    for(int i=0;i<mSize;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
}