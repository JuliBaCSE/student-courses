#ifndef COURSE_H
#define COURSE_H

#include <string>

// TODO

enum class CourseType
{
    Lecture,
    Seminar,
    Practical
};

class Course {
private:
    const std::string _courseID;
    CourseType _courseType;

public:
    std::string getID() const;

    Course(std::string courseID, CourseType courseType);
};

#endif // COURSE_Η