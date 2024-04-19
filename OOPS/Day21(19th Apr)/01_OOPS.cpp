#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge() const { return this->age; }

    void setWeight(int weight) {      this->weight = weight;
    }


};
class Male : public Human{
    public:
    string color;
    void sleep(){
        cout << "I am sleeping" << endl;
    }
};

int main(){
   Male m;
   cout<<m.age <<endl<< m.weight<<endl<<m.height<<endl<<m.color<<endl;
   m.sleep();
   m.setWeight(100);
   m.color="black";
    cout<<m.age <<endl<< m.weight<<endl<<m.height<<endl<<m.color<<endl;
    

    return 0;
};