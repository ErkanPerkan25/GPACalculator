#ifndef _COURSE_HPP_
#define _COURSE_HPP_

class Course {
private:
    std::string _courseName;
    char _grade;
    double _credit;

public:
    // Default constuctor
    Course() : _courseName(""), _grade(''), _creit(0) {}

    Course(std::string name, char grade, double credit)
        : _courseName(name), _grade(grade), _credit(credit) {}

    // Accessors and modifiers
    
}
#endif
