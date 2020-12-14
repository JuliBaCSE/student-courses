#include <iostream>

#include "Student.h"
#include "Course.h"
#include "StudentCard.h"

int main() {
    Student Eve("Eve", "12345");

    StudentCard eves_card(Eve);
    eves_card.print();

    const Course AdvProg("IN1503", CourseType::Lecture);
    const Course Sc1("IN2182",CourseType::Lecture);
    const Course NumProg("MA3305,IN2156",CourseType::Lecture);
    
    Eve.register_for(AdvProg);
    Eve.register_for(Sc1);
    Eve.register_for(NumProg);

    std::cout<< Eve.getName() << ' ' << Eve.getRegistNumber() << std::endl;

    Eve.list_courses();
}