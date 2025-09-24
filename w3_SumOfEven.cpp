/*
Q2) A math tutor asks students to write a program where the user enters a number N, 
and the program finds the sum of all even numbers from 1 to N, reinforcing the use of loops.
*/

#include <iostream>
using namespace std;

int main() {
    int N = 10; // Example input
    int sum = 0;

    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers from 1 to " << N << " = " << sum << endl;

    return 0;
}

/*
Sample Output:
Sum of even numbers from 1 to 10 = 30
*/
