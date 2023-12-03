#include <iostream>

using namespace std;

void displayRecords(string names[], int studentID[], int scores[])
{
    int SIZE =3;
    cout << "|Names|  |Student ID|  |Scores|" << endl;
    for(int i =0; i <SIZE; i++)
    {
        cout << names[i] << "          " << studentID[i] << "          " << scores[i] << endl;
    }
}

void updateRecords(string names[], int studentID[], int scores[])
{
    int SIZE =3;
    int updateS, newScore;
    string conti;
    cout << " |Names|  |Student ID|  |Scores|" << endl;
    for(int i =0; i <SIZE; i++)
    {
        cout << names[i] << "     " << studentID[i] << "     " << scores[i] << endl;
    }
    do
    {
    cout << "Enter the ID of the student that you want to update the score of: " << endl;
    cin >> updateS;
    cout << "Enter the new score " << endl;
    cin >> newScore;
    for(int i =0; i <SIZE; i++)
    {
        if(updateS == studentID[i])
        {
            scores[i] = newScore;
        }

        cout << "Do you want to update more records? (Y/N): ";
        cin >> conti;
        }
    }
    while(conti == "y" || conti == "Y");
}
int main()
{
    int SIZE =3;
    string names[SIZE];
    int studentID[SIZE], scores[SIZE], choice;
    string conti;
    //Getting data
    cout << "Enter 3 names, their ID and score " << endl;
    for(int i=0; i < SIZE; i++)
    {
        cin >> names[i] >> studentID[i] >> scores[i];
    }
    do
    {
    // Getting user's choice
    cout << " \nEnter 1 to Display records \n      2 to Update Scores \n";
    cin >> choice;
    if(choice == 1){
            //calling display function
        displayRecords(names, studentID, scores);
    }
    else if(choice == 2){
        // calling update function
        updateRecords(names, studentID, scores);
    }
    else{
        cout << "Invalid entry! Enter 1 or 2.";
    }
    cout << "\nDo you want to continue? (Y/N): ";
    cin >> conti;
    }
    while(conti=="y" || conti == "Y");

    return 0;
}