/********************************************************************
 * Author: Eric Hansson
 * File: ClassList.cpp
 * Date: May-June 2023
 * Purpose: 
 *
 ********************************************************************/
#include "ClassList.hpp"

#include<list>

using namespace std;

double
ClassList::calculateGpa(){
    // Declared variable to keep track of the grade points and credits
    int totalCredits;
    int totalGradePoints;

    for(Course &var : *this){
        // If grade is A, then that is 4
        if(var.getGrade == 'A'){
            totalGradePoints += 4 * var.getCredit();
        }
        else if(var.getgrade == 'B'){
            totalGradePoints += 3 * var.getCredit();
        }
        else if(var.getgrade == 'C'){
            totalGradePoints += 2 * var.getCredit();
        }
        else if(var.getgrade == 'D'){
            totalGradePoints += 1 * var.getCredit();
        }
        else{
            totalGradePoints += 0 * var.getCredit();
        }

        totalCredits += var.getCredit();
    }

    return (totalGradePoint/totalCredits)
}

istream
ClassList::read(istream &is){

}
