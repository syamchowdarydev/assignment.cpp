/*
Q5) A travel agency provides a currency converter tool on their website. 
Tourists can enter the amount in USD to check equivalent values 
in Indian Rupees (INR) and Euros (EUR).
*/

#include <iostream>
using namespace std;

int main() {
    float usd = 100; // Example input
    float inr = usd * 83.0;  // Assume 1 USD = 83 INR
    float eur = usd * 0.92;  // Assume 1 USD = 0.92 EUR

    cout << usd << " USD = " << inr << " INR" << endl;
    cout << usd << " USD = " << eur << " EUR" << endl;

    return 0;
}

/*
Sample Output:
100 USD = 8300 INR
100 USD = 92 EUR
*/
