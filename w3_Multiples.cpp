/*
Q3) A practice assignment asks learners to input a number 
and print all its multiples between 1 and 100.
*/

#include <iostream>
using namespace std;

int main() {
    int num = 7; // Example input

    cout << "Multiples of " << num << " between 1 and 100: ";
    for (int i = num; i <= 100; i += num) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

/*
Sample Output:
Multiples of 7 between 1 and 100: 7 14 21 28 35 42 49 56 63 70 77 84 91 98
*/
