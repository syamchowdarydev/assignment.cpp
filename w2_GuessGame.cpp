/*
Q5) An entertainment app lets users guess a randomly generated number between 1 and 10.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1; // Random number 1-10
    int guess = 7; // Example input

    cout << "Your Guess: " << guess << endl;
    cout << "Secret Number: " << secret << endl;

    if (guess == secret)
        cout << "Correct Guess!" << endl;
    else
        cout << "Wrong Guess! Try Again." << endl;

    return 0;
}

/*
Sample Output (example run):
Your Guess: 7
Secret Number: 3
Wrong Guess! Try Again.
*/
