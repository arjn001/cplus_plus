#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */
double calculateAverage(int test1, int test2, int test3) {
    return (test1 + test2 + test3) / 3.0;
}

double calculateBestAverage(int test1, int test2, int test3) {
    int sum = test1 + test2 + test3;
    int minScore = min(min(test1, test2), test3);
    return (sum - minScore) / 2.0;
}

int main() {
    cout << fixed << setprecision(2); // so the averages output with two digits after the decimal

    int test1, test2, test3;
    cin >> test1 >> test2 >> test3;

    double average = calculateAverage(test1, test2, test3);
    double bestAverage = calculateBestAverage(test1, test2, test3);

    cout << average << " " << bestAverage << endl;

    return 0;
}
