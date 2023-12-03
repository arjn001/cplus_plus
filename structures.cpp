#include <iostream>
using namespace std;



struct New{

string name;
int a;



};

int main(){

New n[3];



for (int i = 0; i < 3; i++){

    cout << "Name" << endl;
    cin >> n[i].name;
    cin >> n[i].a;


}

for (int j = 0; j < 3; j++){


    cout << " You are  " << n[j].name << " and " << n[j].a <<  endl;

}

    return 0;
}