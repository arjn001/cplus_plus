//File Name: msp_4.cpp
//Author: Arjun Gyawali
//Purpose: The given program ask for the student info (name, marks obtained) and prints the final letter grade



#include <iostream>
using namespace std;

//declaring a structure with student name, marks and the grade
struct Student {
    string studentName;
    double marks;
    char grade;
};


// the function to calculate letter grade based on the marks obtained

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


// function to process grades based on the marks
void processGrades(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        students[i].grade = calculateGrade(students[i].marks);
    }
}


// function to display the obtained grades
void displayStudentGrades(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << students[i].studentName << " Grade: " << students[i].grade << endl;
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;



// defining the structure with array

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the name for student " << i + 1 << ": ";
        cin >> students[i].studentName;

        cout << "Enter the marks for student " << students[i].studentName << ": ";
        cin >> students[i].marks;
    }

//calling functions 
    processGrades(students, numStudents);
    displayStudentGrades(students, numStudents);

    return 0;
}
