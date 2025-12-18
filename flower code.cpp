#include <iostream>
using namespace std;

class Flower {
protected:
    int totalFlowers;
};

class Rose : public Flower {
public:
    int roses;

    Rose(int r) {
        roses = r;
    }
};

class Jasmine : public Flower {
public:
    int jasmines;

    Jasmine(int j) {
        jasmines = j;
    }
};

int main() {
    int r, j;

    cout << "Enter number of roses: ";
    cin >> r;

    cout << "Enter number of jasmines: ";
    cin >> j;

    Rose roseObj(r);
    Jasmine jasmineObj(j);

    int total = roseObj.roses + jasmineObj.jasmines;

    cout << "\nNumber of Roses: " << roseObj.roses;
    cout << "\nNumber of Jasmines: " << jasmineObj.jasmines;
    cout << "\nTotal number of flowers in the basket: " << total;

    return 0;
}

