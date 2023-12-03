//Arjun Gyawali
//kjj97
//Pre_lab_10
// 11/07/2023


#include <iostream>

using namespace std;

// Function prototype
void multiplyArrayElements(int array[], int size, int multiplier);

int main()
{
    const int SIZE = 10;
    int myArray[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int multiplyMe = 5;

    // Call the function to multiply array elements
    multiplyArrayElements(myArray, SIZE, multiplyMe);

    // Print the modified array
    for (int i = 0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
void multiplyArrayElements(int array[], int size, int multiplier)
{
    for (int i = 0; i < size; i++)
    {
        array[i] *= multiplier;
    }
}
