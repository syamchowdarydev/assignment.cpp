/*
Q1) A beginner coding tool checks if a user’s entered number is even or odd 
and displays a message.
*/

#include <iostream>
using namespace std;

int main() {
    int num = 7; // Example input
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;

    return 0;
}

/*
Sample Output:
7 is Odd
*/
