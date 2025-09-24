/*
Q1) A coding learner is given a task to input a number and print its reverse 
(e.g., 123 → 321), helping them understand digit manipulation in C++.
*/

#include <iostream>
using namespace std;

int main() {
    int num = 123; // Example input
    int reverse = 0, digit;

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed Number: " << reverse << endl;

    return 0;
}

/*
Sample Output:
Reversed Number: 321
*/
