#include <iostream>
#include <string>
#include <vector>
#include "Student.h"


Student::Student(std::string name, std::string registrationNumber):
        _name(name), 
        _registrationNumber(registrationNumber)
        {
            std::cout << "Hi! My name is " << _name
              << " and my registration number is "
              << _registrationNumber << "." << std::endl;
        }

std::string Student::getName() const{
    return _name;
}
std::string Student::getRegistNumber() const{
    return _registrationNumber;
}

std::vector<Course> Student::get_courses() const{
    return _courses;
}

void Student::register_for(const Course &course){
    _courses.push_back(course);
    std::cout << "I am so excited to be taking "
    << course.getID()
    << " this semester! :-D" << std::endl;
}

void Student::list_courses() const{
    std::cout << _name << " is taking these courses this semester: ";
    for(auto course : _courses){
        std::cout<< course.getID() <<" ";
        std::cout<<std::endl;
    }
}