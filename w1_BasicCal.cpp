/*
Q4) Ali is a student learning C++ in his first programming course. 
His teacher asks him to create a basic calculator that takes two integers 
and an arithmetic operator (+, -, *, /) as input. 
The program should perform the chosen operation and display the result.
*/

#include <iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 5;
    char op = '*';
    int result;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num1 / num2;

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}

/*
Sample Output:
10 * 5 = 50
*/
