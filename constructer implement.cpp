#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    
    Student() {
        name = "Unknown";
        age = 0;
        grade = 0.0;
        cout << "Default constructor called." << endl;
    }

    Student(string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
        cout << "Parameterized constructor called." << endl;
    }

    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
        grade = obj.grade;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    cout << "--- Creating s1 using Default Constructor ---" << endl;
    Student s1;
    s1.display();

    cout << "\n--- Creating s2 using Parameterized Constructor ---" << endl;
    Student s2("Ali", 20, 88.5);
    s2.display();

    cout << "\n--- Creating s3 using Copy Constructor ---" << endl;
    Student s3 = s2; 
    s3.display();

    return 0;
}

