#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"

class Student {
private:
    std::string _name;
    const std::string _registrationNumber;
    std::vector<Course> _courses;

    friend class StudentCard;

public:
    std::string getName() const;
    std::string getRegistNumber() const;

    std::vector<Course> get_courses() const;
    void list_courses() const;

    void register_for(const Course &course);

    Student(std::string name, std::string registrationNumber);


    // TODO
};

#endif // STUDENT_H