/*
Q2) You're creating a weather app that lets users choose between Celsius and Fahrenheit. 
When a user enters the temperature in Celsius, the app converts it to Fahrenheit.
*/

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    celsius = 30; // Example input
    fahrenheit = (celsius * 9/5) + 32;

    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}

/*
Sample Output:
30 Celsius = 86 Fahrenheit
*/
