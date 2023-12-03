#include <iostream>

using namespace std;


void userNumbers(int[], int);
void add(int[],int);
    


int main()
{
     int listSize;
    cout << "Enter Array number of elements: ";
    cin >> listSize;
    int array[listSize];
    userNumbers(array,listSize);
    add(array,listSize);
    cout<<endl;
    for(int i=0;i<listSize;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}


void userNumbers(int array[],int listSize){
    for(int i=0;i<listSize;i++){
        cin>>array[i];
    }
}

void add(int array[], int listSize){
    for(int i =0;i<listSize;i++){
        if(array[i]<30){
            array[i]+=20;
        }
    }
}
