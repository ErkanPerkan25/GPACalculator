// Author: Eric Hansson
// Date: 2023 May-June
// File: main.cpp
// Purpose: The purpose of this file is to execute the program to
// calculate GPA with either a file or manually put in the classes

#include <iostream>
#include <fstream>
#include <list>

#include "Course.hpp"
#include "ClassList.hpp"

using namespace std;

double calculateGpa(list<Course> &list){
// Declared variable to keep track of the grade points and credits
    int totalCredits;
    int totalGradePoints;

    for(Course &var : list){
        // If grade is A, then that is 4
        if(var.getGrade() == 'A'){
            totalGradePoints += (4 * var.getCredit());
        }
        else if(var.getGrade() == 'B'){
            totalGradePoints += 3 * var.getCredit();
        }
        else if(var.getGrade() == 'C'){
            totalGradePoints += 2 * var.getCredit();
        }
        else if(var.getGrade() == 'D'){
            totalGradePoints += 1 * var.getCredit();
        }
        else{
            totalGradePoints += 0 * var.getCredit();
        }

        totalCredits += var.getCredit();
    }

    return (totalGradePoints/totalCredits);
}

int main(int argc, char *argv[]){
    list<Course> classes;
    //ClassList classes;

    cout << "Welcome to the GPA Calculator!" << endl;
    cout << "" << endl;

    // Input for what way to calculate GPA
    char input;
    cout << "Press 1 to read in a file, or Press 2 to manually put in the grade." << endl;
    cin >> input;

    if(input == '1'){
        // Do calculations by a file
        // Declares the varibale for file name
        string fileName;
        cout << "Please enter the name of the file: " << endl;
        cin >> fileName;
        cout << "" << endl;

        ifstream inputFile(fileName);

        // If file name is not right, give error message
        if(!inputFile){
            cout << "Could not find the file! Try again." << endl;
            return 1;
        }
    
        // A course object
        Course course;
        
        // Reads in the first course from the input file
        inputFile >> course.getCourseName();
        inputFile >> course.getGrade();
        inputFile >> course.getCredit();

        // Keeps reading in the data from the input file
        while(inputFile){
            // Adds the course to a list of courses
            classes.push_back(course);

            inputFile >> course.getCourseName();
            inputFile >> course.getGrade();
            inputFile >> course.getCredit();
            
        }

        // Debugging
        /*
        for(auto var : classes){
            cout << var.getCourseName() << " " << var.getGrade() << " " << var.getCredit() << endl;
        }
        */

    }

    else{
        // get every credit and grade in manually
        cout << "Enter as the example: " << "Math A 3" << endl;
        cout << "Type 'add' to add a class and 'done' when done" << endl;
        
        Course courseMan;
        string input;

        // Should be able to put multiplie classes after each other 
        while(cin){
            // Prints out this every time the user will add a class
            cout << "Enter command: ";
            cin >> input;
            if(input == "add"){
                cout << "Enter the course: ";
                cin >> courseMan.getCourseName();
                cin >> courseMan.getGrade();
                cin >> courseMan.getCredit();

                // Adds the class to the list of classes
                classes.push_back(courseMan);
            }
            // When done adding course, hope out of the loop
            else if(input == "done")
                break;
        }

        cout << "Your GPA is: " << calculateGpa(classes) << endl;

        //Debugging
        /*
        for(auto var : classes){
            cout << var.getCourseName() << " " << var.getGrade() << " " << var.getCredit() << endl;
        }
        */
    }

    return 0;
}

