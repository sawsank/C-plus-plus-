#include<iostream>
using namespace std;

//parent class
class Animal{
    public:

    void eat(){
        cout<<"i can eat"<<endl;

    }
    void sleep(){
        cout<<"i can sleep"<<endl;
    }
};

//derived class
class Dog : public Animal{
    public:

    void bark(){
        cout<<"i can bark"<<endl;
    }
};
int main(){
    Dog dog1;

    dog1.eat();
    dog1.sleep();

    dog1.bark();
    return 0;
}