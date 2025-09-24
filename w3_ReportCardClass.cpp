/*
Q6) David is tasked with building a student report card system using a class 
where he stores marks of three subjects, calculates the average, 
and prints pass or fail based on the result.
*/

#include <iostream>
using namespace std;

class ReportCard {
    int m1, m2, m3;
public:
    void setMarks(int a, int b, int c) {
        m1 = a; m2 = b; m3 = c;
    }
    void displayResult() {
        float avg = (m1 + m2 + m3) / 3.0;
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Average: " << avg << endl;
        if (avg >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    ReportCard r;
    r.setMarks(50, 60, 30); // Example input
    r.displayResult();

    return 0;
}

/*
Sample Output:
Marks: 50, 60, 30
Average: 46.6667
Result: Pass
*/
