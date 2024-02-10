 #include<iostream>
using namespace std;

#include<stack>

int main(){

    //We can perform push and pop opraton ;

    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(7);

    cout<<"To Element is "<<s.top()<<endl;

    s.pop();

    cout<<"To Element is "<<s.top();
}