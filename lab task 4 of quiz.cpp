#include <iostream>
using namespace std;

class Quiz {
public:
    int quizNumber;
    int marks;

    // Parameterized constructor
    Quiz(int q, int m) {
        quizNumber = q;
        marks = m;
    }

    // Function to display data
    void display() {
        cout << "Quiz Number: " << quizNumber << ", Marks: " << marks << endl;
    }
};

int main() {
    // Array of objects using parameterized constructors
    Quiz obj[] = { Quiz(1, 10), Quiz(2, 20), Quiz(3, 30) };

    cout << "Quiz Details:\n";
    for (int i = 0; i < 3; i++) {
        obj[i].display();
    }

    return 0;
}

