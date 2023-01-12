#include <iostream>
#include "room.hpp"

using namespace std;

int main() {

    // create an instance of the Room class
    Room room1(42.5, 30.8, 19.2);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}