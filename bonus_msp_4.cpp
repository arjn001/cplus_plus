//File Name: bonus_msp_4.cpp
//Author: Arjun Gyawali
//Purpose: A course grading program that reads a csv file with student info and grade data 
// processes them saving THE OUTPUT into a different csv file.



#include <iostream>
#include <fstream>

using namespace std;


// Structure to store student information
struct Student {
    string studentName;
    double marks;
    char grade;
};


// Function to calculate grade based on marks
char calculateGrade(double marks) {
     if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else if (marks >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}


// Function to process grades for all students

void processGrades(Student students[], int numStudents) {

   for (int i = 0; i < numStudents; ++i) {
        students[i].grade = calculateGrade(students[i].marks);
    }
}


// Function to display student grades
void displayStudentGrades(Student students[], int numStudents) {

   for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << students[i].studentName << " Grade: " << students[i].grade << endl;
    }
}

int main() {
    const int maxStudents = 100; // Maximum number of students
    string inputFileName = "input.csv"; // input file name
    string outputFileName = "output.csv"; // output file name


    // open input file

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cout << "Error opening the file: " << inputFileName << endl; //Display error if unable to open input file
        return 1;
        return 1;
    }

    Student students[maxStudents]; // array to store student data
    int numStudents = 0;


    // Read student data from input file
    while (inputFile >> students[numStudents].studentName >> students[numStudents].marks) {
        numStudents++;
        if (numStudents >= maxStudents) {
            cout << "Maximum number of students reached!" << endl;
            break;
        }
    }
    inputFile.close();


// Processing grades for all students
    processGrades(students, numStudents);

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cout << "Error Creating a File: " << outputFileName << endl;
        return 1;
    }


     // Writing student names and grades to output file

    for (int i = 0; i < numStudents; ++i) {
        outputFile << students[i].studentName << "," << students[i].grade << endl;
    }
    outputFile.close();

    cout << "Output written to: " << outputFileName << endl;

    return 0;
}
