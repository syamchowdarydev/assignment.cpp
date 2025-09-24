/*
Q4) A cashier inputs sales amounts, and the system keeps adding them until 0 is entered.
*/

#include <iostream>
using namespace std;

int main() {
    float amount, total = 0;
    float inputs[] = {100.5, 250, 300, 0}; // Example inputs

    for (int i = 0; inputs[i] != 0; i++) {
        total += inputs[i];
    }

    cout << "Total Sales: " << total << endl;

    return 0;
}

/*
Sample Output:
Total Sales: 650.5
*/
