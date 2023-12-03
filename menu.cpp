#include <iostream>
using namespace std;



    void printFunction(){

    cout << "Today's Menu" << endl;
    cout << "1) Gumbo" << endl;
    cout << "2) Jambalaya" << endl;
    cout << "3) Quit" << endl;



}

int main(){

bool quit = false;
int choice;

    while (!quit){

        cout << "Enter Choice ";
        cin >> choice;

        if(choice == 3){


            cout << "Goodbye";
            quit = true;


        }
       else{
             
             if (choice == 1){


                cout << "Order: Gumbo"; 

             }

            else if (choice == 2){
                

                cout << "Order: Jambalaya";

            }
    


            } 



       } 





    



    return 0;


}