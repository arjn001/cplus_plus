#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */
void averages(int score1, int score2, int score3, double& avgAll, double& avgTwoBest) {
    avgAll = (score1 + score2 + score3) / 3.0;
    
    if (score1 <= score2 && score1 <= score3) {
        avgTwoBest = (score2 + score3) / 2.0;
    } else if (score2 <= score1 && score2 <= score3) {
        avgTwoBest = (score1 + score3) / 2.0;
    } else {
        avgTwoBest = (score1 + score2) / 2.0;
    }
}

int main() {
    cout << fixed << setprecision(2); // so the averages output with two digits after the decimal

    int score1, score2, score3;
    double avgAll, avgTwoBest;

    cin >> score1 >> score2 >> score3;

    averages(score1, score2, score3, avgAll, avgTwoBest);

    cout << avgAll << " " << avgTwoBest << endl;

    return 0;
}
