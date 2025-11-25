#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float totalMarks;
    float perc;

public:
	
    void GetDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter total marks: ";
        cin >> totalMarks;

        cout << "Enter percentage: ";
        cin >> perc;

        cin.ignore();
    }

    void PrintDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Total Marks : " << totalMarks << endl;
        cout << "Percentage  : " << perc << "%" << endl;
    }
};

int main() {
    Student s1;        
    s1.GetDetails();    
    s1.PrintDetails(); 

    return 0;
}

