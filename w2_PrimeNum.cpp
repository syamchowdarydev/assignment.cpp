/*
Q6) A math tutoring app lists all prime numbers between 10 and 50 for student practice.
*/

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Prime numbers between 10 and 50: ";
    for (int i = 10; i <= 50; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

/*
Sample Output:
Prime numbers between 10 and 50: 11 13 17 19 23 29 31 37 41 43 47
*/
