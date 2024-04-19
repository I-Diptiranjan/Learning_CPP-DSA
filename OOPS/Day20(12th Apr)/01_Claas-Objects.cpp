#include<iostream>
#include "hero1.cpp"
using namespace std;


class Hero{

    //Default Constructor : no return type, called during the object creation
    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    //Static
    static int timeToComplete;

    //Parameterized constructor 
    Hero(int health){
        cout<<"Parameterized constructor called"<<endl;
        this->health=health;
    }
    Hero(int health,char level){
        cout<<"Parameterized constructor 2 called"<<endl;
        this->health=health;
        this->level=level;
    }
    //If you are creating any constroctor then you have to write the non-parameterized constructor also

    //Copy Constructor 
    // Hero(Hero& obj){
    //     cout<<"Copy constructor called"<<endl;
    //     this->health=obj.health;
    //     this->level=obj.level;
    // }

    //Default copy Constructor does shallow copying while artificial copy constructor does deep copy

    
    
    //properties
    //By default access modifiers are private
     
    private:
    int health;
    char level;

    public:
    void Print(){
        cout<<"Health : "<<this->health<<endl;
        cout<<"Level : "<<this->level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char l)
    {
        level=l;
    }


    //Destructor : destructor is called automatically for static allocations. nut objects created dynamically need to be call manually (eg. delete rama)
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

    //Static Function : Only able to use static datamembers
    static int getTime(){
        return timeToComplete;
    }
};

//Initializing Static Datamember
int Hero::timeToComplete = 5;

//we can also create classess out side the file'

int main(){
    
    //object of hero
    //static instances
    Hero rama(12,'F');
    Hero1 h2;

    
    // rama.setHealth(5);
    // rama.setLevel('A');

    // Hero fama(rama);

    // fama.Print();




    //Dynamic instances
    // Hero* sama = new Hero();
    // Hero* dama = new Hero(23);
    // Hero* kama = new Hero(12,'D');
    

    // cout<<"size of rama : "<<sizeof(rama)<<endl; 
    // cout<<"size of h2 : "<<sizeof(h2)<<endl; //in case of empty class the size is 1.


    // sama->setLevel('B');
    // sama->setHealth(6);

    cout<<"Rama "<<rama.getHealth()<<endl;
    cout<<"Rama "<<rama.getLevel()<<endl;

    // cout<<"Sama "<<sama->getHealth()<<endl;
    // cout<<"Sama "<<sama->getLevel()<<endl;

    // cout<<"Dama "<<dama->getHealth()<<endl;
    // cout<<"Dama "<<dama->getLevel()<<endl;

    // cout<<"Kama "<<kama->getHealth()<<endl;
    // cout<<"Kama "<<kama->getLevel()<<endl;




    // cout<<(*sama).getHealth()<<endl;
    // cout<<(*sama).getLevel()<<endl;

    cout<<"Static Member "<<Hero::timeToComplete<<endl;
    cout<<"Static Member "<<rama.timeToComplete<<endl;
    rama.timeToComplete = 10;
    cout<<"Static Member "<<Hero::timeToComplete<<endl;
    cout<<"Static Member "<<rama.timeToComplete<<endl;

    cout<<"Static Member "<<Hero::getTime()<<endl;

    return 0;
}