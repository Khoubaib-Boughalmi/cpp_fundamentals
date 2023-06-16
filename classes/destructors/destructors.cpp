#include "destructors.h"

Dog::Dog (std::string *dog_name, int dog_age, int dog_serialNumber)
{
    name = dog_name;
    age = dog_age;
    serialNumber = new int;
    *serialNumber = dog_serialNumber;
}
Dog::~Dog ()
{
    free(serialNumber);
    std::cout << "freed serialNumber" << std::endl;
}

std::string Dog::get_name()
{
    return *name;
}

int Dog::get_age()
{
    return age;
}

int Dog::get_serialNumber()
{
    return *serialNumber;
}

void Dog::set_name(std::string *new_name)
{
    name = new_name;
}

void Dog::set_age(int new_age)
{
    age = new_age;
}

void Dog::set_serialNumber(int new_serialNumber)
{
    *serialNumber = new_serialNumber;
}

