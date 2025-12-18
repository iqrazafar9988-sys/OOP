#include <iostream>
using namespace std;

class Ford {
public:
    string brandName = "Ford";

    virtual void vehicleType() {
        cout << "Vehicle Type: Four Wheeler" << endl;
    }
};

class Car : public Ford {
public:
    void vehicleType() override {
        cout << "Vehicle Type: Sports Vehicle" << endl;
    }
};

int main() {
    Ford *f;
    Car c;

    f = &c;

    cout << "Brand Name: " << f->brandName << endl;
    f->vehicleType();   

    return 0;
}

