#include <iostream>
using namespace std;

class School {
protected:
    string schoolName;

public:
    void setSchool(string s) {
        schoolName = s;
    }
};

class Teacher : public School {
protected:
    string teacherName;

public:
    void setTeacher(string t) {
        teacherName = t;
    }
};

class SubjectTeacher : public Teacher {
private:
    string subject;

public:
    void setSubject(string sub) {
        subject = sub;
    }

    void display() {
        cout << "School Name   : " << schoolName << endl;
        cout << "Teacher Name  : " << teacherName << endl;
        cout << "Subject Taught: " << subject << endl;
    }
};

int main() {
    SubjectTeacher obj;

    obj.setSchool("APS");
    obj.setTeacher("Ms.alisha");
    obj.setSubject("Mathematics");

    obj.display();

    return 0;
}

