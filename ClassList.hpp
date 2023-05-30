/***********************************************************************
 * Author: Eric Hansson
 * File: ClassList.hpp
 * Date: May-June 2023
 * Purpose: 
 *
***********************************************************************/
#ifndef _CLASS_LIST_HPP_
#define _CLASS_LIST_HPP_

#include<list>
#include "Course.hpp"

class ClassList : private std::list<Course> {
public:
    // Default constuctor
    ClassList() {}

    // Function to calculate the GPA
    double calculateGpa();

};
#endif
