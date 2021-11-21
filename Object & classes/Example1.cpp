#include<iostream>
using namespace std;

class Room{

    public:
    double length;
    double breadth;
    double height;

    double calculateArea(){
        return length * breadth;
    }

    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    //create object of Room class
    Room room1;

    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    cout<<"Area of room ="<<room1.calculateArea()<<endl;
    cout<<"volume of the room="<<room1.calculateVolume()<<endl;

    return 0;
}