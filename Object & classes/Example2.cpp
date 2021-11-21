#include<iostream>
using namespace std;

class Room{

    private:
    double length;
    double breadth;
    double height;

    public:
    void initData(double len, double brt, double hgt){
        length = len;
        breadth = brt;
        height = hgt;
    }
    double calculateArea(){
        return length * breadth;
    }
    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    Room room1;

    room1.initData(42.5, 30.8, 19.2);

    cout<<"Area of room: "<<room1.calculateArea()<<endl;
    cout<<"volume of room: "<<room1.calculateVolume()<<endl;
    return 0;
}