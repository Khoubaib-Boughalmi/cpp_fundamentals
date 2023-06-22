#include "thisPointer.h"

Dog::Dog (std::string *dog_name, int dog_age, int dog_serialNumber)
{
    name = dog_name;
    age = dog_age;
    serialNumber = new int;
    *serialNumber = dog_serialNumber;
}
Dog::~Dog ()
{
    delete serialNumber;
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

void Dog::set_name(std::string *name)
{
    this->name = name;
}

void Dog::set_age(int age)
{
    this->age = age;
}

void Dog::set_serialNumber(int serialNumber)
{
    *(this->serialNumber) = serialNumber;
}

