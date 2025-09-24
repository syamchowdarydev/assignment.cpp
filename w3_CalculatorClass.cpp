/*
Q4) Ali’s teacher asks him to design a simple calculator using a class 
with functions for add, subtract, multiply, and divide, 
so he can practice functions and switch statements.
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) { return a + b; }
    float subtract(float a, float b) { return a - b; }
    float multiply(float a, float b) { return a * b; }
    float divide(float a, float b) { return b != 0 ? a / b : 0; }
};

int main() {
    Calculator calc;
    float num1 = 12, num2 = 4;
    char op = '/';

    float result;
    switch (op) {
        case '+': result = calc.add(num1, num2); break;
        case '-': result = calc.subtract(num1, num2); break;
        case '*': result = calc.multiply(num1, num2); break;
        case '/': result = calc.divide(num1, num2); break;
        default: cout << "Invalid Operator"; return 0;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}

/*
Sample Output:
12 / 4 = 3
*/
