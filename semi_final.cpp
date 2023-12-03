        #include <iostream>
        #include <iomanip>
        using namespace std;

        double averages(double score1, double score2, double score3, double& bestAverages) {
        
            double averageAll = (score1 + score2 + score3) / 3.0;
            double minScore = min(min(score1, score2), score3);
            bestAverages = (score1 + score2 + score3 - minScore) / 2.0;
            return averageAll;
        }

        int main() {
        
            double test1, test2, test3, avgAll, avgBest2;
            cin >> test1 >> test2 >> test3;
            
            avgAll = averages(test1, test2, test3, avgBest2);
            cout << fixed << setprecision(2);
            cout << avgAll << " " << avgBest2 << endl;
            return 0;
        }