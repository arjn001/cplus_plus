//Arjun Gyawali
//kjj97
//11/28/23
//C++ program that performs various operations on an array of integers.
// the program uses the functionalities:
//Fill Array Function
//Display Array Function
//Reverse Array Function
//Find Maximum and Minimum Function

#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size for the array

void fillArray(int arr[], int size) {
    cout << "Enter " << size << " integers to fill the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray(const int arr[], int size) {
    cout << "Array contents:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void findMaxMin(const int arr[], int size, int &max, int &min) {
    if (size <= 0) {
        // Return if array size is invalid
        cout << "Invalid array size\n";
        return;
    }

    max = arr[0]; // Initialize max with first element
    min = arr[0]; // Initialize min with first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size entered. Exiting.\n";
        return 1;
    }

    fillArray(arr, size);
    displayArray(arr, size);

    reverseArray(arr, size);
    cout << "Array after reversing:\n";
    displayArray(arr, size);

    int max, min;
    findMaxMin(arr, size, max, min);
    cout << "Maximum value in the array: " << max << endl;
    cout << "Minimum value in the array: " << min << endl;

    return 0;
}
