#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */

double averages(int test_1, int test_2, int test_3, double best_average){


if ((test_1 + test_2) > (test_2 + test_3)){


    best_average = (test_1 + test_2)/2;



}
else if ((test_2 + test_3) > (test_1 + test_3)){

    best_average = (test_2 + test_3)/2;

}

else{

    best_average = (test_1 + test_3)/2;
}

return best_average;

double average = (test_1 + test_2 + test_3)/3;

}



int main() {
   cout << fixed << setprecision(2);   // so the averages output with two digits after the decimal

   
   double best_average();
   /* Type your code here. Your code must call the function.  */

    int test_1, test_2, test_3;
    double average;

    
    cin >> test_1 >> test_2 >> test_3;
    
    cout << average <<  averages(int test_1, int test_2, int test_3);



   return 0;
}