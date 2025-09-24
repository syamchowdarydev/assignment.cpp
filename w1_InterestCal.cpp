/*
Q3) A bank is building an online tool where customers can estimate 
the interest they'll earn on a fixed deposit. 
The user enters the principal, rate of interest, and duration in years.
Formula: SI = (Principal * Rate * Time) / 100
*/

#include <iostream>
using namespace std;

int main() {
    float principal = 10000, rate = 5, time = 3, interest;
    interest = (principal * rate * time) / 100;

    cout << "Principal: " << principal << endl;
    cout << "Rate: " << rate << "%" << endl;
    cout << "Time: " << time << " years" << endl;
    cout << "Interest Earned: " << interest << endl;

    return 0;
}

/*
Sample Output:
Principal: 10000
Rate: 5%
Time: 3 years
Interest Earned: 1500
*/
