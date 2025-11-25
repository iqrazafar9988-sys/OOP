#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        grade = 0.0;
        cout << "Default constructor called." << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
        cout << "Parameterized constructor called." << endl;
    }

    // 3. Copy Constructor
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
        grade = obj.grade;
        cout << "Copy constructor called." << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    cout << "--- Creating s1 using Default Constructor ---" << endl;
    Student s1;
    s1.display();

    cout << "\n--- Creating s2 using Parameterized Constructor ---" << endl;
    Student s2("Alice", 20, 88.5);
    s2.display();

    cout << "\n--- Creating s3 using Copy Constructor ---" << endl;
    Student s3 = s2; // Copy constructor invoked
    s3.display();

    return 0;
}

