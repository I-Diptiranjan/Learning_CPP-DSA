#include<iostream>
using namespace std;

main(){
    // There is a difference between cin and cin.get() .. cin.get() takes all characters as a input like space and tabs also as a character.

     
    int a;
    a= cin.get();
    cout<<a<<endl;

    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
    {
        cout<<"Small"<<endl;

    }
    else if(ch >='A' && ch <= 'Z')
    {
        cout<<"Capital"<<endl;
    }
    else{
        cout<<"Special"<<endl;
    }

    
}