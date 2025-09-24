/*
Q6) You're developing a mobile app for group dinners. 
After entering the total bill, the app calculates how much each friend should pay, 
including tax and tip.
*/

#include <iostream>
using namespace std;

int main() {
    float totalBill = 2000; // Example input
    float tax = 0.05 * totalBill;   // 5% tax
    float tip = 0.10 * totalBill;   // 10% tip
    int friends = 4;

    float finalBill = totalBill + tax + tip;
    float perPerson = finalBill / friends;

    cout << "Total Bill (without tax & tip): " << totalBill << endl;
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Final Bill: " << finalBill << endl;
    cout << "Each Friend Pays: " << perPerson << endl;

    return 0;
}

/*
Sample Output:
Total Bill (without tax & tip): 2000
Tax: 100
Tip: 200
Final Bill: 2300
Each Friend Pays: 575
*/
