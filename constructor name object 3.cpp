  
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // 2. Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // 3. Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called!" << endl;
    }

    // Function to display details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    cout << "Creating student1 (default constructor)..." << endl;
    Student student1;   // Calls default constructor
    student1.display();

    cout << "\nCreating student2 (parameterized constructor)..." << endl;
    Student student2("Iqra", 19);   // Calls parameterized constructor
    student2.display();

    cout << "\nCreating student3 (copy constructor)..." << endl;
    Student student3(student2);   // Calls copy constructor
    student3.display();

    cout << "\nEnd of program." << endl;
    return 0;
}

