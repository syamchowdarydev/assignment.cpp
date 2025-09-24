// a) A teacher enters marks for 5 students, and the system displays them all.
#include <iostream>
using namespace std;

int main() {
    int marks[5];
    cout << "Enter marks for 5 students:\n";
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    cout << "\nMarks of students are:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i+1 << ": " << marks[i] << endl;
    }
    return 0;
}

/*
Output:
Enter marks for 5 students:
80 90 75 60 88

Marks of students are:
Student 1: 80
Student 2: 90
Student 3: 75
Student 4: 60
Student 5: 88
*/
