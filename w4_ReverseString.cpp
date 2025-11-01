// f) A basic text processing tool needs to reverse a string using pointer arithmetic.
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    char* start = str;
    char* end = str + strlen(str) - 1;
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}

/*
Output:
Enter a string: hello
Reversed string: olleh
*/
