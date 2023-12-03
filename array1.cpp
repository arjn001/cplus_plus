#include <iostream>
using namespace std;


int main(){

int firstArray[5] = {12, 32, 45, 67, 10};

for(int i = 0; i < 5; i++){


if (firstArray[i] < 20){


    cout << firstArray[i] + 10 << endl;

}
else{


    cout << firstArray[i] << endl;
}


}


    return 0; 
}