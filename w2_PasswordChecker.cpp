/*
Q3) A login system gives feedback if a password is strong based on length.
(Strong if length >= 8, otherwise Weak)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "mypassword"; // Example input
    if (password.length() >= 8)
        cout << "Password is Strong" << endl;
    else
        cout << "Password is Weak" << endl;

    return 0;
}

/*
Sample Output:
Password is Strong
*/
