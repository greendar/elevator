//elevClass.cpp
#include <iostream>
using namespace std;


class Elevator {
    int floor;
    bool doorClosed;

public:
    Elevator();
    void returnFloorState();

};

Elevator::Elevator(){
    floor = 1; // initial floor state is 1
    doorClosed = true;


}

void Elevator::returnFloorState(){

}
