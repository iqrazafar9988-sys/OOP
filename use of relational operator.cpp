#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    // Constructor
    Distance(int m = 0, int cm = 0) {
        meters = m;
        centimeters = cm;
        // Normalize (e.g., 1 m 120 cm ? 2 m 20 cm)
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        }
    }

    // Display function
    void show() const {
        cout << meters << "m " << centimeters << "cm" << endl;
    }

    // Convert entire distance into centimeters (for comparison)
    int toCentimeters() const {
        return (meters * 100 + centimeters);
    }

    // Operator Overloading: ==
    bool operator==(const Distance &d) const {
        return this->toCentimeters() == d.toCentimeters();
    }

    // Operator Overloading: !=
    bool operator!=(const Distance &d) const {

