//Arjun Gyawali
//kjj97
//11/07/23
//CS1428 Lab
//Lab 10
//Description: this program will find the longest sub-sequence in an array of letters.


#include <iostream>
#include <iomanip>

using namespace std;

char letters[10]; 

void getInput(char letters[], const int SIZE)
{
    cout << "Please enter " << SIZE << " letters:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> letters[i];
    }

    // Append the array with 5 random letters
    for (int i = SIZE; i < SIZE + 5; i++)
    {
        letters[i] = rand() % 26 + 'a';
    }
}

bool isSequence(char letters[], int ind1, int ind2)
{
    bool res = true;
    for(int i = ind1 + 1; i <= ind2; i++)
    {
        if((letters[i] - letters[i - 1] > 1) ||
           (letters[i] - letters[i - 1] < 0))
            res = false;
    }
    return res;
}



void findSubsequence(const int SIZE, int &startIndex, int &endIndex)
{
    int maxLength = 0;
    startIndex = 0;
    endIndex = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (isSequence(letters, i, j) && (j - i) > maxLength)
            {
                maxLength = j - i;
                startIndex = i;
                endIndex = j;
            }
        }
    }
}

void printData(char letters[], const int SIZE, int startIndex, int endIndex)
{
    cout << "The letters in the array are:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << letters[i] << endl;
    }

    cout << "The longest sequence of letters following each other is:" << endl;
    for (int i = startIndex; i <= endIndex; i++)
    {
        cout << letters[i];
    }
    cout << endl;
}

int main()
{
    const int SIZE = 5;
    int startIndex, endIndex;

    srand(time(0));  // Seed the random number generator with the current time

    getInput(letters, SIZE);
    findSubsequence(SIZE + 5, startIndex, endIndex); // Pass SIZE + 5 to consider the appended random letters
    printData(letters, SIZE + 5, startIndex, endIndex); // Pass SIZE + 5 for proper printing

    return 0;
}
