/*****************************************************************
 * Author: Eric Hansson
 * File: Course.hpp
 * Date: May 2023
 * Purpose: This is a class which is used to store and use the data
 * of a University course, which then be used to calculate GPA
 *
*****************************************************************/
#ifndef _COURSE_HPP_
#define _COURSE_HPP_

class Course {
private:
    std::string _courseName;
    char _grade;
    double _credit;

public:
    // Default constuctor
    Course() : _courseName(""), _grade(' '), _credit(0) {}

    Course(std::string name, char grade, double credit)
        : _courseName(name), _grade(grade), _credit(credit) {}

    // Accessors of the class
    const std::string &getCourseName() const {return _courseName;}
    const char &getGrade() const {return _grade;}
    const double &getCredit() const {return _credit;}
    
    // Modifiers of the class
    std::string &getCourseName() {return _courseName;}
    char &getGrade() {return _grade;}
    double &getCredit() {return _credit;}

};
#endif
