#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include "student.pb.h"

class Person 
{
public: 
    Person()
    {}
    Person(std::string name, int score);
    ~Person() 
    {}
    void setStuInfo(std::string name, int score);
    void print();
private:
    Student::student stu;
};

#endif