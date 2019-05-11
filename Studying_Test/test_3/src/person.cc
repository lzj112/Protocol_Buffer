
#include <iostream>

#include "person.h"

Person::Person(string name, int score) 
{
    student.set_name(name);
    student.set_score(score);
}

void Person::setStuInfo(string name, int score) 
{
    student.set_name(name);
    student.set_score(score);
}

void Person::print() 
{
    std::cout << "name = "
              << student.name()
              << ", score = "
              << student.score()
              << std::endl;
}