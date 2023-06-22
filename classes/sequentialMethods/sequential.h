# ifndef SEQUENTIAL_H
# define SEQUENTIAL_H

#include <iostream>
#include "../../constants.h"

class Dog {
	public :
        //constructors
		Dog () = default;
		Dog (std::string *name, int age, int serialNumber);
        //destructor
		~Dog ();
	    //Methods/functions
        std::string get_name();
        int         get_age();
        int         get_serialNumber();
        Dog*        set_name(std::string *name);
        Dog*        set_age(int age);
        Dog*        set_serialNumber(int serialNumber);
	// Members variables
	private :
		std::string *name {nullptr};
		int         age {};
		int         *serialNumber {nullptr};
};	

int main()
{
    std::string name = "Poopy";
	Dog myDog(&name, 15, 155);
    myDog.set_name(&name);
    myDog.set_age(3);
	std::cout << "name: " << myDog.get_name() << std::endl;
	std::cout << "age: " << myDog.get_age() << std::endl;
    name += "Peepee";
    myDog.set_name(&name);
	std::cout << "name: " << myDog.get_name() << std::endl;
	std::cout << "last but not least" << std::endl;
    // sequential calls
	std::cout << "Sequential calls" << std::endl;
    std::string new_name = "newPoopy";
    int newSerialNumber = 255;
    myDog.set_name(&new_name)->set_age(255)->set_serialNumber(newSerialNumber);
	std::cout << "name: " << myDog.get_name() << std::endl;
	std::cout << "age: " << myDog.get_age() << std::endl;
	return (0);
}

# endif