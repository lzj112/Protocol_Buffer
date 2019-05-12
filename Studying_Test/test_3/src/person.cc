#include <string>
#include <iostream>

#include "person.h"
using namespace std;

Person::Person(string name, int score) 
{
    stu.set_name(name);
    stu.set_score(score);
}

void Person::setStuInfo(string name, int score) 
{
    stu.set_name(name);
    stu.set_score(score);
}

void Person::print() 
{
    std::cout << "name = "
              << stu.name()
              << ", score = "
              << stu.score()
              << std::endl;
}