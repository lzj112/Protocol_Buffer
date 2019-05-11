#ifndef PERSON_H_
#define PERSON_H_

#include "student.pb.h"

class Person 
{
public: 
    person()
    {}
    person(string name, int score);
    ~person() 
    {}
    void setStuInfo(string name, int score);
    void print();
private:
    Student::student;
};

#endif