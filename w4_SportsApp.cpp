// c) A sports app finds the highest score from a list of game scores.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of scores: ";
    cin >> n;

    vector<int> scores(n);

    cout << "Enter scores:\n";
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int maxScore = scores[0];
    for(int i = 1; i < n; i++) {
        if(scores[i] > maxScore)
            maxScore = scores[i];
    }

    cout << "Highest score is: " << maxScore << endl;
    return 0;
}

/*
Output:
Enter number of scores: 5
Enter scores:
50 88 92 76 85
Highest score is: 92
*/