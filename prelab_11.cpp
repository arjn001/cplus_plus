//Arjun Gyawali
//kjj97
//11/14/23
//Pre_lab 11
//Lab Section: 10



#include <iostream>
#include <fstream>

using namespace std;

struct Rabbit
{
    string name;
    string breed;
    char gender;
    int age;
};

int main()
{
    // Create a Rabbit object named "rabbit1" and initialize its attributes.
    Rabbit rabbit1;
    rabbit1.name = "Floppy";
    rabbit1.gender = 'M';
    rabbit1.age = 2;
    rabbit1.breed = "Rex";

    // Create a Rabbit object named "rabbit2."
    Rabbit rabbit2;

    // Prompt the user to enter the rabbit's name, age, gender, and breed for "rabbit2."
    cout << "Enter the rabbit's name: ";
    cin >> rabbit2.name;
    cout << "Enter the rabbit's age: ";
    cin >> rabbit2.age;
    cout << "Enter the rabbit's gender (M/F): ";
    cin >> rabbit2.gender;
    cout << "Enter the rabbit's breed: ";
    cin >> rabbit2.breed;

    // Print "rabbit1" and "rabbit2" objects to the console.
    cout << "rabbit1 - Name: " << rabbit1.name << ", Gender: " << rabbit1.gender << ", Age: " << rabbit1.age << ", Breed: " << rabbit1.breed << endl;
    cout << "rabbit2 - Name: " << rabbit2.name << ", Gender: " << rabbit2.gender << ", Age: " << rabbit2.age << ", Breed: " << rabbit2.breed << endl;

    return 0;
}
