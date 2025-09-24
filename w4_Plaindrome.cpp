// b) A chatbot checks if a user's entered word is a palindrome.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string rev = string(word.rbegin(), word.rend());

    if(word == rev)
        cout << word << " is a palindrome.\n";
    else
        cout << word << " is not a palindrome.\n";
    return 0;
}

/*
Output:
Enter a word: level
level is a palindrome.
*/
