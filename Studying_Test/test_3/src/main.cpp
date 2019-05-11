#include "person.h"

int main() 
{
    string name("lzj");
    Person person_1;
    Person person_2(name, 10);
    person_1.setStuInfo(name, 100);

    person_1.print();
    person_2.print();
}
