// Author: Eric Hansson
// Date: 2023 May
// File: main.cpp
// Purpose: 

#include <iostream>
#include <fstream>
#include <list>

#include "Course.hpp"

using namespace std;

int main(int argc, char *argv[]){
    list<Course> classes;

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
        for(auto var : classes){
            cout << var.getCourseName() << " " << var.getGrade() << " " << var.getCredit() << endl;
        }

    }

    else{
        // get every credit and grade in manually
        cout << "Enter as the example: " << endl;
        cout << "Math A 3.0";
        while(cin){
                        
        }
    }

    return 0;
}

