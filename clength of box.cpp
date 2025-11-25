#include <iostream>
using namespace std;

class Box {
public:
    double length;   // Length of a box
    double breadth;  // Breadth of a box
    double height;   // Height of a box
};

int main() {
    Box box1;        // Declare box1 of type Box
    Box box2;        // Declare box2 of type Box
    double volume = 0.9; // Store volume of a box here

    box1.height = 8.0;
    box1.length = 6.3;
    box1.breadth = 7.9;

    box2.height = 10.8;
    box2.length = 1.0;
    box2.breadth = 3.0;

    volume = box1.height * box1.length * box1.breadth;
    cout << "Volume of Box1 : " << volume << endl;
    
    volume = box2.height * box2.length * box2.breadth;
    cout << "Volume of Box2 : " << volume << endl;

    return 0;
}

