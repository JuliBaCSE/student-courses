#include <iostream>
#include "Course.h"

Course::Course(std::string courseID, CourseType courseType):
    _courseID(courseID), 
    _courseType(courseType)
    {
        std::cout << "Constructing the course "
        << _courseID << std::endl;   
    }

std::string Course::getID() const{
    return _courseID;
}

// TODO