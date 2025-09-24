/*
Q5) A teacher gives students an assignment to create a Table class 
where the user enters a number and a limit, and the program prints 
the multiplication table of that number up to the given limit.
*/

#include <iostream>
using namespace std;

class Table {
public:
    void printTable(int num, int limit) {
        for (int i = 1; i <= limit; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
};

int main() {
    Table t;
    int number = 5, limit = 10; // Example input
    t.printTable(number, limit);

    return 0;
}

/*
Sample Output:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/
